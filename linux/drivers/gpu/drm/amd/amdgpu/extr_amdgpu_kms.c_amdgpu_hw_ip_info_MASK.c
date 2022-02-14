
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_60__ TYPE_9__ ;
typedef struct TYPE_59__ TYPE_8__ ;
typedef struct TYPE_58__ TYPE_7__ ;
typedef struct TYPE_57__ TYPE_6__ ;
typedef struct TYPE_56__ TYPE_5__ ;
typedef struct TYPE_55__ TYPE_4__ ;
typedef struct TYPE_54__ TYPE_3__ ;
typedef struct TYPE_53__ TYPE_30__ ;
typedef struct TYPE_52__ TYPE_2__ ;
typedef struct TYPE_51__ TYPE_29__ ;
typedef struct TYPE_50__ TYPE_28__ ;
typedef struct TYPE_49__ TYPE_27__ ;
typedef struct TYPE_48__ TYPE_26__ ;
typedef struct TYPE_47__ TYPE_25__ ;
typedef struct TYPE_46__ TYPE_24__ ;
typedef struct TYPE_45__ TYPE_23__ ;
typedef struct TYPE_44__ TYPE_22__ ;
typedef struct TYPE_43__ TYPE_21__ ;
typedef struct TYPE_42__ TYPE_20__ ;
typedef struct TYPE_41__ TYPE_1__ ;
typedef struct TYPE_40__ TYPE_19__ ;
typedef struct TYPE_39__ TYPE_18__ ;
typedef struct TYPE_38__ TYPE_17__ ;
typedef struct TYPE_37__ TYPE_16__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


typedef void* uint32_t ;
struct drm_amdgpu_info_hw_ip {int available_rings; void* ib_size_alignment; void* ib_start_alignment; scalar_t__ capabilities_flags; int hw_ip_version_minor; int hw_ip_version_major; } ;
struct TYPE_55__ {scalar_t__ ip_instance; int type; } ;
struct drm_amdgpu_info {TYPE_4__ query_hw_ip; } ;
struct TYPE_53__ {unsigned int num_vcn_inst; unsigned int num_enc_rings; TYPE_29__* inst; } ;
struct TYPE_48__ {unsigned int num_uvd_inst; int harvest_config; unsigned int num_enc_rings; TYPE_21__* inst; } ;
struct TYPE_39__ {unsigned int num_rings; TYPE_17__* ring; } ;
struct TYPE_34__ {unsigned int num_instances; TYPE_12__* instance; } ;
struct TYPE_60__ {unsigned int num_gfx_rings; unsigned int num_compute_rings; TYPE_8__* compute_ring; TYPE_6__* gfx_ring; } ;
struct amdgpu_device {unsigned int num_ip_blocks; TYPE_3__* ip_blocks; TYPE_30__ vcn; TYPE_26__ uvd; TYPE_18__ vce; TYPE_13__ sdma; TYPE_9__ gfx; } ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_58__ {int ready; } ;
struct TYPE_59__ {TYPE_7__ sched; } ;
struct TYPE_56__ {int ready; } ;
struct TYPE_57__ {TYPE_5__ sched; } ;
struct TYPE_41__ {scalar_t__ valid; } ;
struct TYPE_54__ {TYPE_2__* version; TYPE_1__ status; } ;
struct TYPE_52__ {int type; int minor; int major; } ;
struct TYPE_49__ {int ready; } ;
struct TYPE_50__ {TYPE_27__ sched; } ;
struct TYPE_44__ {int ready; } ;
struct TYPE_45__ {TYPE_22__ sched; } ;
struct TYPE_51__ {TYPE_28__ ring_jpeg; TYPE_25__* ring_enc; TYPE_23__ ring_dec; } ;
struct TYPE_46__ {int ready; } ;
struct TYPE_47__ {TYPE_24__ sched; } ;
struct TYPE_35__ {int ready; } ;
struct TYPE_36__ {TYPE_14__ sched; } ;
struct TYPE_43__ {TYPE_20__* ring_enc; TYPE_15__ ring; } ;
struct TYPE_40__ {int ready; } ;
struct TYPE_42__ {TYPE_19__ sched; } ;
struct TYPE_37__ {int ready; } ;
struct TYPE_38__ {TYPE_16__ sched; } ;
struct TYPE_31__ {int ready; } ;
struct TYPE_32__ {TYPE_10__ sched; } ;
struct TYPE_33__ {TYPE_11__ ring; } ;





 scalar_t__ VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 unsigned int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_8,
        struct drm_amdgpu_info *VAR_9,
        struct drm_amdgpu_info_hw_ip *VAR_10)
{
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = 0;
 enum amd_ip_block_type VAR_13;
 unsigned int VAR_14 = 0;
 unsigned int VAR_15, VAR_16;

 if (VAR_9->query_hw_ip.ip_instance >= VAR_0)
  return -VAR_6;

