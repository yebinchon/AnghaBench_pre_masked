
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int gpu_addr; scalar_t__ enabled; } ;
struct TYPE_3__ {int gpu_addr; int ring_size; } ;
struct radeon_device {scalar_t__ family; int pdev; scalar_t__ msi_enabled; TYPE_2__ wb; TYPE_1__ ih; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct radeon_device*) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (struct radeon_device*) ;
 int FUNC_10 (struct radeon_device*) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (struct radeon_device*) ;
 int FUNC_14 (int) ;

int FUNC_15(struct radeon_device *VAR_17)
{
 int VAR_18 = 0;
 int VAR_19;
 u32 VAR_20, VAR_21, VAR_22;


 VAR_18 = FUNC_11(VAR_17);
 if (VAR_18)
  return VAR_18;


 FUNC_9(VAR_17);


 if (VAR_17->family >= VAR_0)
  VAR_18 = FUNC_5(VAR_17);
 else
  VAR_18 = FUNC_13(VAR_17);
 if (VAR_18) {
  FUNC_12(VAR_17);
  return VAR_18;
 }



 FUNC_3(VAR_14, VAR_17->ih.gpu_addr >> 8);
 VAR_20 = FUNC_2(VAR_13);



 VAR_20 &= ~VAR_2;

 VAR_20 &= ~VAR_9;
 FUNC_3(VAR_13, VAR_20);

 FUNC_3(VAR_3, VAR_17->ih.gpu_addr >> 8);
 VAR_19 = FUNC_6(VAR_17->ih.ring_size / 4);

 VAR_22 = (VAR_11 |
        VAR_10 |
        (VAR_19 << 1));

 if (VAR_17->wb.enabled)
  VAR_22 |= VAR_12;


 FUNC_3(VAR_8, (VAR_17->wb.gpu_addr + VAR_15) & 0xFFFFFFFC);
 FUNC_3(VAR_7, FUNC_14(VAR_17->wb.gpu_addr + VAR_15) & 0xFF);

 FUNC_3(VAR_4, VAR_22);


 FUNC_3(VAR_5, 0);
 FUNC_3(VAR_6, 0);


 VAR_21 = FUNC_0(0x10) | FUNC_1(0x10);

 if (VAR_17->msi_enabled)
  VAR_21 |= VAR_16;
 FUNC_3(VAR_1, VAR_21);


 if (VAR_17->family >= VAR_0)
  FUNC_4(VAR_17);
 else
  FUNC_8(VAR_17);


 FUNC_7(VAR_17->pdev);


 FUNC_10(VAR_17);

 return VAR_18;
}
