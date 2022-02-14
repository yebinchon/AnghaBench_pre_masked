
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int imr_dest; } ;
struct wlan_mesh_route {int mroute_status; TYPE_1__ imroute; } ;
struct wlan_iface {int wname; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int*,int ,size_t*,int) ;

int
FUNC_1(struct wlan_iface *VAR_4, struct wlan_mesh_route *VAR_5)
{
 int VAR_6 = VAR_2;
 size_t VAR_7 = VAR_0;

 if (FUNC_0(VAR_4->wname, VAR_1, &VAR_6,
     VAR_5->imroute.imr_dest, &VAR_7, 1) < 0)
  return (-1);

 VAR_5->mroute_status = VAR_3;

 return (0);
}
