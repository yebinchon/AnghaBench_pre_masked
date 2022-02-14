
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_section_def {int dummy; } ;
struct TYPE_3__ {scalar_t__ cp_table_size; struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ gfx; } ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct cs_section_def* VAR_2 ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_3)
{
 const struct cs_section_def *VAR_4;
 int VAR_5;

 VAR_3->gfx.rlc.cs_data = VAR_2;

 VAR_4 = VAR_3->gfx.rlc.cs_data;

 if (VAR_4) {

  VAR_5 = FUNC_2(VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 if ((VAR_3->asic_type == VAR_0) ||
     (VAR_3->asic_type == VAR_1)) {
  VAR_3->gfx.rlc.cp_table_size = FUNC_0(96 * 5 * 4, 2048) + (64 * 1024);
  VAR_5 = FUNC_1(VAR_3);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