 switch (VAR_9->query_hw_ip.type) {
 case 134:
  VAR_13 = VAR_1;
  for (VAR_15 = 0; VAR_15 < VAR_8->gfx.num_gfx_rings; VAR_15++)
   if (VAR_8->gfx.gfx_ring[VAR_15].sched.ready)
    ++VAR_14;
  VAR_11 = 32;
  VAR_12 = 32;
  break;
 case 136:
  VAR_13 = VAR_1;
  for (VAR_15 = 0; VAR_15 < VAR_8->gfx.num_compute_rings; VAR_15++)
   if (VAR_8->gfx.compute_ring[VAR_15].sched.ready)
    ++VAR_14;
  VAR_11 = 32;
  VAR_12 = 32;
  break;
 case 135:
  VAR_13 = VAR_2;
  for (VAR_15 = 0; VAR_15 < VAR_8->sdma.num_instances; VAR_15++)
   if (VAR_8->sdma.instance[VAR_15].ring.sched.ready)
    ++VAR_14;
  VAR_11 = 256;
  VAR_12 = 4;
  break;
 case 133:
  VAR_13 = VAR_3;
  for (VAR_15 = 0; VAR_15 < VAR_8->uvd.num_uvd_inst; VAR_15++) {
   if (VAR_8->uvd.harvest_config & (1 << VAR_15))
    continue;

   if (VAR_8->uvd.inst[VAR_15].ring.sched.ready)
    ++VAR_14;
  }
  VAR_11 = 64;
  VAR_12 = 64;
  break;
 case 131:
  VAR_13 = VAR_4;
  for (VAR_15 = 0; VAR_15 < VAR_8->vce.num_rings; VAR_15++)
   if (VAR_8->vce.ring[VAR_15].sched.ready)
    ++VAR_14;
  VAR_11 = 4;
  VAR_12 = 1;
  break;
 case 132:
  VAR_13 = VAR_3;
  for (VAR_15 = 0; VAR_15 < VAR_8->uvd.num_uvd_inst; VAR_15++) {
   if (VAR_8->uvd.harvest_config & (1 << VAR_15))
    continue;

   for (VAR_16 = 0; VAR_16 < VAR_8->uvd.num_enc_rings; VAR_16++)
    if (VAR_8->uvd.inst[VAR_15].ring_enc[VAR_16].sched.ready)
     ++VAR_14;
  }
  VAR_11 = 64;
  VAR_12 = 64;
  break;
 case 130:
  VAR_13 = VAR_5;
  for (VAR_15 = 0; VAR_15 < VAR_8->vcn.num_vcn_inst; VAR_15++) {
   if (VAR_8->uvd.harvest_config & (1 << VAR_15))
    continue;

   if (VAR_8->vcn.inst[VAR_15].ring_dec.sched.ready)
    ++VAR_14;
  }
  VAR_11 = 16;
  VAR_12 = 16;
  break;
 case 129:
  VAR_13 = VAR_5;
  for (VAR_15 = 0; VAR_15 < VAR_8->vcn.num_vcn_inst; VAR_15++) {
   if (VAR_8->uvd.harvest_config & (1 << VAR_15))
    continue;

   for (VAR_16 = 0; VAR_16 < VAR_8->vcn.num_enc_rings; VAR_16++)
    if (VAR_8->vcn.inst[VAR_15].ring_enc[VAR_16].sched.ready)
     ++VAR_14;
  }
  VAR_11 = 64;
  VAR_12 = 1;
  break;
 case 128:
  VAR_13 = VAR_5;
  for (VAR_15 = 0; VAR_15 < VAR_8->vcn.num_vcn_inst; VAR_15++) {
   if (VAR_8->uvd.harvest_config & (1 << VAR_15))
    continue;

   if (VAR_8->vcn.inst[VAR_15].ring_jpeg.sched.ready)
    ++VAR_14;
  }
  VAR_11 = 16;
  VAR_12 = 16;
  break;
 default:
  return -VAR_6;
 }

 for (VAR_15 = 0; VAR_15 < VAR_8->num_ip_blocks; VAR_15++)
  if (VAR_8->ip_blocks[VAR_15].version->type == VAR_13 &&
      VAR_8->ip_blocks[VAR_15].status.valid)
   break;

 if (VAR_15 == VAR_8->num_ip_blocks)
  return 0;

 VAR_14 = FUNC_0(VAR_7[VAR_9->query_hw_ip.type],
   VAR_14);

 VAR_10->hw_ip_version_major = VAR_8->ip_blocks[VAR_15].version->major;
 VAR_10->hw_ip_version_minor = VAR_8->ip_blocks[VAR_15].version->minor;
 VAR_10->capabilities_flags = 0;
 VAR_10->available_rings = (1 << VAR_14) - 1;
 VAR_10->ib_start_alignment = VAR_11;
 VAR_10->ib_size_alignment = VAR_12;
 return 0;
}
