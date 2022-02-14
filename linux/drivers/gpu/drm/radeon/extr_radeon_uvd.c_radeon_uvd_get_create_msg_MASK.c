
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct radeon_fence {int dummy; } ;
struct TYPE_2__ {int* cpu_addr; int gpu_addr; int vcpu_bo; } ;
struct radeon_device {TYPE_1__ uvd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct radeon_device*,int,int,struct radeon_fence**) ;

int FUNC_5(struct radeon_device *VAR_1, int VAR_2,
         uint32_t VAR_3, struct radeon_fence **VAR_4)
{

 uint64_t VAR_5 = FUNC_2(VAR_1->uvd.vcpu_bo) -
  VAR_0;

 uint32_t *VAR_6 = VAR_1->uvd.cpu_addr + VAR_5;
 uint64_t VAR_7 = VAR_1->uvd.gpu_addr + VAR_5;

 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_1->uvd.vcpu_bo, 1);
 if (VAR_8)
  return VAR_8;


 VAR_6[0] = FUNC_0(0x00000de4);
 VAR_6[1] = FUNC_0(0x00000000);
 VAR_6[2] = FUNC_0(VAR_3);
 VAR_6[3] = FUNC_0(0x00000000);
 VAR_6[4] = FUNC_0(0x00000000);
 VAR_6[5] = FUNC_0(0x00000000);
 VAR_6[6] = FUNC_0(0x00000000);
 VAR_6[7] = FUNC_0(0x00000780);
 VAR_6[8] = FUNC_0(0x00000440);
 VAR_6[9] = FUNC_0(0x00000000);
 VAR_6[10] = FUNC_0(0x01b37000);
 for (VAR_9 = 11; VAR_9 < 1024; ++VAR_9)
  VAR_6[VAR_9] = FUNC_0(0x0);

 VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_7, VAR_4);
 FUNC_3(VAR_1->uvd.vcpu_bo);
 return VAR_8;
}
