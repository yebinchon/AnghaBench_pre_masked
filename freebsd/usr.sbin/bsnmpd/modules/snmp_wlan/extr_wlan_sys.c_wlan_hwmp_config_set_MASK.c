
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int hwmp_max_hops; int wname; int hwmp_root_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 scalar_t__ FUNC_0 (int ,int,int*,int *,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 size_t VAR_10 = 0;

 switch (VAR_7) {
 case 132:
  VAR_8 = VAR_5;
  switch (VAR_6->hwmp_root_mode) {
  case 131:
   VAR_9 = VAR_0;
   break;
  case 130:
   VAR_9 = VAR_1;
   break;
  case 129:
   VAR_9 = VAR_2;
   break;
  case 128:
   VAR_9 = VAR_3;
   break;
  default:
   return (-1);
  }
  break;
 case 133:
  VAR_8 = VAR_4;
  VAR_9 = VAR_6->hwmp_max_hops;
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_6->wname, VAR_8, &VAR_9, ((void*)0), &VAR_10, 1) < 0)
  return (-1);

 return (0);
}
