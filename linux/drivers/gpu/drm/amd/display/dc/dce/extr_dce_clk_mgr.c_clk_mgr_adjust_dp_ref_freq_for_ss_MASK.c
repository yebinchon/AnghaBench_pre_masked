
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fixed31_32 {int dummy; } ;
struct dce_clk_mgr {scalar_t__ dprefclk_ss_divider; int dprefclk_ss_percentage; scalar_t__ ss_on_dprefclk; } ;


 struct fixed31_32 FUNC_0 (int ,int) ;
 int FUNC_1 (struct fixed31_32) ;
 int FUNC_2 (int ,scalar_t__) ;
 struct fixed31_32 FUNC_3 (struct fixed31_32,int) ;
 int VAR_0 ;
 struct fixed31_32 FUNC_4 (int ,struct fixed31_32) ;

__attribute__((used)) static int FUNC_5(struct dce_clk_mgr *VAR_1, int VAR_2)
{
 if (VAR_1->ss_on_dprefclk && VAR_1->dprefclk_ss_divider != 0) {
  struct fixed31_32 VAR_3 = FUNC_0(
    FUNC_2(VAR_1->dprefclk_ss_percentage,
       VAR_1->dprefclk_ss_divider), 200);
  struct fixed31_32 VAR_4;

  VAR_3 = FUNC_4(VAR_0, VAR_3);
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  VAR_2 = FUNC_1(VAR_4);
 }
 return VAR_2;
}
