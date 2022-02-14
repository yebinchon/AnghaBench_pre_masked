
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int gpu_addr; int ring_size; int wptr_addr; } ;
struct TYPE_2__ {scalar_t__ msi_enabled; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {int dummy_page_addr; int pdev; TYPE_1__ irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ,int ,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_20)
{
 struct amdgpu_ih_ring *VAR_21 = &VAR_20->irq.ih;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;


 FUNC_3(VAR_20);


 FUNC_2(VAR_19, VAR_20->dummy_page_addr >> 8);
 VAR_22 = FUNC_1(VAR_18);



 VAR_22 = FUNC_0(VAR_22, VAR_4, VAR_1, 0);

 VAR_22 = FUNC_0(VAR_22, VAR_4, VAR_3, 0);
 FUNC_2(VAR_18, VAR_22);


 FUNC_2(VAR_12, VAR_20->irq.ih.gpu_addr >> 8);

 VAR_25 = FUNC_6(VAR_20->irq.ih.ring_size / 4);
 VAR_24 = FUNC_0(0, VAR_2, VAR_9, 1);
 VAR_24 = FUNC_0(VAR_24, VAR_2, VAR_8, 1);
 VAR_24 = FUNC_0(VAR_24, VAR_2, VAR_6, VAR_25);


 VAR_24 = FUNC_0(VAR_24, VAR_2, VAR_10, 1);


 FUNC_2(VAR_17, FUNC_5(VAR_21->wptr_addr));
 FUNC_2(VAR_16, FUNC_8(VAR_21->wptr_addr) & 0xFF);

 FUNC_2(VAR_13, VAR_24);


 FUNC_2(VAR_14, 0);
 FUNC_2(VAR_15, 0);


 VAR_23 = FUNC_1(VAR_11);
 VAR_23 = FUNC_0(VAR_23, VAR_0, VAR_5, 0);

 if (VAR_20->irq.msi_enabled)
  VAR_23 = FUNC_0(VAR_23, VAR_0, VAR_7, 1);
 FUNC_2(VAR_11, VAR_23);

 FUNC_7(VAR_20->pdev);


 FUNC_4(VAR_20);

 return 0;
}
