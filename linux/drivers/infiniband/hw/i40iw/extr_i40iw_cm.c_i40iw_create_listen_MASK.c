
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int u6_addr32; } ;
struct TYPE_8__ {TYPE_2__ in6_u; } ;
struct sockaddr_in6 {TYPE_4__ sin6_addr; int sin6_port; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; TYPE_1__ sin_addr; int sin_port; } ;
struct iw_cm_id {int (* add_ref ) (struct iw_cm_id*) ;int tos; struct i40iw_cm_listener* provider_data; int m_local_addr; int device; } ;
struct i40iw_device {int cm_core; } ;
struct i40iw_cm_listener {int qhash_set; TYPE_3__* cm_core; int reused_node; int user_pri; int tos; } ;
struct i40iw_cm_info {int ipv4; int backlog; void* loc_port; int user_pri; struct iw_cm_id* cm_id; int vlan_id; int * loc_addr; } ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;
typedef int cm_info ;
struct TYPE_7__ {int stats_listen_created; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct i40iw_device*,struct i40iw_cm_info*,struct i40iw_cm_listener*) ;
 int FUNC_1 (struct i40iw_device*,struct i40iw_cm_info*,struct i40iw_cm_listener*) ;
 int FUNC_2 (int *,void*,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 struct i40iw_cm_listener* FUNC_5 (int *,struct i40iw_device*,struct i40iw_cm_info*) ;
 int FUNC_6 (struct i40iw_device*,void*,int ) ;
 int FUNC_7 (struct i40iw_device*,struct i40iw_cm_info*,int ,int ,int *,int) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct i40iw_cm_info*,int ,int) ;
 int FUNC_12 (scalar_t__) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct iw_cm_id*) ;
 struct i40iw_device* FUNC_16 (int ) ;

int FUNC_17(struct iw_cm_id *VAR_8, int VAR_9)
{
 struct i40iw_device *VAR_10;
 struct i40iw_cm_listener *VAR_11;
 struct i40iw_cm_info VAR_12;
 enum i40iw_status_code VAR_13;
 struct sockaddr_in *VAR_14;
 struct sockaddr_in6 *VAR_15;
 bool VAR_16 = 0;

 VAR_10 = FUNC_16(VAR_8->device);
 if (!VAR_10)
  return -VAR_1;

 VAR_14 = (struct sockaddr_in *)&VAR_8->m_local_addr;
 VAR_15 = (struct sockaddr_in6 *)&VAR_8->m_local_addr;
 FUNC_11(&VAR_12, 0, sizeof(VAR_12));
 if (VAR_14->sin_family == VAR_0) {
  VAR_12.ipv4 = 1;
  VAR_12.loc_addr[0] = FUNC_12(VAR_14->sin_addr.s_addr);
  VAR_12.loc_port = FUNC_13(VAR_14->sin_port);

  if (VAR_14->sin_addr.s_addr != VAR_6)
   VAR_12.vlan_id = FUNC_4(VAR_12.loc_addr);
  else
   VAR_16 = 1;

 } else {
  VAR_12.ipv4 = 0;
  FUNC_3(VAR_12.loc_addr,
        VAR_15->sin6_addr.in6_u.u6_addr32);
  VAR_12.loc_port = FUNC_13(VAR_15->sin6_port);
  if (FUNC_10(&VAR_15->sin6_addr) != VAR_7)
   FUNC_8(VAR_12.loc_addr,
            &VAR_12.vlan_id);
  else
   VAR_16 = 1;
 }
 VAR_12.backlog = VAR_9;
 VAR_12.cm_id = VAR_8;

 VAR_11 = FUNC_5(&VAR_10->cm_core, VAR_10, &VAR_12);
 if (!VAR_11) {
  FUNC_9("cm_listen_node == NULL\n");
  return -VAR_2;
 }

 VAR_8->provider_data = VAR_11;

 VAR_11->tos = VAR_8->tos;
 VAR_11->user_pri = FUNC_14(VAR_8->tos);
 VAR_12.user_pri = VAR_11->user_pri;

 if (!VAR_11->reused_node) {
  if (VAR_16) {
   if (VAR_12.ipv4)
    VAR_13 = FUNC_0(VAR_10,
            &VAR_12,
            VAR_11);
   else
    VAR_13 = FUNC_1(VAR_10,
            &VAR_12,
            VAR_11);
   if (VAR_13)
    goto error;

   VAR_13 = FUNC_6(VAR_10,
       VAR_12.loc_port,
       VAR_3);

   if (VAR_13)
    goto error;
  } else {
   VAR_13 = FUNC_7(VAR_10,
       &VAR_12,
       VAR_5,
       VAR_4,
       ((void*)0),
       1);
   if (VAR_13)
    goto error;
   VAR_11->qhash_set = 1;
   VAR_13 = FUNC_6(VAR_10,
       VAR_12.loc_port,
       VAR_3);
   if (VAR_13)
    goto error;
  }
 }
 VAR_8->add_ref(VAR_8);
 VAR_11->cm_core->stats_listen_created++;
 return 0;
 error:
 FUNC_2(&VAR_10->cm_core, (void *)VAR_11, 0);
 return -VAR_1;
}
