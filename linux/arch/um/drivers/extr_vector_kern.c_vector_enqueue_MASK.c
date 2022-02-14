
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vector_queue {int queue_depth; int max_depth; int tail; int tail_lock; TYPE_4__* dev; struct sk_buff** skbuff_vector; int head_lock; struct mmsghdr* mmsg_vector; } ;
struct vector_private {TYPE_2__* fds; } ;
struct sk_buff {int len; } ;
struct TYPE_6__ {int msg_iovlen; int msg_namelen; int msg_name; int msg_iov; } ;
struct mmsghdr {TYPE_1__ msg_hdr; } ;
struct TYPE_8__ {int tx_dropped; } ;
struct TYPE_9__ {TYPE_3__ stats; } ;
struct TYPE_7__ {int remote_addr_size; int remote_addr; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (TYPE_4__*,int,int) ;
 struct vector_private* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct vector_private*,struct sk_buff*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vector_queue*,int) ;

__attribute__((used)) static int FUNC_7(struct vector_queue *VAR_0, struct sk_buff *VAR_1)
{
 struct vector_private *VAR_2 = FUNC_2(VAR_0->dev);
 int VAR_3;
 int VAR_4;
 struct mmsghdr *VAR_5 = VAR_0->mmsg_vector;
 int VAR_6;

 FUNC_4(&VAR_0->tail_lock);
 FUNC_4(&VAR_0->head_lock);
 VAR_3 = VAR_0->queue_depth;
 FUNC_5(&VAR_0->head_lock);

 if (VAR_1)
  VAR_4 = VAR_1->len;

 if (VAR_3 < VAR_0->max_depth) {

  *(VAR_0->skbuff_vector + VAR_0->tail) = VAR_1;
  VAR_5 += VAR_0->tail;
  VAR_6 = FUNC_3(
   VAR_2,
   VAR_1,
   VAR_5->msg_hdr.msg_iov
  );
  if (VAR_6 < 1)
   goto drop;
  VAR_5->msg_hdr.msg_iovlen = VAR_6;
  VAR_5->msg_hdr.msg_name = VAR_2->fds->remote_addr;
  VAR_5->msg_hdr.msg_namelen = VAR_2->fds->remote_addr_size;
  VAR_3 = FUNC_6(VAR_0, 1);
 } else
  goto drop;
 FUNC_5(&VAR_0->tail_lock);
 return VAR_3;
drop:
 VAR_0->dev->stats.tx_dropped++;
 if (VAR_1 != ((void*)0)) {
  VAR_4 = VAR_1->len;
  FUNC_0(VAR_1);
  FUNC_1(VAR_0->dev, 1, VAR_4);
 }
 FUNC_5(&VAR_0->tail_lock);
 return VAR_3;
}
