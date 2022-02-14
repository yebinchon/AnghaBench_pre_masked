
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct amdgpu_ring {TYPE_1__* funcs; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ vmhub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,unsigned int,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_5, unsigned VAR_6,
     unsigned VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_5->adev;
 uint32_t VAR_9;


 if (VAR_5->funcs->vmhub == VAR_1)
  return;

 if (VAR_5->funcs->vmhub == VAR_0)
  VAR_9 = FUNC_0(VAR_2, 0, VAR_3) + VAR_6;
 else
  VAR_9 = FUNC_0(VAR_2, 0, VAR_4) + VAR_6;

 FUNC_1(VAR_5, VAR_9, VAR_7);
}
