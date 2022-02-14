
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct usnic_fwd_flow {int flow_id; int vnic_idx; TYPE_1__* ufdev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usnic_fwd_flow*) ;
 int FUNC_1 (char*,int ,int ,int ,...) ;
 int FUNC_2 (char*,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int *,int *) ;

int FUNC_4(struct usnic_fwd_flow *VAR_2)
{
 int VAR_3;
 u64 VAR_4, VAR_5;

 VAR_4 = VAR_2->flow_id;

 VAR_3 = FUNC_3(VAR_2->ufdev, VAR_2->vnic_idx,
     VAR_0, &VAR_4, &VAR_5);
 if (VAR_3) {
  if (VAR_3 == VAR_1) {
   FUNC_1("Filter %u already deleted for VF Idx %u pf: %s status: %d",
     VAR_2->flow_id, VAR_2->vnic_idx,
     VAR_2->ufdev->name, VAR_3);
  } else {
   FUNC_2("PF %s VF Idx %u Filter: %u FILTER DELETE failed with status %d",
     VAR_2->ufdev->name, VAR_2->vnic_idx,
     VAR_2->flow_id, VAR_3);
  }
  VAR_3 = 0;





 } else {
  FUNC_1("PF %s VF Idx %u Filter: %u FILTER DELETED",
    VAR_2->ufdev->name, VAR_2->vnic_idx,
    VAR_2->flow_id);
 }

 FUNC_0(VAR_2);
 return VAR_3;
}
