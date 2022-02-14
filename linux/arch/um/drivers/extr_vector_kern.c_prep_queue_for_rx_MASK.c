
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_queue {void** skbuff_vector; int queue_depth; struct mmsghdr* mmsg_vector; int dev; } ;
struct vector_private {int dummy; } ;
struct mmsghdr {int msg_hdr; } ;


 struct vector_private* FUNC_0 (int ) ;
 void* FUNC_1 (struct vector_private*,int *) ;

__attribute__((used)) static void FUNC_2(struct vector_queue *VAR_0)
{
 struct vector_private *VAR_1 = FUNC_0(VAR_0->dev);
 struct mmsghdr *VAR_2 = VAR_0->mmsg_vector;
 void **VAR_3 = VAR_0->skbuff_vector;
 int VAR_4;

 if (VAR_0->queue_depth == 0)
  return;
 for (VAR_4 = 0; VAR_4 < VAR_0->queue_depth; VAR_4++) {





  *VAR_3 = FUNC_1(VAR_1, &VAR_2->msg_hdr);
  VAR_3++;
  VAR_2++;
 }
 VAR_0->queue_depth = 0;
}
