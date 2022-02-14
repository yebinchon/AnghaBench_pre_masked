
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_scan_result {int dummy; } ;
struct wlan_iface {int scanlist; } ;


 struct wlan_scan_result* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct wlan_scan_result*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct wlan_iface *VAR_1)
{
 struct wlan_scan_result *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->scanlist)) != ((void*)0)) {
  FUNC_2(&VAR_1->scanlist, VAR_0);
  FUNC_3(VAR_2);
 }

 FUNC_1(&VAR_1->scanlist);
}
