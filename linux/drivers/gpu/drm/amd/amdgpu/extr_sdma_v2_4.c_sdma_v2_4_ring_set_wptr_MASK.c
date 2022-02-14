
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {size_t me; int wptr; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 FUNC_0(VAR_0 + VAR_1[VAR_2->me], FUNC_1(VAR_2->wptr) << 2);
}
