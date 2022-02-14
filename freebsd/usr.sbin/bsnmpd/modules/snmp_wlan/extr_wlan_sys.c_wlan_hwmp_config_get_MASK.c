
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int hwmp_max_hops; int hwmp_root_mode; int wname; } ;






 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int,int*,int *,size_t*,int ) ;

int
FUNC_1(struct wlan_iface *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = 0;
 size_t VAR_10 = 0;

 switch (VAR_7) {
 case 128:
  VAR_8 = VAR_1;
  break;
 case 129:
  VAR_8 = VAR_0;
  break;
 default:
  return (-1);
 }

 if (FUNC_0(VAR_6->wname, VAR_8, &VAR_9, ((void*)0), &VAR_10, 0) < 0)
  return (-1);

 switch (VAR_7) {
 case 128:
  switch (VAR_9) {
  case 132:
   VAR_6->hwmp_root_mode = VAR_3;
   break;
  case 131:
   VAR_6->hwmp_root_mode = VAR_4;
   break;
  case 130:
   VAR_6->hwmp_root_mode = VAR_5;
   break;
  case 133:
  default:
   VAR_6->hwmp_root_mode = VAR_2;
   break;
  }
  break;
 case 129:
  VAR_6->hwmp_max_hops = VAR_9;
  break;
 }

 return (0);
}
