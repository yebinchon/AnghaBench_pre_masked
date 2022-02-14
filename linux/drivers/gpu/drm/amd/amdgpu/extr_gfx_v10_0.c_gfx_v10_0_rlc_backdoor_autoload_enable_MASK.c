
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {int rlc_autoload_gpu_addr; } ;
struct TYPE_5__ {TYPE_1__ rlc; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;
struct TYPE_6__ {int offset; int size; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_12)
{
 uint32_t VAR_13, VAR_14, VAR_15;
 uint64_t VAR_16;

 FUNC_5(VAR_12);
 FUNC_4(VAR_12);
 FUNC_3(VAR_12);

 VAR_13 = VAR_11[VAR_1].offset;
 VAR_14 = VAR_11[VAR_1].size;
 VAR_16 = VAR_12->gfx.rlc.rlc_autoload_gpu_addr + VAR_13;

 FUNC_2(VAR_2, 0, VAR_7, FUNC_7(VAR_16));
 FUNC_2(VAR_2, 0, VAR_8, FUNC_6(VAR_16));
 FUNC_2(VAR_2, 0, VAR_9, VAR_14);

 VAR_15 = FUNC_1(VAR_2, 0, VAR_10);
 if (!(VAR_15 & (VAR_4 |
     VAR_5))) {
  FUNC_0("Neither COLD_BOOT_EXIT nor VDDGFX_EXIT is set\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_1(VAR_2, 0, VAR_6);
 if (VAR_15 & VAR_3) {
  FUNC_0("RLC ROM should halt itself\n");
  return -VAR_0;
 }

 return 0;
}
