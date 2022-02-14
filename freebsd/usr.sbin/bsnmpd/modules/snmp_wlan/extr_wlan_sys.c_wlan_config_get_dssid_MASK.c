
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ mode; char* desired_ssid; int wname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,char*,size_t) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int*,char*,size_t*,int ) ;

int
FUNC_3(struct wlan_iface *VAR_4)
{
 int VAR_5 = -1;
 size_t VAR_6 = VAR_2 + 1;
 char VAR_7[VAR_2 + 1];

 FUNC_1(VAR_7, 0, VAR_2 + 1);

 if (FUNC_2(VAR_4->wname,
     (VAR_4->mode == VAR_3) ?
     VAR_0 : VAR_1, &VAR_5, VAR_7,
     &VAR_6, 0) < 0)
  return (-1);

 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 FUNC_0(VAR_4->desired_ssid, VAR_7, VAR_6);
 VAR_4->desired_ssid[VAR_6] = '\0';

 return (0);
}
