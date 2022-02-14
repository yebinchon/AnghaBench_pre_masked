
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {size_t* pcp_to_vl_mc; size_t* pcp_to_vl_uc; size_t non_vlan_vl_mc; size_t non_vlan_vl_uc; } ;
struct __opa_veswport_info {TYPE_1__ vport; } ;
struct opa_vnic_adapter {struct __opa_veswport_info info; } ;
struct ethhdr {int h_dest; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 size_t FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

u8 FUNC_4(struct opa_vnic_adapter *VAR_1, struct sk_buff *VAR_2)
{
 struct ethhdr *VAR_3 = (struct ethhdr *)FUNC_1(VAR_2);
 struct __opa_veswport_info *VAR_4 = &VAR_1->info;
 u8 VAR_5;

 if (FUNC_3(VAR_2)) {
  u8 VAR_6 = FUNC_2(VAR_2) >> VAR_0;

  if (FUNC_0(VAR_3->h_dest))
   VAR_5 = VAR_4->vport.pcp_to_vl_mc[VAR_6];
  else
   VAR_5 = VAR_4->vport.pcp_to_vl_uc[VAR_6];
 } else {
  if (FUNC_0(VAR_3->h_dest))
   VAR_5 = VAR_4->vport.non_vlan_vl_mc;
  else
   VAR_5 = VAR_4->vport.non_vlan_vl_uc;
 }

 return VAR_5;
}
