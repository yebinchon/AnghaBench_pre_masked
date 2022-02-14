
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_phy {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hdmi_phy*,int ) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hdmi_phy *VAR_3)
{
 u32 VAR_4 = VAR_0;
 unsigned long VAR_5 = VAR_1;
 u32 VAR_6;
 int VAR_7 = 0;

 FUNC_1("Waiting for PHY ready");

 while (VAR_4--) {
  VAR_6 = FUNC_2(VAR_3, VAR_2);
  VAR_7 = VAR_6 & FUNC_0(0);

  if (VAR_7)
   break;

  FUNC_3(VAR_5);
 }

 FUNC_1("PHY is %sready", VAR_7 ? "" : "*not* ");

 return VAR_7;
}
