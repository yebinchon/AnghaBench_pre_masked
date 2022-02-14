
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lima_vm {int lock; int mm; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ start; } ;
struct lima_bo_va {int ref_count; TYPE_2__ node; int list; struct lima_vm* vm; } ;
struct TYPE_4__ {int size; } ;
struct lima_bo {int lock; int va; int pages_dma_addr; TYPE_1__ gem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct lima_bo_va*) ;
 struct lima_bo_va* FUNC_3 (int,int ) ;
 struct lima_bo_va* FUNC_4 (struct lima_vm*,struct lima_bo*) ;
 int FUNC_5 (struct lima_vm*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct lima_vm *VAR_3, struct lima_bo *VAR_4, bool VAR_5)
{
 struct lima_bo_va *VAR_6;
 int VAR_7;

 FUNC_7(&VAR_4->lock);

 VAR_6 = FUNC_4(VAR_3, VAR_4);
 if (VAR_6) {
  VAR_6->ref_count++;
  FUNC_8(&VAR_4->lock);
  return 0;
 }


 if (!VAR_5) {
  FUNC_8(&VAR_4->lock);
  return -VAR_0;
 }

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto err_out0;
 }

 VAR_6->vm = VAR_3;
 VAR_6->ref_count = 1;

 FUNC_7(&VAR_3->lock);

 VAR_7 = FUNC_0(&VAR_3->mm, &VAR_6->node, VAR_4->gem.size);
 if (VAR_7)
  goto err_out1;

 VAR_7 = FUNC_5(VAR_3, VAR_4->pages_dma_addr, VAR_6->node.start,
         VAR_6->node.start + VAR_6->node.size - 1);
 if (VAR_7)
  goto err_out2;

 FUNC_8(&VAR_3->lock);

 FUNC_6(&VAR_6->list, &VAR_4->va);

 FUNC_8(&VAR_4->lock);
 return 0;

err_out2:
 FUNC_1(&VAR_6->node);
err_out1:
 FUNC_8(&VAR_3->lock);
 FUNC_2(VAR_6);
err_out0:
 FUNC_8(&VAR_4->lock);
 return VAR_7;
}
