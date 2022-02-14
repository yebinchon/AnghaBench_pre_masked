
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct wlan_iface* FUNC_1 () ;
 int FUNC_2 (struct wlan_iface*) ;
 struct wlan_iface* FUNC_3 (struct wlan_iface*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct wlan_iface *VAR_3;

 if ((FUNC_0(((void*)0)) - VAR_2) <= VAR_1)
  return;

 for (VAR_3 = FUNC_1(); VAR_3 != ((void*)0);
     VAR_3 = FUNC_3(VAR_3)) {
  if (VAR_3->status != VAR_0)
   continue;
  (void)FUNC_2(VAR_3);
 }

 VAR_2 = FUNC_0(((void*)0));
}
