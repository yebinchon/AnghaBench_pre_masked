
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
struct iw_cm_id {int device; scalar_t__ provider_data; } ;
struct ietf_mpa_v2 {int dummy; } ;
struct i40iw_device {int dummy; } ;
struct TYPE_4__ {void* size; } ;
struct i40iw_cm_node {TYPE_2__ pdata; int pdata_buf; TYPE_1__* cm_core; struct iw_cm_id* cm_id; struct i40iw_cm_node* loopbackpartner; } ;
struct TYPE_3__ {int stats_rejects; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i40iw_cm_node*,void const*,void*) ;
 int FUNC_1 (int *,void const*,void*) ;
 struct i40iw_device* FUNC_2 (int ) ;

int FUNC_3(struct iw_cm_id *VAR_2, const void *VAR_3, u8 VAR_4)
{
 struct i40iw_device *VAR_5;
 struct i40iw_cm_node *VAR_6;
 struct i40iw_cm_node *VAR_7;

 VAR_6 = (struct i40iw_cm_node *)VAR_2->provider_data;
 VAR_7 = VAR_6->loopbackpartner;
 VAR_6->cm_id = VAR_2;
 VAR_6->pdata.size = VAR_4;

 VAR_5 = FUNC_2(VAR_2->device);
 if (!VAR_5)
  return -VAR_0;
 VAR_6->cm_core->stats_rejects++;

 if (VAR_4 + sizeof(struct ietf_mpa_v2) > VAR_1)
  return -VAR_0;

 if (VAR_7) {
  FUNC_1(&VAR_7->pdata_buf, VAR_3, VAR_4);
  VAR_7->pdata.size = VAR_4;
 }

 return FUNC_0(VAR_6, VAR_3, VAR_4);
}
