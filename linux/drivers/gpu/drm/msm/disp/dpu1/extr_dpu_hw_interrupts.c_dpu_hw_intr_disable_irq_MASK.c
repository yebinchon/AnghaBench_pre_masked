
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpu_hw_intr {int irq_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct dpu_hw_intr*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct dpu_hw_intr *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2)
  return -VAR_0;

 if (VAR_3 < 0 || VAR_3 >= FUNC_0(VAR_1)) {
  FUNC_2("invalid IRQ index: [%d]\n", VAR_3);
  return -VAR_0;
 }

 FUNC_3(&VAR_2->irq_lock, VAR_4);
 FUNC_1(VAR_2, VAR_3);
 FUNC_4(&VAR_2->irq_lock, VAR_4);

 return 0;
}
