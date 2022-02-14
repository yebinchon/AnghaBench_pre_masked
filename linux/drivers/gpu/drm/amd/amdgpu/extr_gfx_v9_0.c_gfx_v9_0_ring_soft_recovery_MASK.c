
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
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_7, unsigned VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_7->adev;
 uint32_t VAR_10 = 0;

 VAR_10 = FUNC_0(VAR_10, VAR_4, VAR_1, 0x03);
 VAR_10 = FUNC_0(VAR_10, VAR_4, VAR_3, 0x01);
 VAR_10 = FUNC_0(VAR_10, VAR_4, VAR_0, 1);
 VAR_10 = FUNC_0(VAR_10, VAR_4, VAR_5, VAR_8);
 FUNC_1(VAR_2, 0, VAR_6, VAR_10);
}
