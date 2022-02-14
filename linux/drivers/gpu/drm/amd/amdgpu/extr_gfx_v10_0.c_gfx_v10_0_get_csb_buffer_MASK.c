
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct TYPE_5__ {int pa_sc_tile_steering_override; } ;
struct TYPE_4__ {struct cs_section_def* cs_data; } ;
struct TYPE_6__ {TYPE_2__ config; TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int ,int ) ;
 size_t FUNC_2 (int) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_10,
        volatile u32 *VAR_11)
{
 u32 VAR_12 = 0, VAR_13;
 const struct cs_section_def *VAR_14 = ((void*)0);
 const struct cs_extent_def *VAR_15 = ((void*)0);
 int VAR_16;

 if (VAR_10->gfx.rlc.cs_data == ((void*)0))
  return;
 if (VAR_11 == ((void*)0))
  return;

 VAR_11[VAR_12++] = FUNC_2(FUNC_0(VAR_4, 0));
 VAR_11[VAR_12++] = FUNC_2(VAR_3);

 VAR_11[VAR_12++] = FUNC_2(FUNC_0(VAR_2, 1));
 VAR_11[VAR_12++] = FUNC_2(0x80000000);
 VAR_11[VAR_12++] = FUNC_2(0x80000000);

 for (VAR_14 = VAR_10->gfx.rlc.cs_data; VAR_14->section != ((void*)0); ++VAR_14) {
  for (VAR_15 = VAR_14->section; VAR_15->extent != ((void*)0); ++VAR_15) {
   if (VAR_14->id == VAR_8) {
    VAR_11[VAR_12++] =
     FUNC_2(FUNC_0(VAR_6, VAR_15->reg_count));
    VAR_11[VAR_12++] = FUNC_2(VAR_15->reg_index -
      VAR_7);
    for (VAR_13 = 0; VAR_13 < VAR_15->reg_count; VAR_13++)
     VAR_11[VAR_12++] = FUNC_2(VAR_15->extent[VAR_13]);
   } else {
    return;
   }
  }
 }

 VAR_16 =
  FUNC_1(VAR_0, 0, VAR_9) - VAR_7;
 VAR_11[VAR_12++] = FUNC_2(FUNC_0(VAR_6, 1));
 VAR_11[VAR_12++] = FUNC_2(VAR_16);
 VAR_11[VAR_12++] = FUNC_2(VAR_10->gfx.config.pa_sc_tile_steering_override);

 VAR_11[VAR_12++] = FUNC_2(FUNC_0(VAR_4, 0));
 VAR_11[VAR_12++] = FUNC_2(VAR_5);

 VAR_11[VAR_12++] = FUNC_2(FUNC_0(VAR_1, 0));
 VAR_11[VAR_12++] = FUNC_2(0);
}
