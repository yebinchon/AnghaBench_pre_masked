
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int irq_lock; int is_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct vop*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct vop *VAR_2)
{
 unsigned long VAR_3;

 if (FUNC_1(!VAR_2->is_enabled))
  return;

 FUNC_2(&VAR_2->irq_lock, VAR_3);

 FUNC_0(VAR_2, VAR_1, VAR_0, 0);

 FUNC_3(&VAR_2->irq_lock, VAR_3);
}
