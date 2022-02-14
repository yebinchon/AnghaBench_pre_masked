
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_backend {int sat_reset; int sat_clk; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct sun4i_backend* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_0) {
 struct sun4i_backend *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 VAR_1->sat_reset = FUNC_6(VAR_0, "sat");
 if (FUNC_0(VAR_1->sat_reset)) {
  FUNC_3(VAR_0, "Couldn't get the SAT reset line\n");
  return FUNC_1(VAR_1->sat_reset);
 }

 VAR_2 = FUNC_8(VAR_1->sat_reset);
 if (VAR_2) {
  FUNC_3(VAR_0, "Couldn't deassert the SAT reset line\n");
  return VAR_2;
 }

 VAR_1->sat_clk = FUNC_5(VAR_0, "sat");
 if (FUNC_0(VAR_1->sat_clk)) {
  FUNC_3(VAR_0, "Couldn't get our SAT clock\n");
  VAR_2 = FUNC_1(VAR_1->sat_clk);
  goto err_assert_reset;
 }

 VAR_2 = FUNC_2(VAR_1->sat_clk);
 if (VAR_2) {
  FUNC_3(VAR_0, "Couldn't enable the SAT clock\n");
  return VAR_2;
 }

 return 0;

err_assert_reset:
 FUNC_7(VAR_1->sat_reset);
 return VAR_2;
}
