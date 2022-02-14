
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {int ring_size; int wptr; int rptr_offs; int wptr_offs; int gpu_addr; TYPE_3__ sched; } ;
struct TYPE_5__ {int gpu_addr; } ;
struct TYPE_4__ {struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_2__ wb; TYPE_1__ gfx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_17)
{
 struct amdgpu_ring *VAR_18;
 u32 VAR_19;
 u32 VAR_20;
 u64 VAR_21, VAR_22, VAR_23;


 FUNC_1(VAR_14, 0);


 FUNC_1(VAR_13, 0);


 VAR_18 = &VAR_17->gfx.gfx_ring[0];
 VAR_20 = FUNC_7(VAR_18->ring_size / 8);
 VAR_19 = FUNC_0(0, VAR_1, VAR_6, VAR_20);
 VAR_19 = FUNC_0(VAR_19, VAR_1, VAR_5, VAR_20 - 2);
 VAR_19 = FUNC_0(VAR_19, VAR_1, VAR_4, 3);
 VAR_19 = FUNC_0(VAR_19, VAR_1, VAR_3, 1);



 FUNC_1(VAR_9, VAR_19);


 FUNC_1(VAR_9, VAR_19 | VAR_2);
 VAR_18->wptr = 0;
 FUNC_1(VAR_12, FUNC_5(VAR_18->wptr));


 VAR_22 = VAR_17->wb.gpu_addr + (VAR_18->rptr_offs * 4);
 FUNC_1(VAR_10, FUNC_5(VAR_22));
 FUNC_1(VAR_11, FUNC_8(VAR_22) & 0xFF);

 VAR_23 = VAR_17->wb.gpu_addr + (VAR_18->wptr_offs * 4);
 FUNC_1(VAR_16, FUNC_5(VAR_23));
 FUNC_1(VAR_15, FUNC_8(VAR_23));
 FUNC_6(1);
 FUNC_1(VAR_9, VAR_19);

 VAR_21 = VAR_18->gpu_addr >> 8;
 FUNC_1(VAR_7, VAR_21);
 FUNC_1(VAR_8, FUNC_8(VAR_21));

 FUNC_4(VAR_17, VAR_18);

 FUNC_2(VAR_18);
 FUNC_3(VAR_17);
 VAR_18->sched.ready = 1;

 return 0;
}
