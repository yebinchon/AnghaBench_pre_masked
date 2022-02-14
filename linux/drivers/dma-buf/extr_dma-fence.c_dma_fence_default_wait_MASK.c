
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int lock; int flags; int cb_list; TYPE_1__* ops; } ;
struct TYPE_4__ {int node; int func; } ;
struct default_wait_cb {TYPE_2__ base; int task; } ;
struct TYPE_3__ {int (* enable_signaling ) (struct dma_fence*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (struct dma_fence*) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (struct dma_fence*) ;

signed long
FUNC_13(struct dma_fence *VAR_8, bool VAR_9, signed long VAR_10)
{
 struct default_wait_cb VAR_11;
 unsigned long VAR_12;
 signed long VAR_13 = VAR_10 ? VAR_10 : 1;
 bool VAR_14;

 if (FUNC_11(VAR_1, &VAR_8->flags))
  return VAR_13;

 FUNC_7(VAR_8->lock, VAR_12);

 if (VAR_9 && FUNC_6(VAR_6)) {
  VAR_13 = -VAR_2;
  goto out;
 }

 VAR_14 = FUNC_10(VAR_0,
       &VAR_8->flags);

 if (FUNC_11(VAR_1, &VAR_8->flags))
  goto out;

 if (!VAR_14 && VAR_8->ops->enable_signaling) {
  FUNC_12(VAR_8);

  if (!VAR_8->ops->enable_signaling(VAR_8)) {
   FUNC_1(VAR_8);
   goto out;
  }
 }

 if (!VAR_10) {
  VAR_13 = 0;
  goto out;
 }

 VAR_11.base.func = VAR_7;
 VAR_11.task = VAR_6;
 FUNC_2(&VAR_11.base.node, &VAR_8->cb_list);

 while (!FUNC_11(VAR_1, &VAR_8->flags) && VAR_13 > 0) {
  if (VAR_9)
   FUNC_0(VAR_3);
  else
   FUNC_0(VAR_5);
  FUNC_8(VAR_8->lock, VAR_12);

  VAR_13 = FUNC_5(VAR_13);

  FUNC_7(VAR_8->lock, VAR_12);
  if (VAR_13 > 0 && VAR_9 && FUNC_6(VAR_6))
   VAR_13 = -VAR_2;
 }

 if (!FUNC_4(&VAR_11.base.node))
  FUNC_3(&VAR_11.base.node);
 FUNC_0(VAR_4);

out:
 FUNC_8(VAR_8->lock, VAR_12);
 return VAR_13;
}
