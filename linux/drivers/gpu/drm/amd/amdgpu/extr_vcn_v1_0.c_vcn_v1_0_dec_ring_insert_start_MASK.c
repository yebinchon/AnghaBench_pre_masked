
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct amdgpu_ring*,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;

 FUNC_2(VAR_4,
  FUNC_0(FUNC_1(VAR_0, 0, VAR_3), 0));
 FUNC_2(VAR_4, 0);
 FUNC_2(VAR_4,
  FUNC_0(FUNC_1(VAR_0, 0, VAR_2), 0));
 FUNC_2(VAR_4, VAR_1 << 1);
}
