
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int rx_csum_offload_good; int rx_encaps_errors; } ;
struct vector_private {int header_size; int in_error; int (* verify_header ) (int ,struct sk_buff*,struct vector_private*) ;TYPE_4__* dev; scalar_t__ rx_header_size; TYPE_2__ estats; int header_rxbuffer; TYPE_1__* fds; } ;
struct user_msghdr {int msg_iovlen; scalar_t__ msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct sk_buff {scalar_t__ len; int dev; int protocol; int ip_summed; } ;
struct iovec {int iov_len; int iov_base; } ;
struct TYPE_7__ {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct TYPE_8__ {TYPE_3__ stats; } ;
struct TYPE_5__ {int rx_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct vector_private*,struct user_msghdr*) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (int ,struct sk_buff*,struct vector_private*) ;
 int FUNC_6 (int ,struct user_msghdr*,int ) ;

__attribute__((used)) static int FUNC_7(struct vector_private *VAR_4)
{
 int VAR_5;
 struct user_msghdr VAR_6;
 struct iovec VAR_7[2 + VAR_2];
 int VAR_8 = 0;
 struct sk_buff *VAR_9;
 int VAR_10;

 VAR_6.msg_name = ((void*)0);
 VAR_6.msg_namelen = 0;
 VAR_6.msg_iov = (struct iovec *) &VAR_7;
 VAR_6.msg_control = ((void*)0);
 VAR_6.msg_controllen = 0;
 VAR_6.msg_flags = 0;

 if (VAR_4->header_size > 0) {
  VAR_7[0].iov_base = VAR_4->header_rxbuffer;
  VAR_7[0].iov_len = VAR_4->header_size;
 }

 VAR_9 = FUNC_3(VAR_4, &VAR_6);

 if (VAR_9 == ((void*)0)) {



  VAR_7[VAR_8].iov_base = VAR_3;
  VAR_7[VAR_8].iov_len = VAR_1;
  VAR_6.msg_iovlen = 1;
  VAR_4->dev->stats.rx_dropped++;
 }

 VAR_5 = FUNC_6(VAR_4->fds->rx_fd, &VAR_6, 0);
 if (VAR_5 < 0) {
  VAR_4->in_error = 1;
  return VAR_5;
 }

 if (VAR_9 != ((void*)0)) {
  if (VAR_5 > VAR_4->header_size) {
   if (VAR_4->header_size > 0) {
    VAR_10 = VAR_4->verify_header(
     VAR_4->header_rxbuffer, VAR_9, VAR_4);
    if (VAR_10 < 0) {
     FUNC_0(VAR_9);
     VAR_4->dev->stats.rx_dropped++;
     VAR_4->estats.rx_encaps_errors++;
     return 0;
    }
    if (VAR_10 > 0) {
     VAR_4->estats.rx_csum_offload_good++;
     VAR_9->ip_summed = VAR_0;
    }
   }
   FUNC_4(VAR_9, VAR_5 - VAR_4->rx_header_size);
   VAR_9->protocol = FUNC_1(VAR_9, VAR_9->dev);
   VAR_4->dev->stats.rx_bytes += VAR_9->len;
   VAR_4->dev->stats.rx_packets++;
   FUNC_2(VAR_9);
  } else {
   FUNC_0(VAR_9);
  }
 }
 return VAR_5;
}
