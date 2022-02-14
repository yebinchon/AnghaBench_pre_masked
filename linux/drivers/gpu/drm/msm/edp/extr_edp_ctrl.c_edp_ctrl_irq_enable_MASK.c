
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edp_ctrl {int irq_lock; scalar_t__ base; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct edp_ctrl *VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 FUNC_0("%d", VAR_5);
 FUNC_2(&VAR_4->irq_lock, VAR_6);
 if (VAR_5) {
  FUNC_1(VAR_4->base + VAR_2, VAR_0);
  FUNC_1(VAR_4->base + VAR_3, VAR_1);
 } else {
  FUNC_1(VAR_4->base + VAR_2, 0x0);
  FUNC_1(VAR_4->base + VAR_3, 0x0);
 }
 FUNC_3(&VAR_4->irq_lock, VAR_6);
 FUNC_0("exit");
}
