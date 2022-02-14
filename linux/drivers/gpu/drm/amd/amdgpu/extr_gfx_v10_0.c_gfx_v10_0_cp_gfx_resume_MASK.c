
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
struct TYPE_5__ {int num_gfx_rings; struct amdgpu_ring* gfx_ring; } ;
struct TYPE_4__ {int gpu_addr; } ;
struct amdgpu_device {TYPE_2__ gfx; int srbm_mutex; TYPE_1__ wb; } ;


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
 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_30)
{
 struct amdgpu_ring *VAR_31;
 u32 VAR_32;
 u32 VAR_33;
 u64 VAR_34, VAR_35, VAR_36;
 u32 VAR_37;


 FUNC_1(VAR_5, 0, VAR_27, 0);


 FUNC_1(VAR_5, 0, VAR_26, 0);


 FUNC_7(&VAR_30->srbm_mutex);
 FUNC_4(VAR_30, VAR_6);
 FUNC_8(&VAR_30->srbm_mutex);

 VAR_31 = &VAR_30->gfx.gfx_ring[0];
 VAR_33 = FUNC_9(VAR_31->ring_size / 8);
 VAR_32 = FUNC_0(0, VAR_1, VAR_9, VAR_33);
 VAR_32 = FUNC_0(VAR_32, VAR_1, VAR_8, VAR_33 - 2);



 FUNC_1(VAR_5, 0, VAR_12, VAR_32);


 VAR_31->wptr = 0;
 FUNC_1(VAR_5, 0, VAR_15, FUNC_5(VAR_31->wptr));
 FUNC_1(VAR_5, 0, VAR_16, FUNC_10(VAR_31->wptr));


 VAR_35 = VAR_30->wb.gpu_addr + (VAR_31->rptr_offs * 4);
 FUNC_1(VAR_5, 0, VAR_13, FUNC_5(VAR_35));
 FUNC_1(VAR_5, 0, VAR_14, FUNC_10(VAR_35) &
       VAR_4);

 VAR_36 = VAR_30->wb.gpu_addr + (VAR_31->wptr_offs * 4);
 FUNC_1(VAR_5, 0, VAR_29,
       FUNC_5(VAR_36));
 FUNC_1(VAR_5, 0, VAR_28,
       FUNC_10(VAR_36));

 FUNC_6(1);
 FUNC_1(VAR_5, 0, VAR_12, VAR_32);

 VAR_34 = VAR_31->gpu_addr >> 8;
 FUNC_1(VAR_5, 0, VAR_10, VAR_34);
 FUNC_1(VAR_5, 0, VAR_11, FUNC_10(VAR_34));

 FUNC_1(VAR_5, 0, VAR_25, 1);

 FUNC_2(VAR_30, VAR_31);


 FUNC_7(&VAR_30->srbm_mutex);
 FUNC_4(VAR_30, VAR_7);
 FUNC_8(&VAR_30->srbm_mutex);
 VAR_31 = &VAR_30->gfx.gfx_ring[1];
 VAR_33 = FUNC_9(VAR_31->ring_size / 8);
 VAR_32 = FUNC_0(0, VAR_2, VAR_9, VAR_33);
 VAR_32 = FUNC_0(VAR_32, VAR_2, VAR_8, VAR_33 - 2);
 FUNC_1(VAR_5, 0, VAR_20, VAR_32);

 VAR_31->wptr = 0;
 FUNC_1(VAR_5, 0, VAR_23, FUNC_5(VAR_31->wptr));
 FUNC_1(VAR_5, 0, VAR_24, FUNC_10(VAR_31->wptr));

 VAR_35 = VAR_30->wb.gpu_addr + (VAR_31->rptr_offs * 4);
 FUNC_1(VAR_5, 0, VAR_21, FUNC_5(VAR_35));
 FUNC_1(VAR_5, 0, VAR_22, FUNC_10(VAR_35) &
  VAR_3);
 VAR_36 = VAR_30->wb.gpu_addr + (VAR_31->wptr_offs * 4);
 FUNC_1(VAR_5, 0, VAR_29,
  FUNC_5(VAR_36));
 FUNC_1(VAR_5, 0, VAR_28,
  FUNC_10(VAR_36));

 FUNC_6(1);
 FUNC_1(VAR_5, 0, VAR_20, VAR_32);

 VAR_34 = VAR_31->gpu_addr >> 8;
 FUNC_1(VAR_5, 0, VAR_18, VAR_34);
 FUNC_1(VAR_5, 0, VAR_19, FUNC_10(VAR_34));
 FUNC_1(VAR_5, 0, VAR_17, 1);

 FUNC_2(VAR_30, VAR_31);


 FUNC_7(&VAR_30->srbm_mutex);
 FUNC_4(VAR_30, VAR_6);
 FUNC_8(&VAR_30->srbm_mutex);


 FUNC_3(VAR_30);

 for (VAR_37 = 0; VAR_37 < VAR_30->gfx.num_gfx_rings; VAR_37++) {
  VAR_31 = &VAR_30->gfx.gfx_ring[VAR_37];
  VAR_31->sched.ready = 1;
 }

 return 0;
}
