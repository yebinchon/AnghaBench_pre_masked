
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_pll_8996 {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hdmi_pll_8996*,int ) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hdmi_pll_8996 *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = VAR_0;
 unsigned long VAR_6 = VAR_1;
 int VAR_7 = 0;

 FUNC_1("Waiting for PLL lock");

 while (VAR_5--) {
  VAR_4 = FUNC_2(VAR_3,
           VAR_2);
  VAR_7 = VAR_4 & FUNC_0(0);

  if (VAR_7)
   break;

  FUNC_3(VAR_6);
 }

 FUNC_1("HDMI PLL is %slocked", VAR_7 ? "" : "*not* ");

 return VAR_7;
}
