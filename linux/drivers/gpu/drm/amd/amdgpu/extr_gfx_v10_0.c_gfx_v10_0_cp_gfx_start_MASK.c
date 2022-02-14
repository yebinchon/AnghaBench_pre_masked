
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; int pa_sc_tile_steering_override; } ;
struct TYPE_4__ {struct amdgpu_ring* gfx_ring; TYPE_1__ config; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct amdgpu_ring*,int) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 struct cs_section_def* VAR_11 ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_15)
{
 struct amdgpu_ring *VAR_16;
 const struct cs_section_def *VAR_17 = ((void*)0);
 const struct cs_extent_def *VAR_18 = ((void*)0);
 int VAR_19, VAR_20;
 int VAR_21;


 FUNC_4(VAR_1, 0, VAR_13,
       VAR_15->gfx.config.max_hw_contexts - 1);
 FUNC_4(VAR_1, 0, VAR_12, 1);

 FUNC_8(VAR_15, 1);

 VAR_16 = &VAR_15->gfx.gfx_ring[0];
 VAR_19 = FUNC_5(VAR_16, FUNC_9(VAR_15) + 4);
 if (VAR_19) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_19);
  return VAR_19;
 }

 FUNC_7(VAR_16, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_16, VAR_4);

 FUNC_7(VAR_16, FUNC_1(VAR_3, 1));
 FUNC_7(VAR_16, 0x80000000);
 FUNC_7(VAR_16, 0x80000000);

 for (VAR_17 = VAR_11; VAR_17->section != ((void*)0); ++VAR_17) {
  for (VAR_18 = VAR_17->section; VAR_18->extent != ((void*)0); ++VAR_18) {
   if (VAR_17->id == VAR_10) {
    FUNC_7(VAR_16,
        FUNC_1(VAR_8,
         VAR_18->reg_count));
    FUNC_7(VAR_16, VAR_18->reg_index -
        VAR_9);
    for (VAR_20 = 0; VAR_20 < VAR_18->reg_count; VAR_20++)
     FUNC_7(VAR_16, VAR_18->extent[VAR_20]);
   }
  }
 }

 VAR_21 =
  FUNC_3(VAR_1, 0, VAR_14) - VAR_9;
 FUNC_7(VAR_16, FUNC_1(VAR_8, 1));
 FUNC_7(VAR_16, VAR_21);
 FUNC_7(VAR_16, VAR_15->gfx.config.pa_sc_tile_steering_override);

 FUNC_7(VAR_16, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_16, VAR_6);

 FUNC_7(VAR_16, FUNC_1(VAR_2, 0));
 FUNC_7(VAR_16, 0);

 FUNC_7(VAR_16, FUNC_1(VAR_7, 2));
 FUNC_7(VAR_16, FUNC_2(VAR_0));
 FUNC_7(VAR_16, 0x8000);
 FUNC_7(VAR_16, 0x8000);

 FUNC_6(VAR_16);


 VAR_16 = &VAR_15->gfx.gfx_ring[1];
 VAR_19 = FUNC_5(VAR_16, 2);
 if (VAR_19) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_19);
  return VAR_19;
 }

 FUNC_7(VAR_16, FUNC_1(VAR_2, 0));
 FUNC_7(VAR_16, 0);

 FUNC_6(VAR_16);

 return 0;
}
