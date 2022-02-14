
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct TYPE_7__ {TYPE_2__** rb_config; } ;
struct TYPE_5__ {struct cs_section_def* cs_data; } ;
struct TYPE_8__ {TYPE_3__ config; TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_4__ gfx; } ;
struct TYPE_6__ {int raster_config; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_1 (int) ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_9,
        volatile u32 *VAR_10)
{
 u32 VAR_11 = 0, VAR_12;
 const struct cs_section_def *VAR_13 = ((void*)0);
 const struct cs_extent_def *VAR_14 = ((void*)0);

 if (VAR_9->gfx.rlc.cs_data == ((void*)0))
  return;
 if (VAR_10 == ((void*)0))
  return;

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_10[VAR_11++] = FUNC_1(VAR_2);
 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_1, 1));
 VAR_10[VAR_11++] = FUNC_1(0x80000000);
 VAR_10[VAR_11++] = FUNC_1(0x80000000);

 for (VAR_13 = VAR_9->gfx.rlc.cs_data; VAR_13->section != ((void*)0); ++VAR_13) {
  for (VAR_14 = VAR_13->section; VAR_14->extent != ((void*)0); ++VAR_14) {
   if (VAR_13->id == VAR_7) {
    VAR_10[VAR_11++] =
     FUNC_1(FUNC_0(VAR_5, VAR_14->reg_count));
    VAR_10[VAR_11++] = FUNC_1(VAR_14->reg_index - 0xa000);
    for (VAR_12 = 0; VAR_12 < VAR_14->reg_count; VAR_12++)
     VAR_10[VAR_11++] = FUNC_1(VAR_14->extent[VAR_12]);
   } else {
    return;
   }
  }
 }

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_5, 1));
 VAR_10[VAR_11++] = FUNC_1(VAR_8 - VAR_6);
 VAR_10[VAR_11++] = FUNC_1(VAR_9->gfx.config.rb_config[0][0].raster_config);

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_10[VAR_11++] = FUNC_1(VAR_4);

 VAR_10[VAR_11++] = FUNC_1(FUNC_0(VAR_0, 0));
 VAR_10[VAR_11++] = FUNC_1(0);
}
