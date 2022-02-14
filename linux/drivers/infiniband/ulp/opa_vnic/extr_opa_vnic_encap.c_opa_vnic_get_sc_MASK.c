
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ethhdr {int h_dest; } ;
struct TYPE_2__ {size_t* pcp_to_sc_mc; size_t* pcp_to_sc_uc; size_t non_vlan_sc_mc; size_t non_vlan_sc_uc; } ;
struct __opa_veswport_info {TYPE_1__ vport; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static u8 FUNC_4(struct __opa_veswport_info *VAR_0,
     struct sk_buff *VAR_1)
{
 struct ethhdr *VAR_2 = (struct ethhdr *)FUNC_3(VAR_1);
 u16 VAR_3;
 u8 VAR_4;

 if (!FUNC_1(VAR_1, &VAR_3)) {
  u8 VAR_5 = FUNC_0(VAR_3);

  if (FUNC_2(VAR_2->h_dest))
   VAR_4 = VAR_0->vport.pcp_to_sc_mc[VAR_5];
  else
   VAR_4 = VAR_0->vport.pcp_to_sc_uc[VAR_5];
 } else {
  if (FUNC_2(VAR_2->h_dest))
   VAR_4 = VAR_0->vport.non_vlan_sc_mc;
  else
   VAR_4 = VAR_0->vport.non_vlan_sc_uc;
 }

 return VAR_4;
}
