
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ mode; char* desired_ssid; int wname; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,size_t) ;
 scalar_t__ FUNC_1 (int ,int ,int*,char*,size_t*,int) ;

int
FUNC_2(struct wlan_iface *VAR_4, char *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 size_t VAR_8 = VAR_6;

 if (FUNC_1(VAR_4->wname,
     (VAR_4->mode == VAR_3) ?
     VAR_0 : VAR_1, &VAR_7, VAR_5,
     &VAR_8, 1) < 0)
  return (-1);

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;
 FUNC_0(VAR_4->desired_ssid, VAR_5, VAR_8);
 VAR_4->desired_ssid[VAR_8] = '\0';

 return (0);
}
