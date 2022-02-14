
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct hfi1_vnic_vport_info {int vesw_id; int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_vnic_vport_info*) ;
 int FUNC_1 (struct hfi1_vnic_vport_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct hfi1_vnic_vport_info* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1, int VAR_2)
{
 struct hfi1_vnic_vport_info *VAR_3 = FUNC_4(VAR_1);
 bool VAR_4 = 0;





 if (VAR_2 != VAR_3->vesw_id) {
  FUNC_2(&VAR_3->lock);
  if (FUNC_5(VAR_0, &VAR_3->flags)) {
   FUNC_0(VAR_3);
   VAR_4 = 1;
  }

  VAR_3->vesw_id = VAR_2;
  if (VAR_4)
   FUNC_1(VAR_3);

  FUNC_3(&VAR_3->lock);
 }
}
