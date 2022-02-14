
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int gpu_addr; int max_handles; scalar_t__ cpu_addr; } ;
struct radeon_device {TYPE_2__ uvd; TYPE_1__* uvd_fw; } ;
struct TYPE_3__ {int size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct radeon_device*) ;

int FUNC_3(struct radeon_device *VAR_12)
{
 uint64_t VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_12);
 if (VAR_15)
  return VAR_15;


 VAR_13 = (VAR_12->uvd.gpu_addr >> 3) + 16;
 VAR_14 = FUNC_0(VAR_12->uvd_fw->size) >> 3;
 FUNC_1(VAR_6, VAR_13);
 FUNC_1(VAR_9, VAR_14);

 VAR_13 += VAR_14;
 VAR_14 = VAR_0 >> 3;
 FUNC_1(VAR_7, VAR_13);
 FUNC_1(VAR_10, VAR_14);

 VAR_13 += VAR_14;
 VAR_14 = (VAR_2 +
        (VAR_1 * VAR_12->uvd.max_handles)) >> 3;
 FUNC_1(VAR_8, VAR_13);
 FUNC_1(VAR_11, VAR_14);


 VAR_13 = (VAR_12->uvd.gpu_addr >> 28) & 0xF;
 FUNC_1(VAR_4, (VAR_13 << 12) | (VAR_13 << 0));


 VAR_13 = (VAR_12->uvd.gpu_addr >> 32) & 0xFF;
 FUNC_1(VAR_5, VAR_13 | (0x9 << 16) | (0x1 << 31));

 FUNC_1(VAR_3, *((uint32_t*)VAR_12->uvd.cpu_addr));

 return 0;
}
