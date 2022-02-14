
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int dr_rtn_path; int dr_trunc_hop; int dr_slid; int mkey; int attr_mod; int attr_id; int method; int lid; } ;
struct TYPE_5__ {TYPE_1__ ntc_256; int issuer_lid; } ;
struct trap_node {int len; TYPE_2__ data; } ;
struct ib_mad_hdr {scalar_t__ mgmt_class; int attr_mod; int attr_id; int method; } ;
struct hfi1_ibport {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;
struct TYPE_6__ {int lid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct trap_node* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_3__* FUNC_3 (struct hfi1_ibport*) ;
 int FUNC_4 (struct hfi1_ibport*,struct trap_node*) ;

__attribute__((used)) static void FUNC_5(struct hfi1_ibport *VAR_5, struct ib_mad_hdr *VAR_6,
       __be64 VAR_7, __be32 VAR_8, u8 VAR_9[], u8 VAR_10)
{
 struct trap_node *VAR_11;
 u32 VAR_12 = FUNC_3(VAR_5)->lid;

 VAR_11 = FUNC_1(VAR_3, VAR_4,
    VAR_12);
 if (!VAR_11)
  return;


 VAR_11->data.ntc_256.lid = VAR_11->data.issuer_lid;
 VAR_11->data.ntc_256.method = VAR_6->method;
 VAR_11->data.ntc_256.attr_id = VAR_6->attr_id;
 VAR_11->data.ntc_256.attr_mod = VAR_6->attr_mod;
 VAR_11->data.ntc_256.mkey = VAR_7;
 if (VAR_6->mgmt_class == VAR_0) {
  VAR_11->data.ntc_256.dr_slid = VAR_8;
  VAR_11->data.ntc_256.dr_trunc_hop = VAR_1;
  if (VAR_10 > FUNC_0(VAR_11->data.ntc_256.dr_rtn_path)) {
   VAR_11->data.ntc_256.dr_trunc_hop |=
    VAR_2;
   VAR_10 = FUNC_0(VAR_11->data.ntc_256.dr_rtn_path);
  }
  VAR_11->data.ntc_256.dr_trunc_hop |= VAR_10;
  FUNC_2(VAR_11->data.ntc_256.dr_rtn_path, VAR_9,
         VAR_10);
 }

 VAR_11->len = sizeof(VAR_11->data);

 FUNC_4(VAR_5, VAR_11);
}
