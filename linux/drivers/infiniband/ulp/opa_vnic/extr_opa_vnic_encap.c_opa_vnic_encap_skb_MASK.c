
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct opa_vnic_skb_mdata {scalar_t__ flags; int entropy; int vl; } ;
struct TYPE_4__ {int pkey; int vesw_id; } ;
struct TYPE_3__ {int encap_slid; } ;
struct __opa_veswport_info {TYPE_2__ vesw; TYPE_1__ vport; } ;
struct opa_vnic_adapter {struct __opa_veswport_info info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct opa_vnic_adapter*,int ) ;
 int FUNC_2 (struct opa_vnic_adapter*,struct sk_buff*,int ) ;
 int FUNC_3 (struct __opa_veswport_info*,struct sk_buff*) ;
 int FUNC_4 (struct __opa_veswport_info*,struct sk_buff*) ;
 int FUNC_5 (struct opa_vnic_adapter*,struct sk_buff*) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 void* FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct opa_vnic_adapter *VAR_3, struct sk_buff *VAR_4)
{
 struct __opa_veswport_info *VAR_5 = &VAR_3->info;
 struct opa_vnic_skb_mdata *VAR_6;
 u8 VAR_7, VAR_8, VAR_9, VAR_10, *VAR_11;
 u16 VAR_12, VAR_13;
 u32 VAR_14;

 VAR_11 = FUNC_8(VAR_4, VAR_0);

 VAR_10 = FUNC_0(VAR_4);
 VAR_7 = FUNC_1(VAR_3, VAR_10);
 VAR_12 = FUNC_7(VAR_4);
 VAR_14 = FUNC_2(VAR_3, VAR_4, VAR_7);
 VAR_8 = FUNC_4(VAR_5, VAR_4);
 VAR_9 = FUNC_3(VAR_5, VAR_4);
 VAR_13 = VAR_5->vesw.vesw_id;

 VAR_6 = FUNC_8(VAR_4, sizeof(*VAR_6));
 VAR_6->vl = FUNC_5(VAR_3, VAR_4);
 VAR_6->entropy = VAR_10;
 VAR_6->flags = 0;
 if (FUNC_9(!VAR_14)) {
  VAR_6->flags = VAR_2;
  return;
 }

 FUNC_6(VAR_11, VAR_5->vport.encap_slid, VAR_14, VAR_12,
        VAR_5->vesw.pkey, VAR_10, VAR_8, VAR_9,
        VAR_1, VAR_13);
}
