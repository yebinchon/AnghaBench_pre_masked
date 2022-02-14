
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ load_type; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_7__ {TYPE_2__ rlc; } ;
struct amdgpu_device {TYPE_4__ firmware; TYPE_3__ gfx; } ;
struct TYPE_5__ {int (* start ) (struct amdgpu_device*) ;int (* stop ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_6))
  return 0;

 if (VAR_6->firmware.load_type == VAR_1) {
  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7)
   return VAR_7;
  FUNC_2(VAR_6);


  FUNC_4(VAR_6);

 } else {
  VAR_6->gfx.rlc.funcs->stop(VAR_6);


  FUNC_0(VAR_3, 0, VAR_4, 0);


  FUNC_0(VAR_3, 0, VAR_5, 0);

  if (VAR_6->firmware.load_type == VAR_0) {

   VAR_7 = FUNC_5(VAR_6);
   if (VAR_7)
    return VAR_7;
  } else if (VAR_6->firmware.load_type == VAR_2) {

   VAR_7 = FUNC_3(VAR_6);
   if (VAR_7)
    return VAR_7;
  }

  FUNC_2(VAR_6);
  VAR_6->gfx.rlc.funcs->start(VAR_6);

  if (VAR_6->firmware.load_type == VAR_2) {
   VAR_7 = FUNC_6(VAR_6);
   if (VAR_7)
    return VAR_7;
  }
 }
 return 0;
}
