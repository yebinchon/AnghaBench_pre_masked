
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
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct amdgpu_ring*,unsigned int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_4, unsigned VAR_5,
      unsigned VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_4->adev;
 uint32_t VAR_8;

 if (VAR_4->funcs->vmhub == VAR_0)
  VAR_8 = FUNC_0(VAR_1, 0, VAR_2) + VAR_5;
 else
  VAR_8 = FUNC_0(VAR_1, 0, VAR_3) + VAR_5;

 FUNC_1(VAR_4, VAR_8, VAR_6);
}
