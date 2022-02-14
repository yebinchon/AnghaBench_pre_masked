
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int clk_num; struct clk** clks; } ;
struct TYPE_5__ {TYPE_1__ clk_data; struct clk** clk_table; int * syscon_base; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 struct clk* FUNC_1 (int ) ;
 int VAR_9 ;
 struct clk* FUNC_2 (int *,char*,char const*,int ,int,int) ;
 struct clk* FUNC_3 (int *,char*,char const*,int ,int) ;
 TYPE_2__* VAR_10 ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (struct device_node*,int ,TYPE_1__*) ;
 char* FUNC_6 (struct device_node*,int) ;
 int VAR_11 ;
 int * FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct device_node*,char*,char*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct device_node *VAR_12)
{
 int VAR_13;
 const char *VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 struct clk **VAR_18;


 VAR_13 = FUNC_8(VAR_12, "clock-names", "sys_refclk");
 if (VAR_13 < 0)
  return;

 VAR_14 = FUNC_6(VAR_12, VAR_13);

 VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_9);
 if (!VAR_10)
  return;

 VAR_18 = VAR_10->clk_table;

 for (VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13)
  VAR_18[VAR_13] = FUNC_1(-VAR_8);

 VAR_10->syscon_base = FUNC_7(VAR_12, 0);
 FUNC_0(VAR_10->syscon_base == ((void*)0));


 VAR_15 = (FUNC_9(VAR_10->syscon_base) >> 6) & 3;
 switch (VAR_15) {
 case 0:
  VAR_16 = 4;
  VAR_17 = 85;
  break;
 case 1:
  VAR_16 = 6;
  VAR_17 = 112;
  break;
 case 2:
  VAR_16 = 4;
  VAR_17 = 64;
  break;
 case 3:
  VAR_16 = 8;
  VAR_17 = 106;
  break;
 }

 VAR_18[VAR_0] =
     FUNC_2(((void*)0), "cpu", VAR_14, 0, VAR_17,
          VAR_16);
 VAR_18[VAR_1] =
     FUNC_2(((void*)0), "cpu_periph", "cpu", 0, 1, 2);


 VAR_18[VAR_6] =
     FUNC_2(((void*)0), "uart_pclk", "cpu", 0, 1, 8);
 VAR_18[VAR_7] =
     FUNC_3(((void*)0), "uart_ref", VAR_14, 0,
        50000000);

 VAR_18[VAR_4] =
     FUNC_2(((void*)0), "spi_pclk", "cpu", 0, 1, 8);
 VAR_18[VAR_5] =
     FUNC_3(((void*)0), "spi_sspclk", VAR_14, 0,
        50000000);

 VAR_18[VAR_2] =
     FUNC_2(((void*)0), "dbg_pclk", "cpu", 0, 1, 8);

 VAR_10->clk_data.clks = VAR_10->clk_table;
 VAR_10->clk_data.clk_num = VAR_3;

 FUNC_5(VAR_12, VAR_11, &VAR_10->clk_data);
}
