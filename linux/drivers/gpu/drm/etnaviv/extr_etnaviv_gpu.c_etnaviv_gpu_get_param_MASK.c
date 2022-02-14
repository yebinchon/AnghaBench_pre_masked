
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct TYPE_5__ {unsigned long long model; unsigned long long revision; unsigned long long features; unsigned long long minor_features0; unsigned long long minor_features1; unsigned long long minor_features2; unsigned long long minor_features3; unsigned long long minor_features4; unsigned long long minor_features5; unsigned long long minor_features6; unsigned long long minor_features7; unsigned long long minor_features8; unsigned long long minor_features9; unsigned long long minor_features10; unsigned long long minor_features11; unsigned long long stream_count; unsigned long long register_max; unsigned long long thread_count; unsigned long long vertex_cache_size; unsigned long long shader_core_count; unsigned long long pixel_pipes; unsigned long long vertex_output_buffer_size; unsigned long long buffer_size; unsigned long long instruction_count; unsigned long long num_constants; unsigned long long varyings_count; } ;
struct etnaviv_gpu {int dev; TYPE_2__ identity; TYPE_1__* drm; } ;
struct etnaviv_drm_private {TYPE_3__* mmu_global; } ;
struct TYPE_6__ {int version; } ;
struct TYPE_4__ {struct etnaviv_drm_private* dev_private; } ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 int FUNC_1 (int ) ;

int FUNC_2(struct etnaviv_gpu *VAR_3, u32 VAR_4, u64 *VAR_5)
{
 struct etnaviv_drm_private *VAR_6 = VAR_3->drm->dev_private;

 switch (VAR_4) {
 case 139:
  *VAR_5 = VAR_3->identity.model;
  break;

 case 134:
  *VAR_5 = VAR_3->identity.revision;
  break;

 case 153:
  *VAR_5 = VAR_3->identity.features;
  break;

 case 152:
  *VAR_5 = VAR_3->identity.minor_features0;
  break;

 case 148:
  *VAR_5 = VAR_3->identity.minor_features1;
  break;

 case 147:
  *VAR_5 = VAR_3->identity.minor_features2;
  break;

 case 146:
  *VAR_5 = VAR_3->identity.minor_features3;
  break;

 case 145:
  *VAR_5 = VAR_3->identity.minor_features4;
  break;

 case 144:
  *VAR_5 = VAR_3->identity.minor_features5;
  break;

 case 143:
  *VAR_5 = VAR_3->identity.minor_features6;
  break;

 case 142:
  *VAR_5 = VAR_3->identity.minor_features7;
  break;

 case 141:
  *VAR_5 = VAR_3->identity.minor_features8;
  break;

 case 151:
  *VAR_5 = VAR_3->identity.minor_features9;
  break;

 case 150:
  *VAR_5 = VAR_3->identity.minor_features10;
  break;

 case 149:
  *VAR_5 = VAR_3->identity.minor_features11;
  break;

 case 132:
  *VAR_5 = VAR_3->identity.stream_count;
  break;

 case 135:
  *VAR_5 = VAR_3->identity.register_max;
  break;

 case 131:
  *VAR_5 = VAR_3->identity.thread_count;
  break;

 case 130:
  *VAR_5 = VAR_3->identity.vertex_cache_size;
  break;

 case 133:
  *VAR_5 = VAR_3->identity.shader_core_count;
  break;

 case 136:
  *VAR_5 = VAR_3->identity.pixel_pipes;
  break;

 case 129:
  *VAR_5 = VAR_3->identity.vertex_output_buffer_size;
  break;

 case 154:
  *VAR_5 = VAR_3->identity.buffer_size;
  break;

 case 140:
  *VAR_5 = VAR_3->identity.instruction_count;
  break;

 case 138:
  *VAR_5 = VAR_3->identity.num_constants;
  break;

 case 137:
  *VAR_5 = VAR_3->identity.varyings_count;
  break;

 case 128:
  if (VAR_6->mmu_global->version == VAR_1)
   *VAR_5 = VAR_2;
  else
   *VAR_5 = ~0ULL;
  break;

 default:
  FUNC_0("%s: invalid param: %u", FUNC_1(VAR_3->dev), VAR_4);
  return -VAR_0;
 }

 return 0;
}
