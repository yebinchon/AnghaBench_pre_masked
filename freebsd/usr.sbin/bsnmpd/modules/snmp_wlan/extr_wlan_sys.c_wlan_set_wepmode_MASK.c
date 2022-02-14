
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wepmode; int wname; int wepsupported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_4)
{
 int VAR_5;
 size_t VAR_6 = 0;

 if (!VAR_4->wepsupported)
  return (-1);

 switch (VAR_4->wepmode) {
 case 129:
  VAR_5 = VAR_2;
  break;
 case 128:
  VAR_5 = VAR_3;
  break;
 case 130:
  VAR_5 = VAR_1;
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_4->wname, VAR_0, &VAR_5, ((void*)0),
     &VAR_6, 1) < 0)
  return (-1);

 return (0);
}
