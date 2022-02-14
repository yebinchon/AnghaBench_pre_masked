
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct cs_section_def* cs_data; } ;
struct radeon_device {TYPE_1__ rlc; } ;
struct cs_section_def {scalar_t__ id; struct cs_extent_def* section; } ;
struct cs_extent_def {scalar_t__ reg_count; int * extent; } ;


 scalar_t__ VAR_0 ;

u32 FUNC_0(struct radeon_device *VAR_1)
{
 u32 VAR_2 = 0;
 const struct cs_section_def *VAR_3 = ((void*)0);
 const struct cs_extent_def *VAR_4 = ((void*)0);

 if (VAR_1->rlc.cs_data == ((void*)0))
  return 0;


 VAR_2 += 2;

 VAR_2 += 3;

 for (VAR_3 = VAR_1->rlc.cs_data; VAR_3->section != ((void*)0); ++VAR_3) {
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
