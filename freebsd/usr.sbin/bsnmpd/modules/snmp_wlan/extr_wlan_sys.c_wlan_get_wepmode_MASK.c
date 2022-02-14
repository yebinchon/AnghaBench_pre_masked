
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wepsupported; void* wepmode; scalar_t__ weptxkey; int wname; } ;


 int VAR_0 ;

 int VAR_1 ;


 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int *,size_t*,int ) ;

int
FUNC_1(struct wlan_iface *VAR_5)
{
 int VAR_6 = 0;
 size_t VAR_7 = 0;

 if (FUNC_0(VAR_5->wname, VAR_0, &VAR_6, ((void*)0),
     &VAR_7, 0) < 0 || VAR_6 == VAR_1) {
  VAR_5->wepsupported = 0;
  VAR_5->wepmode = VAR_3;
  VAR_5->weptxkey = 0;
  return (-1);
 }

 VAR_5->wepsupported = 1;

 switch (VAR_6) {
 case 128:
  VAR_5->wepmode = VAR_4;
  break;
 case 130:
  VAR_5->wepmode = VAR_2;
  break;
 case 129:

 default:
  VAR_5->wepmode = VAR_3;
  break;
 }

 return (0);
}
