
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {scalar_t__ reg_count; int * extent; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct cs_section_def* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct amdgpu_device *VAR_2)
{
 u32 VAR_3 = 0;
 const struct cs_section_def *VAR_4 = ((void*)0);
 const struct cs_extent_def *VAR_5 = ((void*)0);


 VAR_3 += 2;

 VAR_3 += 3;

 for (VAR_4 = VAR_1; VAR_4->section != ((void*)0); ++VAR_4) {
  for (VAR_5 = VAR_4->section; VAR_5->extent != ((void*)0); ++VAR_5) {
   if (VAR_4->id == VAR_0)
    VAR_3 += 2 + VAR_5->reg_count;
   else
    return 0;
  }
 }

 VAR_3 += 4;

 VAR_3 += 2;

 VAR_3 += 2;

 return VAR_3;
}
