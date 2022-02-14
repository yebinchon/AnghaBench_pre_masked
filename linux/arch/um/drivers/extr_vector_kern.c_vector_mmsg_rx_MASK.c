
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vector_queue {void** skbuff_vector; int queue_depth; int max_depth; struct mmsghdr* mmsg_vector; } ;
struct TYPE_12__ {int rx_queue_max; int rx_queue_running_average; int rx_csum_offload_good; int rx_encaps_errors; } ;
struct vector_private {int in_error; scalar_t__ header_size; int (* verify_header ) (int ,struct sk_buff*,struct vector_private*) ;scalar_t__ rx_header_size; TYPE_6__ estats; TYPE_5__* dev; TYPE_1__* fds; struct vector_queue* rx_queue; } ;
struct sk_buff {scalar_t__ len; int dev; int protocol; int ip_summed; } ;
struct TYPE_9__ {TYPE_2__* msg_iov; } ;
struct mmsghdr {scalar_t__ msg_len; TYPE_3__ msg_hdr; } ;
struct TYPE_10__ {int rx_packets; int rx_bytes; } ;
struct TYPE_11__ {TYPE_4__ stats; } ;
struct TYPE_8__ {int iov_base; } ;
struct TYPE_7__ {int rx_fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct vector_queue*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (int ,struct sk_buff*,struct vector_private*) ;
 int FUNC_6 (int ,struct mmsghdr*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct vector_private *VAR_1)
{
 int VAR_2, VAR_3;
 struct vector_queue *VAR_4 = VAR_1->rx_queue;
 struct sk_buff *VAR_5;
 struct mmsghdr *VAR_6 = VAR_4->mmsg_vector;
 void **VAR_7 = VAR_4->skbuff_vector;
 int VAR_8;





 FUNC_3(VAR_4);



 VAR_2 = FUNC_6(
  VAR_1->fds->rx_fd, VAR_4->mmsg_vector, VAR_4->max_depth, 0);

 if (VAR_2 < 0)
  VAR_1->in_error = 1;

 if (VAR_2 <= 0)
  return VAR_2;






 VAR_4->queue_depth = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_5 = (*VAR_7);
  if (VAR_6->msg_len > VAR_1->header_size) {
   if (VAR_1->header_size > 0) {
    VAR_8 = VAR_1->verify_header(
     VAR_6->msg_hdr.msg_iov->iov_base,
     VAR_5,
     VAR_1
    );
    if (VAR_8 < 0) {





     FUNC_0(VAR_5);
     VAR_1->estats.rx_encaps_errors++;
     continue;
    }
    if (VAR_8 > 0) {
     VAR_1->estats.rx_csum_offload_good++;
     VAR_5->ip_summed = VAR_0;
    }
   }
   FUNC_4(VAR_5,
    VAR_6->msg_len - VAR_1->rx_header_size);
   VAR_5->protocol = FUNC_1(VAR_5, VAR_5->dev);




   VAR_1->dev->stats.rx_bytes += VAR_5->len;
   VAR_1->dev->stats.rx_packets++;
   FUNC_2(VAR_5);
  } else {




   if (VAR_5 != ((void*)0))
    FUNC_0(VAR_5);
  }
  (*VAR_7) = ((void*)0);

  VAR_6++;
  VAR_7++;
 }
 if (VAR_2 > 0) {
  if (VAR_1->estats.rx_queue_max < VAR_2)
   VAR_1->estats.rx_queue_max = VAR_2;
  VAR_1->estats.rx_queue_running_average =
   (VAR_1->estats.rx_queue_running_average + VAR_2) >> 1;
 }
 return VAR_2;
}
