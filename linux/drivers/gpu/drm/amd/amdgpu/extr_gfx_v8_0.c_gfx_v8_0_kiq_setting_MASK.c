
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int me; int pipe; int queue; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_1)
{
 uint32_t VAR_2;
 struct amdgpu_device *VAR_3 = VAR_1->adev;


 VAR_2 = FUNC_0(VAR_0);
 VAR_2 &= 0xffffff00;
 VAR_2 |= (VAR_1->me << 5) | (VAR_1->pipe << 3) | (VAR_1->queue);
 FUNC_1(VAR_0, VAR_2);
 VAR_2 |= 0x80;
 FUNC_1(VAR_0, VAR_2);
}
