
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * isr_table_vc; } ;
struct dsi_data {int irq_lock; TYPE_1__ isr_tables; } ;
typedef int omap_dsi_isr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int ,int ,int ) ;
 int FUNC_2 (struct dsi_data*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct dsi_data *VAR_0, int VAR_1,
          omap_dsi_isr_t VAR_2, void *VAR_3, u32 VAR_4)
{
 unsigned long VAR_5;
 int VAR_6;

 FUNC_3(&VAR_0->irq_lock, VAR_5);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4,
   VAR_0->isr_tables.isr_table_vc[VAR_1],
   FUNC_0(VAR_0->isr_tables.isr_table_vc[VAR_1]));

 if (VAR_6 == 0)
  FUNC_2(VAR_0, VAR_1);

 FUNC_4(&VAR_0->irq_lock, VAR_5);

 return VAR_6;
}
