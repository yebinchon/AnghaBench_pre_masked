
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_3__ {int max_hw_contexts; } ;
struct TYPE_4__ {TYPE_1__ config; struct amdgpu_ring* gfx_ring; } ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (struct amdgpu_ring*,scalar_t__) ;
 int FUNC_6 (struct amdgpu_ring*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 struct cs_section_def* VAR_14 ;
 int FUNC_8 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_9 (struct amdgpu_device*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_10(struct amdgpu_device *VAR_18)
{
 struct amdgpu_ring *VAR_19 = &VAR_18->gfx.gfx_ring[0];
 const struct cs_section_def *VAR_20 = ((void*)0);
 const struct cs_extent_def *VAR_21 = ((void*)0);
 int VAR_22, VAR_23, VAR_24;


 FUNC_4(VAR_1, 0, VAR_16, VAR_18->gfx.config.max_hw_contexts - 1);
 FUNC_4(VAR_1, 0, VAR_15, 1);

 FUNC_8(VAR_18, 1);

 VAR_22 = FUNC_5(VAR_19, FUNC_9(VAR_18) + 4 + 3);
 if (VAR_22) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_22);
  return VAR_22;
 }

 FUNC_7(VAR_19, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_19, VAR_4);

 FUNC_7(VAR_19, FUNC_1(VAR_3, 1));
 FUNC_7(VAR_19, 0x80000000);
 FUNC_7(VAR_19, 0x80000000);

 for (VAR_20 = VAR_14; VAR_20->section != ((void*)0); ++VAR_20) {
  for (VAR_21 = VAR_20->section; VAR_21->extent != ((void*)0); ++VAR_21) {
   if (VAR_20->id == VAR_13) {
    FUNC_7(VAR_19,
           FUNC_1(VAR_8,
            VAR_21->reg_count));
    FUNC_7(VAR_19,
           VAR_21->reg_index - VAR_9);
    for (VAR_23 = 0; VAR_23 < VAR_21->reg_count; VAR_23++)
     FUNC_7(VAR_19, VAR_21->extent[VAR_23]);
   }
  }
 }

 FUNC_7(VAR_19, FUNC_1(VAR_5, 0));
 FUNC_7(VAR_19, VAR_6);

 FUNC_7(VAR_19, FUNC_1(VAR_2, 0));
 FUNC_7(VAR_19, 0);

 FUNC_7(VAR_19, FUNC_1(VAR_7, 2));
 FUNC_7(VAR_19, FUNC_2(VAR_0));
 FUNC_7(VAR_19, 0x8000);
 FUNC_7(VAR_19, 0x8000);

 FUNC_7(VAR_19, FUNC_1(VAR_10,1));
 VAR_24 = (VAR_11 |
  (FUNC_3(VAR_1, 0, VAR_17) - VAR_12));
 FUNC_7(VAR_19, VAR_24);
 FUNC_7(VAR_19, 0);

 FUNC_6(VAR_19);

 return 0;
}
