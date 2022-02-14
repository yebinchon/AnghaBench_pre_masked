
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct adv7511 {int * cec_clk; int cec_clk_freq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_0, struct adv7511 *VAR_1)
{
 VAR_1->cec_clk = FUNC_4(VAR_0, "cec");
 if (FUNC_0(VAR_1->cec_clk)) {
  int VAR_2 = FUNC_1(VAR_1->cec_clk);

  VAR_1->cec_clk = ((void*)0);
  return VAR_2;
 }
 FUNC_3(VAR_1->cec_clk);
 VAR_1->cec_clk_freq = FUNC_2(VAR_1->cec_clk);
 return 0;
}
