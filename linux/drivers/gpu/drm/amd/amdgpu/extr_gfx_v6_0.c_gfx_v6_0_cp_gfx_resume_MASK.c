
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct amdgpu_ring {int ring_size; int wptr; int rptr_offs; int gpu_addr; } ;
struct TYPE_4__ {scalar_t__ gpu_addr; } ;
struct TYPE_3__ {struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_2__ wb; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
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
 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_14)
{
 struct amdgpu_ring *VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 int VAR_18;
 u64 VAR_19;

 FUNC_0(VAR_11, 0x0);
 FUNC_0(VAR_10, 0x0);


 FUNC_0(VAR_9, 0);

 FUNC_0(VAR_3, 0);
 FUNC_0(VAR_12, 0);



 VAR_15 = &VAR_14->gfx.gfx_ring[0];
 VAR_17 = FUNC_5(VAR_15->ring_size / 8);
 VAR_16 = (FUNC_5(VAR_0/8) << 8) | VAR_17;




 FUNC_0(VAR_5, VAR_16);


 FUNC_0(VAR_5, VAR_16 | VAR_2);
 VAR_15->wptr = 0;
 FUNC_0(VAR_8, VAR_15->wptr);


 VAR_19 = VAR_14->wb.gpu_addr + (VAR_15->rptr_offs * 4);
 FUNC_0(VAR_6, FUNC_3(VAR_19));
 FUNC_0(VAR_7, FUNC_6(VAR_19) & 0xFF);

 FUNC_0(VAR_13, 0);

 FUNC_4(1);
 FUNC_0(VAR_5, VAR_16);

 FUNC_0(VAR_4, VAR_15->gpu_addr >> 8);


 FUNC_2(VAR_14);
 VAR_18 = FUNC_1(VAR_15);
 if (VAR_18)
  return VAR_18;

 return 0;
}
