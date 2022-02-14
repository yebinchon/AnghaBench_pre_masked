
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint ;
struct wlan_mesh_route {int dummy; } ;
struct wlan_iface {int dummy; } ;
struct TYPE_3__ {int integer; } ;
struct snmp_value {TYPE_1__ v; int var; } ;
struct snmp_context {TYPE_2__* scratch; } ;
struct TYPE_4__ {int int1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wlan_iface* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_2 (struct wlan_iface*,struct wlan_mesh_route*) ;
 scalar_t__ FUNC_3 (struct wlan_iface*,struct wlan_mesh_route*) ;
 int FUNC_4 (struct wlan_iface*,struct wlan_mesh_route*) ;
 int FUNC_5 (struct wlan_mesh_route*) ;
 struct wlan_mesh_route* FUNC_6 (int *,int ,struct wlan_iface**) ;
 struct wlan_mesh_route* FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct snmp_context *VAR_8, struct snmp_value *VAR_9,
    uint VAR_10)
{
 char VAR_11[VAR_1];
 char VAR_12[VAR_0];
 struct wlan_mesh_route *VAR_13;
 struct wlan_iface *VAR_14;

 if (FUNC_1(&VAR_9->var, VAR_10, VAR_11, VAR_12) < 0)
  return (VAR_3);
 VAR_13 = FUNC_6(&VAR_9->var, VAR_10, &VAR_14);

 switch (VAR_9->v.integer) {
 case 129:
  if (VAR_13 != ((void*)0))
   return (VAR_4);
  break;
 case 128:
  if (VAR_13 == ((void*)0))
   return (VAR_7);
  VAR_8->scratch->int1 = VAR_2;
  return (VAR_6);
 default:
  return (VAR_5);
 }

 if ((VAR_14 = FUNC_0(VAR_11)) == ((void*)0))
  return (VAR_4);

 if ((VAR_13 = FUNC_7(VAR_12)) == ((void*)0))
  return (VAR_3);

 if (FUNC_3(VAR_14, VAR_13) < 0) {
  FUNC_5(VAR_13);
  return (VAR_3);
 }

 VAR_8->scratch->int1 = 128;
 if (FUNC_2(VAR_14, VAR_13) < 0) {
  (void)FUNC_4(VAR_14, VAR_13);
  return (VAR_3);
 }

 return (VAR_6);
}
