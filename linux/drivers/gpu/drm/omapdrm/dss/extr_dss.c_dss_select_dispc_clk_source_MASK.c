
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dss_device {int dispc_clk_source; TYPE_1__* feat; } ;
typedef enum dss_clk_source { ____Placeholder_dss_clk_source } dss_clk_source ;
struct TYPE_4__ {int end; int start; } ;
struct TYPE_3__ {TYPE_2__ dispc_clk_switch; scalar_t__ has_lcd_clk_src; } ;


 int FUNC_0 () ;



 int VAR_0 ;
 int FUNC_1 (struct dss_device*,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct dss_device *VAR_1,
     enum dss_clk_source VAR_2)
{
 int VAR_3;





 if (FUNC_2(VAR_1->feat->has_lcd_clk_src && VAR_2 != 130))
  return;

 switch (VAR_2) {
 case 130:
  VAR_3 = 0;
  break;
 case 129:
  VAR_3 = 1;
  break;
 case 128:
  VAR_3 = 2;
  break;
 default:
  FUNC_0();
  return;
 }

 FUNC_1(VAR_1, VAR_0, VAR_3,
      VAR_1->feat->dispc_clk_switch.start,
      VAR_1->feat->dispc_clk_switch.end);

 VAR_1->dispc_clk_source = VAR_2;
}
