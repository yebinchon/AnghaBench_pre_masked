
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {unsigned int length_dw; int gpu_addr; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct amdgpu_ring*,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_5,
     struct amdgpu_job *VAR_6,
     struct amdgpu_ib *VAR_7,
     uint32_t VAR_8)
{
 struct amdgpu_device *VAR_9 = VAR_5->adev;
 unsigned VAR_10 = FUNC_0(VAR_6);

 FUNC_3(VAR_5,
  FUNC_1(FUNC_2(VAR_0, 0, VAR_3), 0));
 FUNC_3(VAR_5, VAR_10);

 FUNC_3(VAR_5,
  FUNC_1(FUNC_2(VAR_0, 0, VAR_2), 0));
 FUNC_3(VAR_5, FUNC_4(VAR_7->gpu_addr));
 FUNC_3(VAR_5,
  FUNC_1(FUNC_2(VAR_0, 0, VAR_1), 0));
 FUNC_3(VAR_5, FUNC_5(VAR_7->gpu_addr));
 FUNC_3(VAR_5,
  FUNC_1(FUNC_2(VAR_0, 0, VAR_4), 0));
 FUNC_3(VAR_5, VAR_7->length_dw);
}
