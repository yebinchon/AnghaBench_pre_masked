
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int gpu_addr; scalar_t__ ring_size; int wptr_addr; scalar_t__ use_bus_addr; } ;
struct TYPE_6__ {struct amdgpu_ih_ring ih2; struct amdgpu_ih_ring ih1; int msi_enabled; struct amdgpu_ih_ring ih; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct amdgpu_device {scalar_t__ asic_type; int pdev; int psp; TYPE_3__ irq; TYPE_2__ firmware; TYPE_1__* nbio_funcs; } ;
struct TYPE_4__ {int (* ih_control ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
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
 int VAR_16 ;
 int FUNC_1 (int,int ,int ,int) ;
 int VAR_17 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_18 ;
 int FUNC_3 (int ,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_ih_ring*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 int FUNC_13 (struct amdgpu_ih_ring*,int) ;

__attribute__((used)) static int FUNC_14(struct amdgpu_device *VAR_42)
{
 struct amdgpu_ih_ring *VAR_43;
 u32 VAR_44, VAR_45;
 int VAR_46 = 0;
 u32 VAR_47;


 FUNC_10(VAR_42);

 VAR_42->nbio_funcs->ih_control(VAR_42);

 VAR_43 = &VAR_42->irq.ih;

 FUNC_3(VAR_12, 0, VAR_24, VAR_43->gpu_addr >> 8);
 FUNC_3(VAR_12, 0, VAR_25, (VAR_43->gpu_addr >> 40) & 0xff);

 VAR_44 = FUNC_2(VAR_12, 0, VAR_30);
 VAR_45 = FUNC_2(VAR_12, 0, VAR_19);
 VAR_44 = FUNC_13(VAR_43, VAR_44);
 if (VAR_42->irq.ih.use_bus_addr) {
  VAR_45 = FUNC_1(VAR_45, VAR_6, VAR_11, 1);
 } else {
  VAR_45 = FUNC_1(VAR_45, VAR_6, VAR_10, 1);
 }
 VAR_44 = FUNC_1(VAR_44, VAR_8, VAR_17,
       !!VAR_42->irq.msi_enabled);

 if (FUNC_4(VAR_42)) {
  if (FUNC_7(&VAR_42->psp, VAR_13, VAR_44)) {
   FUNC_0("PSP program IH_RB_CNTL failed!\n");
   return -VAR_4;
  }
 } else {
  FUNC_3(VAR_12, 0, VAR_30, VAR_44);
 }

 if ((VAR_42->asic_type == VAR_1
  && VAR_42->firmware.load_type == VAR_0)
  || VAR_42->asic_type == VAR_2)
  FUNC_3(VAR_12, 0, VAR_19, VAR_45);


 FUNC_3(VAR_12, 0, VAR_38,
       FUNC_5(VAR_43->wptr_addr));
 FUNC_3(VAR_12, 0, VAR_37,
       FUNC_9(VAR_43->wptr_addr) & 0xFFFF);


 FUNC_3(VAR_12, 0, VAR_36, 0);
 FUNC_3(VAR_12, 0, VAR_33, 0);

 FUNC_3(VAR_12, 0, VAR_20,
       FUNC_11(VAR_43));

 VAR_43 = &VAR_42->irq.ih1;
 if (VAR_43->ring_size) {
  FUNC_3(VAR_12, 0, VAR_28, VAR_43->gpu_addr >> 8);
  FUNC_3(VAR_12, 0, VAR_26,
        (VAR_43->gpu_addr >> 40) & 0xff);

  VAR_44 = FUNC_2(VAR_12, 0, VAR_31);
  VAR_44 = FUNC_13(VAR_43, VAR_44);
  VAR_44 = FUNC_1(VAR_44, VAR_8,
        VAR_18, 0);
  VAR_44 = FUNC_1(VAR_44, VAR_8,
        VAR_16, 1);
  if (FUNC_4(VAR_42)) {
   if (FUNC_7(&VAR_42->psp, VAR_14,
      VAR_44)) {
    FUNC_0("program IH_RB_CNTL_RING1 failed!\n");
    return -VAR_4;
   }
  } else {
   FUNC_3(VAR_12, 0, VAR_31, VAR_44);
  }


  FUNC_3(VAR_12, 0, VAR_39, 0);
  FUNC_3(VAR_12, 0, VAR_34, 0);

  FUNC_3(VAR_12, 0, VAR_21,
        FUNC_11(VAR_43));
 }

 VAR_43 = &VAR_42->irq.ih2;
 if (VAR_43->ring_size) {
  FUNC_3(VAR_12, 0, VAR_29, VAR_43->gpu_addr >> 8);
  FUNC_3(VAR_12, 0, VAR_27,
        (VAR_43->gpu_addr >> 40) & 0xff);

  VAR_44 = FUNC_2(VAR_12, 0, VAR_32);
  VAR_44 = FUNC_13(VAR_43, VAR_44);

  if (FUNC_4(VAR_42)) {
   if (FUNC_7(&VAR_42->psp, VAR_15,
      VAR_44)) {
    FUNC_0("program IH_RB_CNTL_RING2 failed!\n");
    return -VAR_4;
   }
  } else {
   FUNC_3(VAR_12, 0, VAR_32, VAR_44);
  }


  FUNC_3(VAR_12, 0, VAR_40, 0);
  FUNC_3(VAR_12, 0, VAR_35, 0);

  FUNC_3(VAR_12, 0, VAR_22,
        FUNC_11(VAR_43));
 }

 VAR_47 = FUNC_2(VAR_12, 0, VAR_41);
 VAR_47 = FUNC_1(VAR_47, VAR_9,
       VAR_3, 1);
 FUNC_3(VAR_12, 0, VAR_41, VAR_47);

 VAR_47 = FUNC_2(VAR_12, 0, VAR_23);
 VAR_47 = FUNC_1(VAR_47, VAR_7, VAR_5, 1);
 FUNC_3(VAR_12, 0, VAR_23, VAR_47);

 FUNC_6(VAR_42->pdev);


 FUNC_12(VAR_42);

 return VAR_46;
}
