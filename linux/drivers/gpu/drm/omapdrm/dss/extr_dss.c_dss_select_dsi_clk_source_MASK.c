
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_device {int* dsi_clk_source; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;



 int VAR_0 ;
 int FUNC_2 (struct dss_device*,int ,int,int,int) ;

void FUNC_3(struct dss_device *VAR_1, int VAR_2,
          enum dss_clk_source VAR_3)
{
 int VAR_4, VAR_5;

 switch (VAR_3) {
 case 130:
  VAR_4 = 0;
  break;
 case 129:
  FUNC_1(VAR_2 != 0);
  VAR_4 = 1;
  break;
 case 128:
  FUNC_1(VAR_2 != 1);
  VAR_4 = 1;
  break;
 default:
  FUNC_0();
  return;
 }

 VAR_5 = VAR_2 == 0 ? 1 : 10;
 FUNC_2(VAR_1, VAR_0, VAR_4, VAR_5, VAR_5);

 VAR_1->dsi_clk_source[VAR_2] = VAR_3;
}
