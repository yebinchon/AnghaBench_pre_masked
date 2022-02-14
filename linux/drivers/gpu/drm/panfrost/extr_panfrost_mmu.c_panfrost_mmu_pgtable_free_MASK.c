
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_mmu {scalar_t__ as; int pgtbl_ops; int list; } ;
struct panfrost_file_priv {struct panfrost_mmu mmu; struct panfrost_device* pfdev; } ;
struct panfrost_device {int as_lock; int as_in_use_mask; int as_alloc_mask; int dev; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct panfrost_device*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct panfrost_file_priv *VAR_0)
{
 struct panfrost_device *VAR_1 = VAR_0->pfdev;
 struct panfrost_mmu *VAR_2 = &VAR_0->mmu;

 FUNC_7(&VAR_1->as_lock);
 if (VAR_2->as >= 0) {
  FUNC_5(VAR_1->dev);
  if (FUNC_4(VAR_1->dev))
   FUNC_3(VAR_1, VAR_2->as);
  FUNC_6(VAR_1->dev);

  FUNC_0(VAR_2->as, &VAR_1->as_alloc_mask);
  FUNC_0(VAR_2->as, &VAR_1->as_in_use_mask);
  FUNC_2(&VAR_2->list);
 }
 FUNC_8(&VAR_1->as_lock);

 FUNC_1(VAR_2->pgtbl_ops);
}
