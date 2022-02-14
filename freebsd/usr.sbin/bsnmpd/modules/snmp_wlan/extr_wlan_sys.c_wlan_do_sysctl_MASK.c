
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int sval ;
struct wlan_config {int mesh_retryto; int mesh_holdingto; int mesh_confirmto; int mesh_maxretries; int hwmp_targetonly; int hwmp_replyforward; int hwmp_pathlifetime; int hwmp_roottimeout; int hwmp_rootint; int hwmp_rannint; int hwmp_inact; } ;
typedef int mib_name ;
typedef int int32_t ;
typedef enum wlan_syscl { ____Placeholder_wlan_syscl } wlan_syscl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (char*,int*,size_t*,int*,size_t) ;
 int FUNC_5 (int ,char*,char*,int ) ;
 int * VAR_3 ;
 int VAR_4 ;

int32_t
FUNC_6(struct wlan_config *VAR_5, enum wlan_syscl VAR_6, int VAR_7)
{
 char VAR_8[100];
 int VAR_9, VAR_10;
 size_t VAR_11, VAR_12;

 if (VAR_7) {
  VAR_12 = sizeof(VAR_10);
  switch (VAR_6) {
  case 128:
   VAR_10 = VAR_5->mesh_retryto;
   break;
  case 130:
   VAR_10 = VAR_5->mesh_holdingto;
   break;
  case 131:
   VAR_10 = VAR_5->mesh_confirmto;
   break;
  case 129:
   VAR_10 = VAR_5->mesh_maxretries;
   break;
  case 132:
   VAR_10 = VAR_5->hwmp_targetonly;
   break;
  case 135:
   VAR_10 = VAR_5->hwmp_replyforward;
   break;
  case 137:
   VAR_10 = VAR_5->hwmp_pathlifetime;
   break;
  case 133:
   VAR_10 = VAR_5->hwmp_roottimeout;
   break;
  case 134:
   VAR_10 = VAR_5->hwmp_rootint;
   break;
  case 136:
   VAR_10 = VAR_5->hwmp_rannint;
   break;
  case 138:
   VAR_10 = VAR_5->hwmp_inact;
   break;
  default:
   return (-1);
  }
 } else {
  if (VAR_6 >= VAR_1)
   return (-1);
  VAR_12 = 0;
 }

 FUNC_3(VAR_8, VAR_4, sizeof(VAR_8));
 FUNC_2(VAR_8, VAR_3[VAR_6], sizeof(VAR_8));
 VAR_11 = sizeof (VAR_9);

 if (FUNC_4(VAR_8, &VAR_9, &VAR_11, (VAR_7? &VAR_10 : ((void*)0)), VAR_12) < 0) {
  FUNC_5(VAR_0, "sysctl(%s) failed - %s", VAR_8,
      FUNC_1(VAR_2));
  return (-1);
 }

 switch (VAR_6) {
 case 128:
  VAR_5->mesh_retryto = VAR_9;
  break;
 case 130:
  VAR_5->mesh_holdingto = VAR_9;
  break;
 case 131:
  VAR_5->mesh_confirmto = VAR_9;
  break;
 case 129:
  VAR_5->mesh_maxretries = VAR_9;
  break;
 case 132:
  VAR_5->hwmp_targetonly = VAR_9;
  break;
 case 135:
  VAR_5->hwmp_replyforward = VAR_9;
  break;
 case 137:
  VAR_5->hwmp_pathlifetime = VAR_9;
  break;
 case 133:
  VAR_5->hwmp_roottimeout = VAR_9;
  break;
 case 134:
  VAR_5->hwmp_rootint = VAR_9;
  break;
 case 136:
  VAR_5->hwmp_rannint = VAR_9;
  break;
 case 138:
  VAR_5->hwmp_inact = VAR_9;
  break;
 default:

  FUNC_0();
 }

 return (0);
}
