
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_8__ {int ready; } ;
struct amdgpu_ring {int rptr_offs; int gpu_addr; int use_doorbell; int doorbell_index; int wptr_offs; TYPE_4__ sched; scalar_t__ wptr; } ;
struct TYPE_7__ {scalar_t__ gpu_addr; } ;
struct TYPE_6__ {TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_3__ wb; TYPE_2__ sdma; } ;
struct TYPE_5__ {struct amdgpu_ring page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_6 ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (unsigned int,int ,int) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (scalar_t__) ;
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
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_ring*,int) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct amdgpu_device *VAR_28, unsigned int VAR_29)
{
 struct amdgpu_ring *VAR_30 = &VAR_28->sdma.instance[VAR_29].page;
 u32 VAR_31, VAR_32, VAR_33;
 u32 VAR_34;
 u32 VAR_35;
 u32 VAR_36;
 u64 VAR_37;

 VAR_34 = (VAR_30->rptr_offs * 4);

 VAR_31 = FUNC_1(VAR_29, VAR_18);
 VAR_31 = FUNC_6(VAR_30, VAR_31);
 FUNC_2(VAR_29, VAR_18, VAR_31);


 FUNC_2(VAR_29, VAR_19, 0);
 FUNC_2(VAR_29, VAR_22, 0);
 FUNC_2(VAR_29, VAR_23, 0);
 FUNC_2(VAR_29, VAR_24, 0);


 FUNC_2(VAR_29, VAR_20,
        FUNC_7(VAR_28->wb.gpu_addr + VAR_34) & 0xFFFFFFFF);
 FUNC_2(VAR_29, VAR_21,
        FUNC_4(VAR_28->wb.gpu_addr + VAR_34) & 0xFFFFFFFC);

 VAR_31 = FUNC_0(VAR_31, VAR_10,
    VAR_6, 1);

 FUNC_2(VAR_29, VAR_16, VAR_30->gpu_addr >> 8);
 FUNC_2(VAR_29, VAR_17, VAR_30->gpu_addr >> 40);

 VAR_30->wptr = 0;


 FUNC_2(VAR_29, VAR_15, 1);

 VAR_35 = FUNC_1(VAR_29, VAR_12);
 VAR_36 = FUNC_1(VAR_29, VAR_13);

 VAR_35 = FUNC_0(VAR_35, VAR_7, VAR_0,
     VAR_30->use_doorbell);
 VAR_36 = FUNC_0(VAR_36,
     VAR_8,
     VAR_4, VAR_30->doorbell_index);
 FUNC_2(VAR_29, VAR_12, VAR_35);
 FUNC_2(VAR_29, VAR_13, VAR_36);


 FUNC_5(VAR_30);


 FUNC_2(VAR_29, VAR_15, 0);


 VAR_37 = VAR_28->wb.gpu_addr + (VAR_30->wptr_offs * 4);
 FUNC_2(VAR_29, VAR_26,
      FUNC_4(VAR_37));
 FUNC_2(VAR_29, VAR_25,
      FUNC_7(VAR_37));
 VAR_33 = FUNC_1(VAR_29, VAR_27);
 VAR_33 = FUNC_0(VAR_33,
           VAR_11,
           VAR_1, FUNC_3(VAR_28)? 1 : 0);
 FUNC_2(VAR_29, VAR_27, VAR_33);


 VAR_31 = FUNC_0(VAR_31, VAR_10, VAR_5, 1);
 FUNC_2(VAR_29, VAR_18, VAR_31);

 VAR_32 = FUNC_1(VAR_29, VAR_14);
 VAR_32 = FUNC_0(VAR_32, VAR_9, VAR_2, 1);




 FUNC_2(VAR_29, VAR_14, VAR_32);

 VAR_30->sched.ready = 1;
}
