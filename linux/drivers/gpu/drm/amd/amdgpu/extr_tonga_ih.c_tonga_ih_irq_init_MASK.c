
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int gpu_addr; int ring_size; int doorbell_index; scalar_t__ use_doorbell; int wptr_addr; } ;
struct TYPE_2__ {struct amdgpu_ih_ring ih; scalar_t__ msi_enabled; } ;
struct amdgpu_device {int dummy_page_addr; int pdev; TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_21)
{
 u32 VAR_22, VAR_23, VAR_24;
 struct amdgpu_ih_ring *VAR_25 = &VAR_21->irq.ih;
 int VAR_26;


 FUNC_6(VAR_21);


 FUNC_2(VAR_20, VAR_21->dummy_page_addr >> 8);
 VAR_22 = FUNC_1(VAR_19);



 VAR_22 = FUNC_0(VAR_22, VAR_5, VAR_2, 0);

 VAR_22 = FUNC_0(VAR_22, VAR_5, VAR_4, 0);
 FUNC_2(VAR_19, VAR_22);


 FUNC_2(VAR_13, VAR_25->gpu_addr >> 8);

 VAR_26 = FUNC_4(VAR_21->irq.ih.ring_size / 4);
 VAR_23 = FUNC_0(0, VAR_3, VAR_10, 1);
 VAR_23 = FUNC_0(VAR_23, VAR_3, VAR_8, VAR_26);

 VAR_23 = FUNC_0(VAR_23, VAR_3, VAR_11, 1);
 VAR_23 = FUNC_0(VAR_23, VAR_3, VAR_6, 0);

 if (VAR_21->irq.msi_enabled)
  VAR_23 = FUNC_0(VAR_23, VAR_3, VAR_9, 1);

 FUNC_2(VAR_14, VAR_23);


 FUNC_2(VAR_18, FUNC_3(VAR_25->wptr_addr));
 FUNC_2(VAR_17, FUNC_8(VAR_25->wptr_addr) & 0xFF);


 FUNC_2(VAR_15, 0);
 FUNC_2(VAR_16, 0);

 VAR_24 = FUNC_1(VAR_12);
 if (VAR_21->irq.ih.use_doorbell) {
  VAR_24 = FUNC_0(VAR_24, VAR_1,
       VAR_7, VAR_21->irq.ih.doorbell_index);
  VAR_24 = FUNC_0(VAR_24, VAR_1,
       VAR_0, 1);
 } else {
  VAR_24 = FUNC_0(VAR_24, VAR_1,
       VAR_0, 0);
 }
 FUNC_2(VAR_12, VAR_24);

 FUNC_5(VAR_21->pdev);


 FUNC_7(VAR_21);

 return 0;
}
