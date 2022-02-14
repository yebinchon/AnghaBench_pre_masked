
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msg_iovlen; scalar_t__ msg_namelen; int * msg_name; int msg_flags; scalar_t__ msg_controllen; int * msg_control; struct iovec* msg_iov; } ;
struct vector_queue {int max_depth; int max_iov_frags; struct vector_queue* mmsg_vector; scalar_t__ tail; scalar_t__ head; scalar_t__ queue_depth; int tail_lock; int head_lock; TYPE_1__ msg_hdr; int ** skbuff_vector; int dev; } ;
struct vector_private {scalar_t__ header_size; int dev; } ;
struct mmsghdr {int max_depth; int max_iov_frags; struct mmsghdr* mmsg_vector; scalar_t__ tail; scalar_t__ head; scalar_t__ queue_depth; int tail_lock; int head_lock; TYPE_1__ msg_hdr; int ** skbuff_vector; int dev; } ;
struct iovec {int iov_len; int * iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vector_queue*) ;
 int FUNC_1 (struct vector_queue*) ;
 void* FUNC_2 (int,int ) ;
 struct iovec* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct vector_queue *FUNC_5(
 struct vector_private *VAR_2,
 int VAR_3,
 int VAR_4,
 int VAR_5)
{
 struct vector_queue *VAR_6;
 int VAR_7;
 struct iovec *VAR_8;
 struct mmsghdr *VAR_9;

 VAR_6 = FUNC_2(sizeof(struct vector_queue), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->max_depth = VAR_3;
 VAR_6->dev = VAR_2->dev;
 VAR_6->mmsg_vector = FUNC_2(
  (sizeof(struct mmsghdr) * VAR_3), VAR_0);
 if (VAR_6->mmsg_vector == ((void*)0))
  goto out_mmsg_fail;
 VAR_6->skbuff_vector = FUNC_2(
  (sizeof(void *) * VAR_3), VAR_0);
 if (VAR_6->skbuff_vector == ((void*)0))
  goto out_skb_fail;



 VAR_9 = VAR_6->mmsg_vector;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {



  *(VAR_6->skbuff_vector + VAR_7) = ((void*)0);
  VAR_9->msg_hdr.msg_iov = ((void*)0);
  VAR_9++;
 }
 VAR_9 = VAR_6->mmsg_vector;
 VAR_6->max_iov_frags = VAR_5;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  if (VAR_2->header_size > 0)
   VAR_8 = FUNC_3(3 + VAR_5,
         sizeof(struct iovec),
         VAR_0
   );
  else
   VAR_8 = FUNC_3(2 + VAR_5,
         sizeof(struct iovec),
         VAR_0
   );
  if (VAR_8 == ((void*)0))
   goto out_fail;
  VAR_9->msg_hdr.msg_iov = VAR_8;
  VAR_9->msg_hdr.msg_iovlen = 1;
  VAR_9->msg_hdr.msg_control = ((void*)0);
  VAR_9->msg_hdr.msg_controllen = 0;
  VAR_9->msg_hdr.msg_flags = VAR_1;
  VAR_9->msg_hdr.msg_name = ((void*)0);
  VAR_9->msg_hdr.msg_namelen = 0;
  if (VAR_2->header_size > 0) {
   VAR_8->iov_base = FUNC_2(VAR_4, VAR_0);
   if (VAR_8->iov_base == ((void*)0))
    goto out_fail;
   VAR_8->iov_len = VAR_4;
   VAR_9->msg_hdr.msg_iovlen = 2;
   VAR_8++;
  }
  VAR_8->iov_base = ((void*)0);
  VAR_8->iov_len = 0;
  VAR_9++;
 }
 FUNC_4(&VAR_6->head_lock);
 FUNC_4(&VAR_6->tail_lock);
 VAR_6->queue_depth = 0;
 VAR_6->head = 0;
 VAR_6->tail = 0;
 return VAR_6;
out_skb_fail:
 FUNC_1(VAR_6->mmsg_vector);
out_mmsg_fail:
 FUNC_1(VAR_6);
 return ((void*)0);
out_fail:
 FUNC_0(VAR_6);
 return ((void*)0);
}
