
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int imr_dest; } ;
struct wlan_mesh_route {int mroute_status; TYPE_1__ imroute; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (struct wlan_mesh_route*,int ,int) ;

struct wlan_mesh_route *
FUNC_3(const uint8_t *VAR_2)
{
 struct wlan_mesh_route *VAR_3;

 if ((VAR_3 = (struct wlan_mesh_route *)FUNC_0(sizeof(*VAR_3))) == ((void*)0))
  return (((void*)0));

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 FUNC_1(VAR_3->imroute.imr_dest, VAR_2, VAR_0);
 VAR_3->mroute_status = VAR_1;

 return (VAR_3);
}
