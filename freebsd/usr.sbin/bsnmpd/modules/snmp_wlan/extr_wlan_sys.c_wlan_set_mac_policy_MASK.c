
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int mac_policy; int wname; int macsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_5)
{
 int VAR_6;
 size_t VAR_7 = 0;

 if (!VAR_5->macsupported)
  return (-1);

 switch (VAR_5->mac_policy) {
 case 131:
  VAR_6 = VAR_1;
  break;
 case 130:
  VAR_6 = VAR_2;
  break;
 case 128:
  VAR_6 = VAR_4;
  break;
 case 129:
  VAR_6 = VAR_3;
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_5->wname, VAR_0, &VAR_6, ((void*)0),
     &VAR_7, 1) < 0)
  return (-1);

 return (0);
}
