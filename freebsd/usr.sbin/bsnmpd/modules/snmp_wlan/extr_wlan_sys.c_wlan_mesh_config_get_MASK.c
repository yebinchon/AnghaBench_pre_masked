
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
struct wlan_iface {int mesh_ttl; int mesh_path; int mesh_metric; int mesh_forwarding; int mesh_peering; int wname; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ,int,int*,char*,size_t*,int ) ;

int
FUNC_2(struct wlan_iface *VAR_13, int VAR_14)
{
 int VAR_15, VAR_16 = 0;
 size_t VAR_17 = 0;
 uint8_t VAR_18[32], *VAR_19 = ((void*)0);

 switch (VAR_14) {
 case 128:
  VAR_15 = VAR_4;
  break;
 case 130:
  VAR_15 = VAR_0;
  break;
 case 133:
  VAR_15 = VAR_1;
  break;
 case 132:
  VAR_15 = VAR_2;
  VAR_19 = VAR_18;
  VAR_17 = sizeof(VAR_18);
  break;
 case 131:
  VAR_15 = VAR_3;
  VAR_19 = VAR_18;
  VAR_17 = sizeof(VAR_18);
  break;
 case 129:
  return (0);
 default:
  return (-1);
 }

 if (FUNC_1(VAR_13->wname, VAR_15, &VAR_16, VAR_19, &VAR_17, 0) < 0)
  return (-1);

 switch (VAR_14) {
 case 128:
  VAR_13->mesh_ttl = VAR_16;
  break;
 case 130:
  if (VAR_16)
   VAR_13->mesh_peering = VAR_12;
  else
   VAR_13->mesh_peering = VAR_11;
  break;
 case 133:
  if (VAR_16)
   VAR_13->mesh_forwarding = VAR_6;
  else
   VAR_13->mesh_forwarding = VAR_5;
  break;
 case 132:
  VAR_18[VAR_17] = '\0';
  if (FUNC_0(VAR_18, "AIRTIME") == 0)
   VAR_13->mesh_metric = VAR_7;
  else
   VAR_13->mesh_metric = VAR_8;
  break;
 case 131:
  VAR_18[VAR_17] = '\0';
  if (FUNC_0(VAR_18, "HWMP") == 0)
   VAR_13->mesh_path = VAR_9;
  else
   VAR_13->mesh_path = VAR_10;
 }

 return (0);
}
