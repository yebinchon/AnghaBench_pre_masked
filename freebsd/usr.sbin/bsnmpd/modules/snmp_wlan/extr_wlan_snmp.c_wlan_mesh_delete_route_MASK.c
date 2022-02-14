
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wlan_mesh_route {scalar_t__ mroute_status; } ;
struct wlan_iface {int mesh_routelist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct wlan_mesh_route*,int ,int ) ;
 int FUNC_1 (struct wlan_mesh_route*) ;
 scalar_t__ FUNC_2 (struct wlan_iface*,struct wlan_mesh_route*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct wlan_iface *VAR_3, struct wlan_mesh_route *VAR_4)
{
 if (VAR_4->mroute_status == VAR_0 &&
     FUNC_2(VAR_3, VAR_4) < 0)
  return (-1);

 FUNC_0(&VAR_3->mesh_routelist, VAR_4, VAR_1, VAR_2);
 FUNC_1(VAR_4);

 return (0);
}
