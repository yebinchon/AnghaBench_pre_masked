
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ internal; } ;


 int VAR_0 ;
 int FUNC_0 (struct wlan_iface*) ;
 int FUNC_1 (struct wlan_iface*) ;

__attribute__((used)) static int
FUNC_2(struct wlan_iface *VAR_1)
{
 int VAR_2 = VAR_0;

 if (VAR_1->internal == 0)
  VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == VAR_0)
  FUNC_1(VAR_1);

 return (VAR_2);
}
