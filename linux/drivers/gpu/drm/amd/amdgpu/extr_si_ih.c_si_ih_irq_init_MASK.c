
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_ih_ring {int gpu_addr; int ring_size; int wptr_addr; } ;
struct TYPE_2__ {scalar_t__ msi_enabled; struct amdgpu_ih_ring ih; } ;
struct amdgpu_device {int pdev; TYPE_1__ irq; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct amdgpu_device *VAR_15)
{
 struct amdgpu_ih_ring *VAR_16 = &VAR_15->irq.ih;
 int VAR_17;
 u32 VAR_18, VAR_19, VAR_20;

 FUNC_8(VAR_15);
 FUNC_4(VAR_13, VAR_15->irq.ih.gpu_addr >> 8);
 VAR_18 = FUNC_3(VAR_12);
 VAR_18 &= ~VAR_1;
 VAR_18 &= ~VAR_8;
 FUNC_4(VAR_12, VAR_18);

 FUNC_4(VAR_2, VAR_15->irq.ih.gpu_addr >> 8);
 VAR_17 = FUNC_6(VAR_15->irq.ih.ring_size / 4);

 VAR_20 = VAR_10 |
       VAR_9 |
       (VAR_17 << 1) |
       VAR_11;

 FUNC_4(VAR_7, FUNC_5(VAR_16->wptr_addr));
 FUNC_4(VAR_6, FUNC_10(VAR_16->wptr_addr) & 0xFF);
 FUNC_4(VAR_3, VAR_20);
 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_5, 0);

 VAR_19 = FUNC_1(0x10) | FUNC_2(0x10) | FUNC_0(0);
 if (VAR_15->irq.msi_enabled)
  VAR_19 |= VAR_14;
 FUNC_4(VAR_0, VAR_19);

 FUNC_7(VAR_15->pdev);
 FUNC_9(VAR_15);

 return 0;
}
