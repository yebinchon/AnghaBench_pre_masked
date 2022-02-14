
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hibmc_display_panel_pll {int POD; int OD; int N; int M; int member_0; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static unsigned int FUNC_1(void)
{
 unsigned int VAR_7 = 0;
 struct hibmc_display_panel_pll VAR_8 = {0};







 VAR_7 |= FUNC_0(VAR_0, 0);
 VAR_7 |= FUNC_0(VAR_6, 1);
 VAR_7 |= FUNC_0(VAR_1, 0);
 VAR_7 |= FUNC_0(VAR_5, VAR_8.POD);
 VAR_7 |= FUNC_0(VAR_4, VAR_8.OD);
 VAR_7 |= FUNC_0(VAR_3, VAR_8.N);
 VAR_7 |= FUNC_0(VAR_2, VAR_8.M);

 return VAR_7;
}
