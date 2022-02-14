
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_section_def {int dummy; } ;
struct TYPE_4__ {scalar_t__ cp_table_size; struct cs_section_def* cs_data; } ;
struct TYPE_3__ {TYPE_2__ rlc; } ;
struct amdgpu_device {int asic_type; TYPE_1__ gfx; } ;


 scalar_t__ FUNC_0 (int,int) ;

 int VAR_0 ;

 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 struct cs_section_def* VAR_1 ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_2)
{
 const struct cs_section_def *VAR_3;
 int VAR_4;

 VAR_2->gfx.rlc.cs_data = VAR_1;

 VAR_3 = VAR_2->gfx.rlc.cs_data;

 if (VAR_3) {

  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_2->asic_type == 129 || VAR_2->asic_type == VAR_0) {

  VAR_2->gfx.rlc.cp_table_size = FUNC_0(96 * 5 * 4, 2048) + (64 * 1024);
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_4)
   return VAR_4;
 }

 switch (VAR_2->asic_type) {
 case 129:
  FUNC_3(VAR_2);
  break;
 case 128:
  FUNC_4(VAR_2);
  break;
 default:
  break;
 }

 return 0;
}
