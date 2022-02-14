
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct uverbs_attr_bundle {int driver_udata; } ;
struct TYPE_12__ {int max_cq_moderation_period; int max_cq_moderation_count; } ;
struct TYPE_21__ {int flags; int max_sge; int max_ops; int max_num_tags; int max_rndv_hdr_size; } ;
struct TYPE_19__ {int max_rwq_indirection_table_size; int max_rwq_indirection_tables; int supported_qpts; } ;
struct TYPE_15__ {int ud_odp_caps; int uc_odp_caps; int rc_odp_caps; } ;
struct TYPE_16__ {TYPE_2__ per_transport_caps; int general_caps; } ;
struct ib_uverbs_ex_query_device_resp {int response_length; int max_dm_size; TYPE_10__ cq_moderation_caps; TYPE_8__ tm_caps; int raw_packet_caps; int max_wq_type_rq; TYPE_6__ rss_caps; int device_cap_flags_ex; int hca_core_clock; int timestamp_mask; int xrc_odp_caps; TYPE_3__ odp_caps; int base; } ;
struct ib_uverbs_ex_query_device {scalar_t__ reserved; scalar_t__ comp_mask; } ;
struct ib_ucontext {struct ib_device* device; } ;
struct TYPE_13__ {int max_cq_moderation_period; int max_cq_moderation_count; } ;
struct TYPE_22__ {int flags; int max_sge; int max_ops; int max_num_tags; int max_rndv_hdr_size; } ;
struct TYPE_20__ {int max_rwq_indirection_table_size; int max_rwq_indirection_tables; int supported_qpts; } ;
struct TYPE_17__ {int xrc_odp_caps; int ud_odp_caps; int uc_odp_caps; int rc_odp_caps; } ;
struct TYPE_18__ {TYPE_4__ per_transport_caps; int general_caps; } ;
struct ib_device_attr {int max_dm_size; TYPE_11__ cq_caps; TYPE_9__ tm_caps; int raw_packet_caps; int max_wq_type_rq; TYPE_7__ rss_caps; int device_cap_flags; int hca_core_clock; int timestamp_mask; TYPE_5__ odp_caps; int member_0; } ;
struct TYPE_14__ {int (* query_device ) (struct ib_device*,struct ib_device_attr*,int *) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_ucontext*) ;
 int FUNC_1 (struct ib_ucontext*) ;
 int FUNC_2 (struct ib_ucontext*,int *,struct ib_device_attr*) ;
 struct ib_ucontext* FUNC_3 (struct uverbs_attr_bundle*) ;
 int FUNC_4 (struct ib_device*,struct ib_device_attr*,int *) ;
 int FUNC_5 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_query_device*,int) ;
 int FUNC_6 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_query_device_resp*,int) ;
 int FUNC_7 (struct uverbs_attr_bundle*,int) ;

__attribute__((used)) static int FUNC_8(struct uverbs_attr_bundle *VAR_1)
{
 struct ib_uverbs_ex_query_device_resp VAR_2 = {};
 struct ib_uverbs_ex_query_device VAR_3;
 struct ib_device_attr VAR_4 = {0};
 struct ib_ucontext *VAR_5;
 struct ib_device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 VAR_6 = VAR_5->device;

 VAR_7 = FUNC_5(VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_7)
  return VAR_7;

 if (VAR_3.comp_mask)
  return -VAR_0;

 if (VAR_3.reserved)
  return -VAR_0;

 VAR_7 = VAR_6->ops.query_device(VAR_6, &VAR_4, &VAR_1->driver_udata);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_5, &VAR_2.base, &VAR_4);

 VAR_2.odp_caps.general_caps = VAR_4.odp_caps.general_caps;
 VAR_2.odp_caps.per_transport_caps.rc_odp_caps =
  VAR_4.odp_caps.per_transport_caps.rc_odp_caps;
 VAR_2.odp_caps.per_transport_caps.uc_odp_caps =
  VAR_4.odp_caps.per_transport_caps.uc_odp_caps;
 VAR_2.odp_caps.per_transport_caps.ud_odp_caps =
  VAR_4.odp_caps.per_transport_caps.ud_odp_caps;
 VAR_2.xrc_odp_caps = VAR_4.odp_caps.per_transport_caps.xrc_odp_caps;

 VAR_2.timestamp_mask = VAR_4.timestamp_mask;
 VAR_2.hca_core_clock = VAR_4.hca_core_clock;
 VAR_2.device_cap_flags_ex = VAR_4.device_cap_flags;
 VAR_2.rss_caps.supported_qpts = VAR_4.rss_caps.supported_qpts;
 VAR_2.rss_caps.max_rwq_indirection_tables =
  VAR_4.rss_caps.max_rwq_indirection_tables;
 VAR_2.rss_caps.max_rwq_indirection_table_size =
  VAR_4.rss_caps.max_rwq_indirection_table_size;
 VAR_2.max_wq_type_rq = VAR_4.max_wq_type_rq;
 VAR_2.raw_packet_caps = VAR_4.raw_packet_caps;
 VAR_2.tm_caps.max_rndv_hdr_size = VAR_4.tm_caps.max_rndv_hdr_size;
 VAR_2.tm_caps.max_num_tags = VAR_4.tm_caps.max_num_tags;
 VAR_2.tm_caps.max_ops = VAR_4.tm_caps.max_ops;
 VAR_2.tm_caps.max_sge = VAR_4.tm_caps.max_sge;
 VAR_2.tm_caps.flags = VAR_4.tm_caps.flags;
 VAR_2.cq_moderation_caps.max_cq_moderation_count =
  VAR_4.cq_caps.max_cq_moderation_count;
 VAR_2.cq_moderation_caps.max_cq_moderation_period =
  VAR_4.cq_caps.max_cq_moderation_period;
 VAR_2.max_dm_size = VAR_4.max_dm_size;
 VAR_2.response_length = FUNC_7(VAR_1, sizeof(VAR_2));

 return FUNC_6(VAR_1, &VAR_2, sizeof(VAR_2));
}
