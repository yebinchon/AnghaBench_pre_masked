
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dm_pp_clock_levels {size_t num_levels; int* clocks_in_khz; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_9__ {TYPE_3__* funcs; } ;
struct TYPE_7__ {TYPE_1__* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_4__ smu; TYPE_2__ powerplay; } ;
struct amd_pp_simple_clock_info {int engine_max_clock; int memory_max_clock; int level; int member_0; } ;
struct amd_pp_clocks {int member_0; } ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
struct TYPE_8__ {scalar_t__ get_max_high_clocks; scalar_t__ get_clock_by_type; } ;
struct TYPE_6__ {scalar_t__ (* get_display_mode_validation_clocks ) (void*,struct amd_pp_simple_clock_info*) ;scalar_t__ (* get_clock_by_type ) (void*,int ,struct amd_pp_clocks*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct dm_pp_clock_levels*) ;
 int FUNC_3 (struct amd_pp_clocks*,struct dm_pp_clock_levels*,int) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int ,struct amd_pp_clocks*) ;
 scalar_t__ FUNC_5 (TYPE_4__*,struct amd_pp_simple_clock_info*) ;
 scalar_t__ FUNC_6 (void*,int ,struct amd_pp_clocks*) ;
 scalar_t__ FUNC_7 (void*,struct amd_pp_simple_clock_info*) ;

bool FUNC_8(
  const struct dc_context *VAR_2,
  enum dm_pp_clock_type VAR_3,
  struct dm_pp_clock_levels *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->driver_context;
 void *VAR_6 = VAR_5->powerplay.pp_handle;
 struct amd_pp_clocks VAR_7 = { 0 };
 struct amd_pp_simple_clock_info VAR_8 = { 0 };
 uint32_t VAR_9;

 if (VAR_5->powerplay.pp_funcs && VAR_5->powerplay.pp_funcs->get_clock_by_type) {
  if (VAR_5->powerplay.pp_funcs->get_clock_by_type(VAR_6,
   FUNC_1(VAR_3), &VAR_7)) {

   return 1;
  }
 } else if (VAR_5->smu.funcs && VAR_5->smu.funcs->get_clock_by_type) {
  if (FUNC_4(&VAR_5->smu,
       FUNC_1(VAR_3),
       &VAR_7)) {
   FUNC_2(VAR_3, VAR_4);
   return 1;
  }
 }

 FUNC_3(&VAR_7, VAR_4, VAR_3);

 if (VAR_5->powerplay.pp_funcs && VAR_5->powerplay.pp_funcs->get_display_mode_validation_clocks) {
  if (VAR_5->powerplay.pp_funcs->get_display_mode_validation_clocks(
      VAR_6, &VAR_8)) {

   FUNC_0("DM_PPLIB: Warning: using default validation clocks!\n");
   VAR_8.engine_max_clock = 72000;
   VAR_8.memory_max_clock = 80000;
   VAR_8.level = 0;
  }
 } else if (VAR_5->smu.funcs && VAR_5->smu.funcs->get_max_high_clocks) {
  if (FUNC_5(&VAR_5->smu, &VAR_8)) {
   FUNC_0("DM_PPLIB: Warning: using default validation clocks!\n");
   VAR_8.engine_max_clock = 72000;
   VAR_8.memory_max_clock = 80000;
   VAR_8.level = 0;
  }
 }

 FUNC_0("DM_PPLIB: Validation clocks:\n");
 FUNC_0("DM_PPLIB:    engine_max_clock: %d\n",
   VAR_8.engine_max_clock);
 FUNC_0("DM_PPLIB:    memory_max_clock: %d\n",
   VAR_8.memory_max_clock);
 FUNC_0("DM_PPLIB:    level           : %d\n",
   VAR_8.level);


 VAR_8.engine_max_clock *= 10;
 VAR_8.memory_max_clock *= 10;


 if (VAR_3 == VAR_0) {
  for (VAR_9 = 0; VAR_9 < VAR_4->num_levels; VAR_9++) {
   if (VAR_4->clocks_in_khz[VAR_9] > VAR_8.engine_max_clock) {



    FUNC_0("DM_PPLIB: reducing engine clock level from %d to %d\n",
      VAR_4->num_levels, VAR_9);
    VAR_4->num_levels = VAR_9 > 0 ? VAR_9 : 1;
    break;
   }
  }
 } else if (VAR_3 == VAR_1) {
  for (VAR_9 = 0; VAR_9 < VAR_4->num_levels; VAR_9++) {
   if (VAR_4->clocks_in_khz[VAR_9] > VAR_8.memory_max_clock) {
    FUNC_0("DM_PPLIB: reducing memory clock level from %d to %d\n",
      VAR_4->num_levels, VAR_9);
    VAR_4->num_levels = VAR_9 > 0 ? VAR_9 : 1;
    break;
   }
  }
 }

 return 1;
}
