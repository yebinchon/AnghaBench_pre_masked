
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_18)
{
 struct amdgpu_ih_ring *VAR_19 = &VAR_18->irq.ih;
 int VAR_20;
 u32 VAR_21, VAR_22, VAR_23;


 FUNC_2(VAR_18);


 FUNC_1(VAR_17, VAR_18->dummy_page_addr >> 8);
 VAR_21 = FUNC_0(VAR_16);



 VAR_21 &= ~VAR_7;

 VAR_21 &= ~VAR_8;
 FUNC_1(VAR_16, VAR_21);

 FUNC_1(VAR_10, VAR_18->irq.ih.gpu_addr >> 8);
 VAR_20 = FUNC_5(VAR_18->irq.ih.ring_size / 4);

 VAR_23 = (VAR_5 |
        VAR_4 |
        (VAR_20 << 1));

 VAR_23 |= VAR_6;


 FUNC_1(VAR_15, FUNC_4(VAR_19->wptr_addr));
 FUNC_1(VAR_14, FUNC_7(VAR_19->wptr_addr) & 0xFF);

 FUNC_1(VAR_11, VAR_23);


 FUNC_1(VAR_12, 0);
 FUNC_1(VAR_13, 0);


 VAR_22 = (0x10 << VAR_1) |
  (0x10 << VAR_2) |
  (0 << VAR_0);

 if (VAR_18->irq.msi_enabled)
  VAR_22 |= VAR_3;
 FUNC_1(VAR_9, VAR_22);

 FUNC_6(VAR_18->pdev);


 FUNC_3(VAR_18);

 return 0;
}
