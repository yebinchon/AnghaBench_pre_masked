
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {scalar_t__ reg_count; int * extent; } ;
struct TYPE_3__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_1)
{
 u32 VAR_2 = 0;
 const struct cs_section_def *VAR_3 = ((void*)0);
 const struct cs_extent_def *VAR_4 = ((void*)0);

 if (VAR_1->gfx.rlc.cs_data == ((void*)0))
  return 0;


 VAR_2 += 2;

 VAR_2 += 3;

 for (VAR_3 = VAR_1->gfx.rlc.cs_data; VAR_3->section != ((void*)0); ++VAR_3) {
  for (VAR_4 = VAR_3->section; VAR_4->extent != ((void*)0); ++VAR_4) {
   if (VAR_3->id == VAR_0)
    VAR_2 += 2 + VAR_4->reg_count;
   else
    return 0;
  }
 }

 VAR_2 += 4;

 VAR_2 += 2;

 VAR_2 += 2;

 return VAR_2;
}
