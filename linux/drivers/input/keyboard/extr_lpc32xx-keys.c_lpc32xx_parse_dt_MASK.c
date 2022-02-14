
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct lpc32xx_kscan_drv {int scan_delay; int deb_clks; int row_shift; scalar_t__ matrix_sz; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
          struct lpc32xx_kscan_drv *VAR_2)
{
 struct device_node *VAR_3 = VAR_1->of_node;
 u32 VAR_4 = 0, VAR_5 = 0;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_4 != VAR_5) {
  FUNC_0(VAR_1, "rows and columns must be equal!\n");
  return -VAR_0;
 }

 VAR_2->matrix_sz = VAR_4;
 VAR_2->row_shift = FUNC_1(VAR_5);

 FUNC_3(VAR_3, "nxp,debounce-delay-ms", &VAR_2->deb_clks);
 FUNC_3(VAR_3, "nxp,scan-delay-ms", &VAR_2->scan_delay);
 if (!VAR_2->deb_clks || !VAR_2->scan_delay) {
  FUNC_0(VAR_1, "debounce or scan delay not specified\n");
  return -VAR_0;
 }

 return 0;
}
