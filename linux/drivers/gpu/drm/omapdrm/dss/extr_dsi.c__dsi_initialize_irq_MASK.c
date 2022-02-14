
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dsi_data {int irq_lock; int isr_tables; } ;


 int FUNC_0 (struct dsi_data*) ;
 int FUNC_1 (struct dsi_data*) ;
 int FUNC_2 (struct dsi_data*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct dsi_data *VAR_0)
{
 unsigned long VAR_1;
 int VAR_2;

 FUNC_4(&VAR_0->irq_lock, VAR_1);

 FUNC_3(&VAR_0->isr_tables, 0, sizeof(VAR_0->isr_tables));

 FUNC_0(VAR_0);
 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_0);

 FUNC_5(&VAR_0->irq_lock, VAR_1);
}
