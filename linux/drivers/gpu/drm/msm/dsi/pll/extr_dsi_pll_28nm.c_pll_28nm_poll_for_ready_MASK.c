
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsi_pll_28nm {scalar_t__ mmio; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct dsi_pll_28nm *VAR_2,
    u32 VAR_3, u32 VAR_4)
{
 bool VAR_5 = 0;
 u32 VAR_6;

 while (VAR_3--) {
  VAR_6 = FUNC_1(VAR_2->mmio + VAR_1);
  VAR_5 = !!(VAR_6 & VAR_0);

  if (VAR_5)
   break;

  FUNC_2(VAR_4);
 }
 FUNC_0("DSI PLL is %slocked", VAR_5 ? "" : "*not* ");

 return VAR_5;
}
