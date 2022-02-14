
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {int* extent; int reg_count; int reg_index; } ;
struct TYPE_3__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


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

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_8,
        volatile u32 *VAR_9)
{
 u32 VAR_10 = 0, VAR_11;
 const struct cs_section_def *VAR_12 = ((void*)0);
 const struct cs_extent_def *VAR_13 = ((void*)0);

 if (VAR_8->gfx.rlc.cs_data == ((void*)0))
  return;
 if (VAR_9 == ((void*)0))
  return;

 VAR_9[VAR_10++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_9[VAR_10++] = FUNC_1(VAR_2);

 VAR_9[VAR_10++] = FUNC_1(FUNC_0(VAR_1, 1));
 VAR_9[VAR_10++] = FUNC_1(0x80000000);
 VAR_9[VAR_10++] = FUNC_1(0x80000000);

 for (VAR_12 = VAR_8->gfx.rlc.cs_data; VAR_12->section != ((void*)0); ++VAR_12) {
  for (VAR_13 = VAR_12->section; VAR_13->extent != ((void*)0); ++VAR_13) {
   if (VAR_12->id == VAR_7) {
    VAR_9[VAR_10++] =
     FUNC_1(FUNC_0(VAR_5, VAR_13->reg_count));
    VAR_9[VAR_10++] = FUNC_1(VAR_13->reg_index -
      VAR_6);
    for (VAR_11 = 0; VAR_11 < VAR_13->reg_count; VAR_11++)
     VAR_9[VAR_10++] = FUNC_1(VAR_13->extent[VAR_11]);
   } else {
    return;
   }
  }
 }

 VAR_9[VAR_10++] = FUNC_1(FUNC_0(VAR_3, 0));
 VAR_9[VAR_10++] = FUNC_1(VAR_4);

 VAR_9[VAR_10++] = FUNC_1(FUNC_0(VAR_0, 0));
 VAR_9[VAR_10++] = FUNC_1(0);
}
