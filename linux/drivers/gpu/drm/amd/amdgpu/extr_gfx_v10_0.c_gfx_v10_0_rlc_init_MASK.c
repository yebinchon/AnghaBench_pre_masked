
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cs_section_def {int dummy; } ;
struct TYPE_3__ {struct cs_section_def* cs_data; } ;
struct TYPE_4__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 struct cs_section_def* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_1)
{
 const struct cs_section_def *VAR_2;
 int VAR_3;

 VAR_1->gfx.rlc.cs_data = VAR_0;

 VAR_2 = VAR_1->gfx.rlc.cs_data;

 if (VAR_2) {

  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
