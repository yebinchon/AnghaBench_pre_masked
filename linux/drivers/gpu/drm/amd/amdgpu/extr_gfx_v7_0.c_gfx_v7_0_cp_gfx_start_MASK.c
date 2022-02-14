
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_7__ {int max_hw_contexts; TYPE_2__** rb_config; } ;
struct TYPE_5__ {struct cs_section_def* cs_data; } ;
struct TYPE_8__ {TYPE_3__ config; TYPE_1__ rlc; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;
struct TYPE_6__ {int raster_config; int raster_config_1; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct amdgpu_ring*,scalar_t__) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (struct amdgpu_device*,int) ;
 scalar_t__ FUNC_8 (struct amdgpu_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_14)
{
 struct amdgpu_ring *VAR_15 = &VAR_14->gfx.gfx_ring[0];
 const struct cs_section_def *VAR_16 = ((void*)0);
 const struct cs_extent_def *VAR_17 = ((void*)0);
 int VAR_18, VAR_19;


 FUNC_3(VAR_12, VAR_14->gfx.config.max_hw_contexts - 1);
 FUNC_3(VAR_11, 0);
 FUNC_3(VAR_10, 1);

 FUNC_7(VAR_14, 1);

 VAR_18 = FUNC_4(VAR_15, FUNC_8(VAR_14) + 8);
 if (VAR_18) {
  FUNC_0("amdgpu: cp failed to lock ring (%d).\n", VAR_18);
  return VAR_18;
 }


 FUNC_6(VAR_15, FUNC_1(VAR_6, 2));
 FUNC_6(VAR_15, FUNC_2(VAR_0));
 FUNC_6(VAR_15, 0x8000);
 FUNC_6(VAR_15, 0x8000);


 FUNC_6(VAR_15, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_15, VAR_3);

 FUNC_6(VAR_15, FUNC_1(VAR_2, 1));
 FUNC_6(VAR_15, 0x80000000);
 FUNC_6(VAR_15, 0x80000000);

 for (VAR_16 = VAR_14->gfx.rlc.cs_data; VAR_16->section != ((void*)0); ++VAR_16) {
  for (VAR_17 = VAR_16->section; VAR_17->extent != ((void*)0); ++VAR_17) {
   if (VAR_16->id == VAR_9) {
    FUNC_6(VAR_15,
        FUNC_1(VAR_7, VAR_17->reg_count));
    FUNC_6(VAR_15, VAR_17->reg_index - VAR_8);
    for (VAR_19 = 0; VAR_19 < VAR_17->reg_count; VAR_19++)
     FUNC_6(VAR_15, VAR_17->extent[VAR_19]);
   }
  }
 }

 FUNC_6(VAR_15, FUNC_1(VAR_7, 2));
 FUNC_6(VAR_15, VAR_13 - VAR_8);
 FUNC_6(VAR_15, VAR_14->gfx.config.rb_config[0][0].raster_config);
 FUNC_6(VAR_15, VAR_14->gfx.config.rb_config[0][0].raster_config_1);

 FUNC_6(VAR_15, FUNC_1(VAR_4, 0));
 FUNC_6(VAR_15, VAR_5);

 FUNC_6(VAR_15, FUNC_1(VAR_1, 0));
 FUNC_6(VAR_15, 0);

 FUNC_6(VAR_15, FUNC_1(VAR_7, 2));
 FUNC_6(VAR_15, 0x00000316);
 FUNC_6(VAR_15, 0x0000000e);
 FUNC_6(VAR_15, 0x00000010);

 FUNC_5(VAR_15);

 return 0;
}
