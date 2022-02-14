
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int wptr; int me; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct amdgpu_ring*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_ring *VAR_2, uint32_t VAR_3)
{
 struct amdgpu_device *VAR_4 = VAR_2->adev;
 int VAR_5;

 FUNC_2(VAR_2->wptr % 2 || VAR_3 % 2);

 for (VAR_5 = 0; VAR_5 < VAR_3 / 2; VAR_5++) {
  FUNC_3(VAR_2, FUNC_0(FUNC_1(VAR_0, VAR_2->me, VAR_1), 0));
  FUNC_3(VAR_2, 0);
 }
}
