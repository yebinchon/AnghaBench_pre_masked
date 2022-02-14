
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int gpu_addr; int doorbell_index; scalar_t__ use_doorbell; int wptr_addr; scalar_t__ use_bus_addr; } ;
struct TYPE_5__ {scalar_t__ load_type; } ;
struct TYPE_4__ {int msi_enabled; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {int pdev; TYPE_3__* nbio_funcs; TYPE_2__ firmware; TYPE_1__ irq; } ;
struct TYPE_6__ {int (* ih_doorbell_range ) (struct amdgpu_device*,scalar_t__,int) ;int (* ih_control ) (struct amdgpu_device*) ;} ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ) ;
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
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_ih_ring*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_device *VAR_24)
{
 struct amdgpu_ih_ring *VAR_25 = &VAR_24->irq.ih;
 int VAR_26 = 0;
 u32 VAR_27, VAR_28, VAR_29;
 u32 VAR_30;


 FUNC_4(VAR_24);

 VAR_24->nbio_funcs->ih_control(VAR_24);


 FUNC_2(VAR_11, 0, VAR_16, VAR_25->gpu_addr >> 8);
 FUNC_2(VAR_11, 0, VAR_17, (VAR_25->gpu_addr >> 40) & 0xff);

 VAR_27 = FUNC_1(VAR_11, 0, VAR_18);
 VAR_27 = FUNC_6(VAR_25, VAR_27);
 VAR_27 = FUNC_0(VAR_27, VAR_7, VAR_12,
       !!VAR_24->irq.msi_enabled);

 if (FUNC_10(VAR_24->firmware.load_type == VAR_0)) {
  if (VAR_25->use_bus_addr) {
   VAR_29 = FUNC_1(VAR_11, 0, VAR_13);
   VAR_29 = FUNC_0(VAR_29,
     VAR_4, VAR_9, 1);
   FUNC_2(VAR_11, 0, VAR_13, VAR_29);
  }
 }

 FUNC_2(VAR_11, 0, VAR_18, VAR_27);


 FUNC_2(VAR_11, 0, VAR_22,
       FUNC_3(VAR_25->wptr_addr));
 FUNC_2(VAR_11, 0, VAR_21,
       FUNC_11(VAR_25->wptr_addr) & 0xFFFF);


 FUNC_2(VAR_11, 0, VAR_19, 0);
 FUNC_2(VAR_11, 0, VAR_20, 0);

 VAR_28 = FUNC_1(VAR_11, 0, VAR_14);
 if (VAR_25->use_doorbell) {
  VAR_28 = FUNC_0(VAR_28,
       VAR_5, VAR_10,
       VAR_25->doorbell_index);
  VAR_28 = FUNC_0(VAR_28,
       VAR_5, VAR_2, 1);
 } else {
  VAR_28 = FUNC_0(VAR_28,
       VAR_5, VAR_2, 0);
 }
 FUNC_2(VAR_11, 0, VAR_14, VAR_28);

 VAR_24->nbio_funcs->ih_doorbell_range(VAR_24, VAR_25->use_doorbell,
         VAR_25->doorbell_index);

 VAR_30 = FUNC_1(VAR_11, 0, VAR_23);
 VAR_30 = FUNC_0(VAR_30, VAR_8,
       VAR_1, 1);
 FUNC_2(VAR_11, 0, VAR_23, VAR_30);

 VAR_30 = FUNC_1(VAR_11, 0, VAR_15);
 VAR_30 = FUNC_0(VAR_30, VAR_6, VAR_3, 1);
 FUNC_2(VAR_11, 0, VAR_15, VAR_30);

 FUNC_7(VAR_24->pdev);


 FUNC_5(VAR_24);

 return VAR_26;
}
