
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {int max_handles; TYPE_1__* inst; } ;
struct TYPE_6__ {int gb_addr_config; } ;
struct TYPE_7__ {TYPE_2__ config; } ;
struct amdgpu_device {TYPE_4__ uvd; TYPE_3__ gfx; } ;
struct TYPE_5__ {int gpu_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
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
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_16)
{
 uint64_t VAR_17;
 uint32_t VAR_18;


 FUNC_1(VAR_6,
   FUNC_2(VAR_16->uvd.inst->gpu_addr));
 FUNC_1(VAR_5,
   FUNC_3(VAR_16->uvd.inst->gpu_addr));

 VAR_17 = VAR_0;
 VAR_18 = FUNC_0(VAR_16);
 FUNC_1(VAR_10, VAR_17 >> 3);
 FUNC_1(VAR_13, VAR_18);

 VAR_17 += VAR_18;
 VAR_18 = VAR_1;
 FUNC_1(VAR_11, VAR_17 >> 3);
 FUNC_1(VAR_14, VAR_18);

 VAR_17 += VAR_18;
 VAR_18 = VAR_3 +
        (VAR_2 * VAR_16->uvd.max_handles);
 FUNC_1(VAR_12, VAR_17 >> 3);
 FUNC_1(VAR_15, VAR_18);

 FUNC_1(VAR_7, VAR_16->gfx.config.gb_addr_config);
 FUNC_1(VAR_9, VAR_16->gfx.config.gb_addr_config);
 FUNC_1(VAR_8, VAR_16->gfx.config.gb_addr_config);

 FUNC_1(VAR_4, VAR_16->uvd.max_handles);
}
