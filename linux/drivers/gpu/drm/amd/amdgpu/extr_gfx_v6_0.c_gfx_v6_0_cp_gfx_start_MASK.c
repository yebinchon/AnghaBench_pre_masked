
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_5__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {int max_hw_contexts; } ;
struct TYPE_6__ {TYPE_2__ rlc; TYPE_1__ config; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct amdgpu_ring*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 int FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_10)
{
 const struct cs_section_def *VAR_11 = ((void*)0);
 const struct cs_extent_def *VAR_12 = ((void*)0);
 struct amdgpu_ring *VAR_13 = &VAR_10->gfx.gfx_ring[0];
 int VAR_14, VAR_15;

 VAR_14 = FUNC_4(VAR_13, 7 + 4);
 if (VAR_14) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_14);
  return VAR_14;
 }
 FUNC_6(VAR_13, FUNC_1(VAR_2, 5));
 FUNC_6(VAR_13, 0x1);
 FUNC_6(VAR_13, 0x0);
 FUNC_6(VAR_13, VAR_10->gfx.config.max_hw_contexts - 1);
 FUNC_6(VAR_13, FUNC_3(1));
 FUNC_6(VAR_13, 0);
 FUNC_6(VAR_13, 0);

 FUNC_6(VAR_13, FUNC_1(VAR_6, 2));
 FUNC_6(VAR_13, FUNC_2(VAR_0));
 FUNC_6(VAR_13, 0xc000);
 FUNC_6(VAR_13, 0xe000);
 FUNC_5(VAR_13);

 FUNC_7(VAR_10, 1);

 VAR_14 = FUNC_4(VAR_13, FUNC_8(VAR_10) + 10);
 if (VAR_14) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_14);
  return VAR_14;
 }

 FUNC_6(VAR_13, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_13, VAR_3);

 for (VAR_11 = VAR_10->gfx.rlc.cs_data; VAR_11->section != ((void*)0); ++VAR_11) {
  for (VAR_12 = VAR_11->section; VAR_12->extent != ((void*)0); ++VAR_12) {
   if (VAR_11->id == VAR_9) {
    FUNC_6(VAR_13,
        FUNC_1(VAR_7, VAR_12->reg_count));
    FUNC_6(VAR_13, VAR_12->reg_index - VAR_8);
    for (VAR_15 = 0; VAR_15 < VAR_12->reg_count; VAR_15++)
     FUNC_6(VAR_13, VAR_12->extent[VAR_15]);
   }
  }
 }

 FUNC_6(VAR_13, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_13, VAR_5);

 FUNC_6(VAR_13, FUNC_1(VAR_1, 0));
 FUNC_6(VAR_13, 0);

 FUNC_6(VAR_13, FUNC_1(VAR_7, 2));
 FUNC_6(VAR_13, 0x00000316);
 FUNC_6(VAR_13, 0x0000000e);
 FUNC_6(VAR_13, 0x00000010);

 FUNC_5(VAR_13);

 return 0;
}
