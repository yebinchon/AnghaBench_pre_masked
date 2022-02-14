
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_iface {scalar_t__ mode; scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct wlan_iface* FUNC_0 (struct wlan_iface*) ;

__attribute__((used)) static struct wlan_iface *
FUNC_1(struct wlan_iface *VAR_2)
{
 struct wlan_iface *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  if (VAR_3->mode == VAR_1 &&
      VAR_3->status == VAR_0)
   break;
  VAR_2 = VAR_3;
 }

 return (VAR_3);
}
