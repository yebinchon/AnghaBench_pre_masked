
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int interface_id; int subnet_prefix; } ;
struct TYPE_6__ {TYPE_2__ global; } ;
struct ib_grh {int dgid; TYPE_3__ sgid; int hop_limit; int next_hdr; int paylen; int version_tclass_flow; } ;
struct ib_global_route {int traffic_class; int flow_label; scalar_t__ sgid_index; int dgid; int hop_limit; } ;
struct TYPE_4__ {int gid_prefix; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hfi1_ibport*,scalar_t__) ;

u32 FUNC_3(struct hfi1_ibport *VAR_7, struct ib_grh *VAR_8,
    const struct ib_global_route *VAR_9, u32 VAR_10, u32 VAR_11)
{
 VAR_8->version_tclass_flow =
  FUNC_1((VAR_5 << VAR_6) |
       (VAR_9->traffic_class << VAR_4) |
       (VAR_9->flow_label << VAR_2));
 VAR_8->paylen = FUNC_0((VAR_10 + VAR_11) << 2);

 VAR_8->next_hdr = VAR_3;
 VAR_8->hop_limit = VAR_9->hop_limit;

 VAR_8->sgid.global.subnet_prefix = VAR_7->rvp.gid_prefix;
 VAR_8->sgid.global.interface_id =
  VAR_9->sgid_index < VAR_0 ?
  FUNC_2(VAR_7, VAR_9->sgid_index) :
  FUNC_2(VAR_7, VAR_1);
 VAR_8->dgid = VAR_9->dgid;


 return sizeof(struct ib_grh) / sizeof(u32);
}
