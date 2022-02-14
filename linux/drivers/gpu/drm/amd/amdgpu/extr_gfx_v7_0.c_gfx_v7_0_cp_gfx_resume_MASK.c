
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct amdgpu_ring {int ring_size; int wptr; int rptr_offs; int gpu_addr; } ;
struct TYPE_4__ {int gpu_addr; } ;
struct TYPE_3__ {struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_2__ wb; TYPE_1__ gfx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
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
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_16)
{
 struct amdgpu_ring *VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 u64 VAR_20, VAR_21;
 int VAR_22;

 FUNC_0(VAR_13, 0x0);
 if (VAR_16->asic_type != VAR_1)
  FUNC_0(VAR_12, 0x0);


 FUNC_0(VAR_11, 0);


 FUNC_0(VAR_10, 0);

 FUNC_0(VAR_14, 0);



 VAR_17 = &VAR_16->gfx.gfx_ring[0];
 VAR_19 = FUNC_5(VAR_17->ring_size / 8);
 VAR_18 = (FUNC_5(VAR_0/8) << 8) | VAR_19;



 FUNC_0(VAR_6, VAR_18);


 FUNC_0(VAR_6, VAR_18 | VAR_3);
 VAR_17->wptr = 0;
 FUNC_0(VAR_9, FUNC_3(VAR_17->wptr));


 VAR_21 = VAR_16->wb.gpu_addr + (VAR_17->rptr_offs * 4);
 FUNC_0(VAR_7, FUNC_3(VAR_21));
 FUNC_0(VAR_8, FUNC_6(VAR_21) & 0xFF);


 FUNC_0(VAR_15, 0);

 FUNC_4(1);
 FUNC_0(VAR_6, VAR_18);

 VAR_20 = VAR_17->gpu_addr >> 8;
 FUNC_0(VAR_4, VAR_20);
 FUNC_0(VAR_5, FUNC_6(VAR_20));


 FUNC_2(VAR_16);
 VAR_22 = FUNC_1(VAR_17);
 if (VAR_22)
  return VAR_22;

 return 0;
}
