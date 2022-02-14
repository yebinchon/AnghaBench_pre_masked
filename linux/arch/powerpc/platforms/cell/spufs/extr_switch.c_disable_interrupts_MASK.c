
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* int_mask_class2_RW; void* int_mask_class1_RW; void* int_mask_class0_RW; } ;
struct spu_state {TYPE_1__ priv1; } ;
struct spu {int * irqs; int flags; int register_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (struct spu*,int) ;
 int FUNC_6 (struct spu*,int,unsigned long) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(struct spu_state *VAR_2, struct spu *VAR_3)
{
 FUNC_3(&VAR_3->register_lock);
 if (VAR_2) {
  VAR_2->priv1.int_mask_class0_RW = FUNC_5(VAR_3, 0);
  VAR_2->priv1.int_mask_class1_RW = FUNC_5(VAR_3, 1);
  VAR_2->priv1.int_mask_class2_RW = FUNC_5(VAR_3, 2);
 }
 FUNC_6(VAR_3, 0, 0ul);
 FUNC_6(VAR_3, 1, 0ul);
 FUNC_6(VAR_3, 2, 0ul);
 FUNC_1();
 FUNC_4(&VAR_3->register_lock);






 FUNC_2(VAR_1, &VAR_3->flags);
 FUNC_0(VAR_0, &VAR_3->flags);
 FUNC_7(VAR_3->irqs[0]);
 FUNC_7(VAR_3->irqs[1]);
 FUNC_7(VAR_3->irqs[2]);
}
