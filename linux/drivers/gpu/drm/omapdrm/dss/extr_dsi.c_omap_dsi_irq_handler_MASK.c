
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_data {int isr_tables_copy; int irq_lock; int isr_tables; int te_timer; int is_enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dsi_data*,int,int*,int) ;
 int FUNC_3 (struct dsi_data*,int,int*,int) ;
 int FUNC_4 (int *,int,int*,int) ;
 int FUNC_5 (struct dsi_data*,int ) ;
 int FUNC_6 (struct dsi_data*,int ,int) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct dsi_data *VAR_9 = VAR_8;
 u32 VAR_10, VAR_11[4], VAR_12;
 int VAR_13;

 if (!VAR_9->is_enabled)
  return VAR_6;

 FUNC_8(&VAR_9->irq_lock);

 VAR_10 = FUNC_5(VAR_9, VAR_1);


 if (!VAR_10) {
  FUNC_9(&VAR_9->irq_lock);
  return VAR_6;
 }

 FUNC_6(VAR_9, VAR_1, VAR_10 & ~VAR_2);

 FUNC_5(VAR_9, VAR_1);

 for (VAR_13 = 0; VAR_13 < 4; ++VAR_13) {
  if ((VAR_10 & (1 << VAR_13)) == 0) {
   VAR_11[VAR_13] = 0;
   continue;
  }

  VAR_11[VAR_13] = FUNC_5(VAR_9, FUNC_0(VAR_13));

  FUNC_6(VAR_9, FUNC_0(VAR_13), VAR_11[VAR_13]);

  FUNC_5(VAR_9, FUNC_0(VAR_13));
 }

 if (VAR_10 & VAR_3) {
  VAR_12 = FUNC_5(VAR_9, VAR_0);

  FUNC_6(VAR_9, VAR_0, VAR_12);

  FUNC_5(VAR_9, VAR_0);
 } else {
  VAR_12 = 0;
 }
 FUNC_7(&VAR_9->isr_tables_copy, &VAR_9->isr_tables,
  sizeof(VAR_9->isr_tables));

 FUNC_9(&VAR_9->irq_lock);

 FUNC_4(&VAR_9->isr_tables_copy, VAR_10, VAR_11, VAR_12);

 FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);

 FUNC_2(VAR_9, VAR_10, VAR_11, VAR_12);

 return VAR_5;
}
