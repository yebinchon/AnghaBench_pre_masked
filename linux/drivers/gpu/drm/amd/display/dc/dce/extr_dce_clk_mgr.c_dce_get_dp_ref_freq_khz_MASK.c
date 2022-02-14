
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dce_clk_mgr {int dentist_vco_freq_khz; } ;
struct clk_mgr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int*) ;
 struct dce_clk_mgr* FUNC_2 (struct clk_mgr*) ;
 int FUNC_3 (struct dce_clk_mgr*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct clk_mgr *VAR_5)
{
 struct dce_clk_mgr *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 int VAR_8;
 int VAR_9 = 600000;
 int VAR_10;


 FUNC_1(VAR_3, VAR_4, &VAR_8);
 FUNC_0(VAR_8 == 0);



 FUNC_1(VAR_0, VAR_2, &VAR_7);


 VAR_10 = FUNC_4(VAR_7);


 VAR_9 = (VAR_1
  * VAR_6->dentist_vco_freq_khz) / VAR_10;

 return FUNC_3(VAR_6, VAR_9);
}
