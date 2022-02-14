
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_mesh_route {int mroute_status; int imroute; } ;
struct wlan_iface {int wname; } ;
struct ieee80211req_mesh_route {int imr_dest; } ;
typedef int routes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct ieee80211req_mesh_route*,int) ;
 scalar_t__ FUNC_1 (int ,int ,int*,struct ieee80211req_mesh_route*,size_t*,int ) ;
 scalar_t__ FUNC_2 (struct wlan_iface*,struct wlan_mesh_route*) ;
 int FUNC_3 (struct wlan_mesh_route*) ;
 struct wlan_mesh_route* FUNC_4 (int ) ;

int
FUNC_5(struct wlan_iface *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_1;
 size_t VAR_7;
 struct ieee80211req_mesh_route VAR_8[128];
 struct ieee80211req_mesh_route *VAR_9;
 struct wlan_mesh_route *VAR_10;

 VAR_7 = sizeof(VAR_8);
 if (FUNC_1(VAR_3->wname, VAR_0, &VAR_6, VAR_8,
     &VAR_7, 0) < 0)
  return (-1);

 VAR_5 = VAR_7 / sizeof(*VAR_9);
 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_9 = VAR_8 + VAR_4;
  if ((VAR_10 = FUNC_4(VAR_9->imr_dest)) == ((void*)0))
   return (-1);
  FUNC_0(&VAR_10->imroute, VAR_9, sizeof(*VAR_9));
  VAR_10->mroute_status = VAR_2;
  if (FUNC_2(VAR_3, VAR_10) < 0)
   FUNC_3(VAR_10);
 }

 return (0);
}
