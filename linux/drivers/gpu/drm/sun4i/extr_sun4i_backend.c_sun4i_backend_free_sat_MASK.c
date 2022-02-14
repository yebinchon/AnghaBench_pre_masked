
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_backend {int sat_reset; int sat_clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sun4i_backend* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0) {
 struct sun4i_backend *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->sat_clk);
 FUNC_2(VAR_1->sat_reset);

 return 0;
}
