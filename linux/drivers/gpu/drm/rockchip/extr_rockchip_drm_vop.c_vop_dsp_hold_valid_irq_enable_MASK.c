
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop {int irq_lock; int is_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct vop*,int ,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct vop *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_1(!VAR_3->is_enabled))
  return;

 FUNC_2(&VAR_3->irq_lock, VAR_4);

 FUNC_0(VAR_3, VAR_1, VAR_0, 1);
 FUNC_0(VAR_3, VAR_2, VAR_0, 1);

 FUNC_3(&VAR_3->irq_lock, VAR_4);
}
