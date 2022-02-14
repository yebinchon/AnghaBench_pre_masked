
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_6, unsigned VAR_7)
{
 struct amdgpu_device *VAR_8 = VAR_6->adev;
 uint32_t VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_9, VAR_3, VAR_1, 0x03);
 VAR_9 = FUNC_0(VAR_9, VAR_3, VAR_2, 0x01);
 VAR_9 = FUNC_0(VAR_9, VAR_3, VAR_0, 1);
 VAR_9 = FUNC_0(VAR_9, VAR_3, VAR_4, VAR_7);
 FUNC_1(VAR_5, VAR_9);
}
