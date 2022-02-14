
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int* ring; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 void* FUNC_0 (int,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct amdgpu_ring *VAR_3, uint32_t *VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_3->adev;
 VAR_3->ring[(*VAR_4)++] = FUNC_0(FUNC_1(VAR_1, 0, VAR_2), 0, 0, VAR_0);
 if (((VAR_5 >= 0x1f800) && (VAR_5 <= 0x21fff)) ||
  ((VAR_5 >= 0x1e000) && (VAR_5 <= 0x1e1ff))) {
  VAR_3->ring[(*VAR_4)++] = 0;
  VAR_3->ring[(*VAR_4)++] = FUNC_0((VAR_5 >> 2), 0, 0, VAR_0);
 } else {
  VAR_3->ring[(*VAR_4)++] = VAR_5;
  VAR_3->ring[(*VAR_4)++] = FUNC_0(0, 0, 0, VAR_0);
 }
 VAR_3->ring[(*VAR_4)++] = VAR_6;
}
