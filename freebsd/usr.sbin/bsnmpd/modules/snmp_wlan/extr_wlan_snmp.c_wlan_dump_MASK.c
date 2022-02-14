
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {int wname; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct wlan_iface* FUNC_1 () ;
 struct wlan_iface* FUNC_2 (struct wlan_iface*) ;

__attribute__((used)) static void
FUNC_3(void)
{

 struct wlan_iface *VAR_1;

 for (VAR_1 = FUNC_1(); VAR_1 != ((void*)0);
     VAR_1 = FUNC_2(VAR_1))
  FUNC_0(VAR_0, "wlan iface %s", VAR_1->wname);
}
