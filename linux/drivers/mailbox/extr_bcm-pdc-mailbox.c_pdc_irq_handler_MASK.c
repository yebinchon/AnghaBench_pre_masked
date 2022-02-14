
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pdc_state {int rx_tasklet; scalar_t__ pdc_reg_vbase; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pdc_state* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct device *VAR_6 = (struct device *)VAR_5;
 struct pdc_state *VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8 = FUNC_1(VAR_7->pdc_reg_vbase + VAR_3);

 if (FUNC_4(VAR_8 == 0))
  return VAR_1;


 FUNC_2(0, VAR_7->pdc_reg_vbase + VAR_2);


 FUNC_2(VAR_8, VAR_7->pdc_reg_vbase + VAR_3);


 FUNC_3(&VAR_7->rx_tasklet);
 return VAR_0;
}
