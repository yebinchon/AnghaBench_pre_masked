
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int gpu_addr; struct amdgpu_device* adev; } ;
struct amdgpu_job {int dummy; } ;
struct amdgpu_ib {int length_dw; int gpu_addr; } ;
struct amdgpu_device {int dummy; } ;


 unsigned int FUNC_0 (struct amdgpu_job*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct amdgpu_ring *VAR_16,
     struct amdgpu_job *VAR_17,
     struct amdgpu_ib *VAR_18,
     uint32_t VAR_19)
{
 struct amdgpu_device *VAR_20 = VAR_16->adev;
 unsigned VAR_21 = FUNC_0(VAR_17);

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_13), 0, 0, VAR_2));
 FUNC_3(VAR_16, (VAR_21 | (VAR_21 << 4)));

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_10), 0, 0, VAR_2));
 FUNC_3(VAR_16, (VAR_21 | (VAR_21 << 4)));

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_12), 0, 0, VAR_2));
 FUNC_3(VAR_16, FUNC_4(VAR_18->gpu_addr));

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_11), 0, 0, VAR_2));
 FUNC_3(VAR_16, FUNC_5(VAR_18->gpu_addr));

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_6), 0, 0, VAR_2));
 FUNC_3(VAR_16, VAR_18->length_dw);

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_15), 0, 0, VAR_2));
 FUNC_3(VAR_16, FUNC_4(VAR_16->gpu_addr));

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_14), 0, 0, VAR_2));
 FUNC_3(VAR_16, FUNC_5(VAR_16->gpu_addr));

 FUNC_3(VAR_16,
  FUNC_1(0, 0, VAR_0, VAR_3));
 FUNC_3(VAR_16, 0);

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_7), 0, 0, VAR_2));
 FUNC_3(VAR_16, 0x01400200);

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_8), 0, 0, VAR_2));
 FUNC_3(VAR_16, 0x2);

 FUNC_3(VAR_16,
  FUNC_1(FUNC_2(VAR_5, 0, VAR_9), 0, VAR_1, VAR_4));
 FUNC_3(VAR_16, 0x2);
}
