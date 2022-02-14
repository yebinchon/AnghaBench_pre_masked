
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct hfi1_vnic_vport_info {struct hfi1_vnic_sdma* sdma; } ;
struct hfi1_vnic_sdma {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

inline bool FUNC_1(struct hfi1_vnic_vport_info *VAR_1,
           u8 VAR_2)
{
 struct hfi1_vnic_sdma *VAR_3 = &VAR_1->sdma[VAR_2];

 return (FUNC_0(VAR_3->state) == VAR_0);
}
