
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int vgpu_allocated_fence_num; } ;
struct TYPE_4__ {unsigned int vgpu_allocated_low_gm_size; unsigned int vgpu_allocated_high_gm_size; } ;
struct intel_gvt {int num_types; TYPE_3__* types; TYPE_2__ fence; TYPE_1__ gm; } ;
struct TYPE_6__ {unsigned int low_gm_size; unsigned int high_gm_size; unsigned int fence; unsigned int avail_instance; int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct intel_gvt*) ;
 int FUNC_1 (char*,int,int ,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_2 (struct intel_gvt*) ;
 unsigned int FUNC_3 (struct intel_gvt*) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct intel_gvt *VAR_3)
{
 int VAR_4;
 unsigned int VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10;




 VAR_5 = FUNC_0(VAR_3) - VAR_2 -
  VAR_3->gm.vgpu_allocated_low_gm_size;
 VAR_6 = FUNC_3(VAR_3) - VAR_1 -
  VAR_3->gm.vgpu_allocated_high_gm_size;
 VAR_7 = FUNC_2(VAR_3) - VAR_0 -
  VAR_3->fence.vgpu_allocated_fence_num;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_types; VAR_4++) {
  VAR_8 = VAR_5 / VAR_3->types[VAR_4].low_gm_size;
  VAR_9 = VAR_6 / VAR_3->types[VAR_4].high_gm_size;
  VAR_10 = VAR_7 / VAR_3->types[VAR_4].fence;
  VAR_3->types[VAR_4].avail_instance = FUNC_4(FUNC_4(VAR_8, VAR_9),
         VAR_10);

  FUNC_1("update type[%d]: %s avail %u low %u high %u fence %u\n",
         VAR_4, VAR_3->types[VAR_4].name,
         VAR_3->types[VAR_4].avail_instance, VAR_3->types[VAR_4].low_gm_size,
         VAR_3->types[VAR_4].high_gm_size, VAR_3->types[VAR_4].fence);
 }
}
