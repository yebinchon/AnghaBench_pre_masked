
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int reg_domain; char* country_code; } ;







 int FUNC_0 (struct wlan_iface*,char*) ;
 int FUNC_1 (struct wlan_iface*,char*,int) ;
 int FUNC_2 (struct wlan_iface*,int) ;
 int FUNC_3 (struct wlan_iface*,char*,int) ;
 int FUNC_4 (struct wlan_iface*,int,int) ;
 int FUNC_5 (int) ;

int
FUNC_6(struct wlan_iface *VAR_0, int VAR_1, int VAR_2,
    char *VAR_3, int VAR_4)
{
 int VAR_5;

 switch (VAR_1) {
  case 132:
   return (FUNC_1(VAR_0, VAR_3,
       VAR_0->reg_domain));
  case 128:
   return (FUNC_1(VAR_0, VAR_0->country_code,
       VAR_2));
  case 129:
   return (FUNC_3(VAR_0, VAR_3, VAR_4));
  case 130:
   return (FUNC_2(VAR_0, VAR_2));
  case 131:
   return (FUNC_0(VAR_0, VAR_3));
  default:
   VAR_5 = FUNC_5(VAR_1);
   return (FUNC_4(VAR_0, VAR_5, VAR_2));
 }

 return (-1);
}
