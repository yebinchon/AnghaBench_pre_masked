
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_tve {int dac_reg; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct imx_tve* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
 void *VAR_2)
{
 struct imx_tve *VAR_3 = FUNC_1(VAR_0);

 if (!FUNC_0(VAR_3->dac_reg))
  FUNC_2(VAR_3->dac_reg);
}
