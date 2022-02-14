
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_8__ {TYPE_3__ rlc; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct amdgpu_device {int asic_type; TYPE_4__ gfx; TYPE_1__ firmware; } ;
struct TYPE_6__ {int (* start ) (struct amdgpu_device*) ;int (* stop ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int VAR_3 ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_4)) {
  FUNC_3(VAR_4);
  return 0;
 }

 VAR_4->gfx.rlc.funcs->stop(VAR_4);


 FUNC_0(VAR_1, 0, VAR_3, 0);

 FUNC_4(VAR_4);

 if (VAR_4->firmware.load_type != VAR_0) {

  VAR_5 = FUNC_5(VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 switch (VAR_4->asic_type) {
 case 129:
  if (VAR_2 == 0)
   FUNC_2(VAR_4, 0);
  else
   FUNC_2(VAR_4, 1);
  break;
 case 128:
  if (VAR_2 > 0)
   FUNC_2(VAR_4, 1);
  else
   FUNC_2(VAR_4, 0);
  break;
 default:
  break;
 }

 VAR_4->gfx.rlc.funcs->start(VAR_4);

 return 0;
}
