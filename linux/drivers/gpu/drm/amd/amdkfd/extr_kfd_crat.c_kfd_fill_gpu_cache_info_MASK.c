
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kfd_gpu_cache_info {scalar_t__ num_cu_shared; } ;
struct kfd_dev {TYPE_1__* device_info; } ;
struct kfd_cu_info {int num_shader_engines; int num_shader_arrays_per_engine; int num_cu_per_sh; int ** cu_bitmap; } ;
struct crat_subtype_cache {int dummy; } ;
struct TYPE_2__ {int asic_family; } ;


 int FUNC_0 (struct kfd_gpu_cache_info*) ;
 int VAR_0 ;
 struct kfd_gpu_cache_info* VAR_1 ;
 struct kfd_gpu_cache_info* VAR_2 ;
 int FUNC_1 (struct crat_subtype_cache*,struct kfd_gpu_cache_info*,struct kfd_cu_info*,int,int ,int,unsigned int,int) ;
 struct kfd_gpu_cache_info* VAR_3 ;
 struct kfd_gpu_cache_info* VAR_4 ;
 struct kfd_gpu_cache_info* VAR_5 ;
 struct kfd_gpu_cache_info* VAR_6 ;
 struct kfd_gpu_cache_info* VAR_7 ;
 struct kfd_gpu_cache_info* VAR_8 ;
 int FUNC_2 (char*,int) ;
 struct kfd_gpu_cache_info* VAR_9 ;
 struct kfd_gpu_cache_info* VAR_10 ;
 struct kfd_gpu_cache_info* VAR_11 ;
 struct kfd_gpu_cache_info* VAR_12 ;

__attribute__((used)) static int FUNC_3(struct kfd_dev *VAR_13,
   int VAR_14,
   int VAR_15,
   struct kfd_cu_info *VAR_16,
   struct crat_subtype_cache *VAR_17,
   int *VAR_18,
   int *VAR_19)
{
 struct kfd_gpu_cache_info *VAR_20;
 int VAR_21 = 0;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25 = 0;
 int VAR_26 = VAR_15;
 unsigned int VAR_27;
 int VAR_28;

 switch (VAR_13->device_info->asic_family) {
 case 138:
  VAR_20 = VAR_4;
  VAR_21 = FUNC_0(VAR_4);
  break;
 case 139:
  VAR_20 = VAR_3;
  VAR_21 = FUNC_0(VAR_3);
  break;
 case 141:
  VAR_20 = VAR_1;
  VAR_21 = FUNC_0(VAR_1);
  break;
 case 132:
  VAR_20 = VAR_10;
  VAR_21 = FUNC_0(VAR_10);
  break;
 case 140:
  VAR_20 = VAR_2;
  VAR_21 = FUNC_0(VAR_2);
  break;
 case 136:
  VAR_20 = VAR_6;
  VAR_21 = FUNC_0(VAR_6);
  break;
 case 135:
  VAR_20 = VAR_7;
  VAR_21 = FUNC_0(VAR_7);
  break;
 case 134:
  VAR_20 = VAR_8;
  VAR_21 = FUNC_0(VAR_8);
  break;
 case 128:
  VAR_20 = VAR_12;
  VAR_21 = FUNC_0(VAR_12);
  break;
 case 131:
 case 130:
 case 129:
 case 142:
  VAR_20 = VAR_11;
  VAR_21 = FUNC_0(VAR_11);
  break;
 case 133:
  VAR_20 = VAR_9;
  VAR_21 = FUNC_0(VAR_9);
  break;
 case 137:
  VAR_20 = VAR_5;
  VAR_21 = FUNC_0(VAR_5);
  break;
 default:
  return -VAR_0;
 }

 *VAR_18 = 0;
 *VAR_19 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++) {
  VAR_27 = VAR_14;
  for (VAR_22 = 0; VAR_22 < VAR_16->num_shader_engines; VAR_22++) {
   for (VAR_23 = 0; VAR_23 < VAR_16->num_shader_arrays_per_engine;
    VAR_23++) {
    for (VAR_24 = 0; VAR_24 < VAR_16->num_cu_per_sh;
     VAR_24 += VAR_20[VAR_25].num_cu_shared) {

     VAR_28 = FUNC_1(VAR_17,
      VAR_20,
      VAR_16,
      VAR_26,
      VAR_16->cu_bitmap[VAR_22][VAR_23],
      VAR_25,
      VAR_27,
      VAR_24);

     if (VAR_28 < 0)
      break;

     if (!VAR_28) {
      VAR_17++;
      (*VAR_19)++;
      VAR_26 -=
       sizeof(*VAR_17);
      (*VAR_18) +=
       sizeof(*VAR_17);
     }


     VAR_27 +=
      VAR_20[VAR_25].num_cu_shared;
    }
   }
  }
 }

 FUNC_2("Added [%d] GPU cache entries\n", *VAR_19);

 return 0;
}
