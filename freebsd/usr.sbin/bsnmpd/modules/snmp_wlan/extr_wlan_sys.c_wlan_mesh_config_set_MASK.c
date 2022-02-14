
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wlan_iface {int mesh_ttl; int wname; int mesh_path; int mesh_metric; int mesh_forwarding; int mesh_peering; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int,int*,int *,size_t*,int) ;

int
FUNC_2(struct wlan_iface *VAR_9, int VAR_10)
{
 int VAR_11, VAR_12 = 0;
 size_t VAR_13 = 0;
 uint8_t VAR_14[32], *VAR_15 = ((void*)0);

 switch (VAR_10) {
 case 128:
  VAR_11 = VAR_4;
  VAR_12 = VAR_9->mesh_ttl;
  break;
 case 129:
  VAR_11 = VAR_0;
  if (VAR_9->mesh_peering == VAR_8)
   VAR_12 = 1;
  break;
 case 132:
  if (VAR_9->mesh_forwarding == VAR_5)
   VAR_12 = 1;
  VAR_11 = VAR_1;
  break;
 case 131:
  VAR_11 = VAR_2;
  if (VAR_9->mesh_metric == VAR_6)
   FUNC_0(VAR_14, "AIRTIME");
  else
   return (-1);
  VAR_15 = VAR_14;
  VAR_13 = sizeof(VAR_14);
  break;
 case 130:
  VAR_11 = VAR_3;
  if (VAR_9->mesh_path == VAR_7)
   FUNC_0(VAR_14, "HWMP");
  else
   return (-1);
  VAR_15 = VAR_14;
  VAR_13 = sizeof(VAR_14);
  break;
 default:
  return (-1);
 }

 if (FUNC_1(VAR_9->wname, VAR_11, &VAR_12, VAR_15, &VAR_13, 1) < 0)
  return (-1);

 return(0);
}
