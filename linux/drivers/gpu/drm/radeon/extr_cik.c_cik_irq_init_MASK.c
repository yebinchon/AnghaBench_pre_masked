
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int gpu_addr; scalar_t__ enabled; } ;
struct TYPE_3__ {int gpu_addr; int ring_size; } ;
struct radeon_device {int pdev; scalar_t__ msi_enabled; TYPE_2__ wb; TYPE_1__ ih; } ;


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
 int VAR_15 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*) ;
 int FUNC_6 (struct radeon_device*) ;
 int FUNC_7 (struct radeon_device*) ;
 int FUNC_8 (struct radeon_device*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct radeon_device*) ;
 int FUNC_12 (struct radeon_device*) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct radeon_device *VAR_16)
{
 int VAR_17 = 0;
 int VAR_18;
 u32 VAR_19, VAR_20, VAR_21;


 VAR_17 = FUNC_11(VAR_16);
 if (VAR_17)
  return VAR_17;


 FUNC_6(VAR_16);


 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17) {
  FUNC_12(VAR_16);
  return VAR_17;
 }



 FUNC_4(VAR_13, VAR_16->ih.gpu_addr >> 8);
 VAR_19 = FUNC_3(VAR_12);



 VAR_19 &= ~VAR_1;

 VAR_19 &= ~VAR_8;
 FUNC_4(VAR_12, VAR_19);

 FUNC_4(VAR_2, VAR_16->ih.gpu_addr >> 8);
 VAR_18 = FUNC_9(VAR_16->ih.ring_size / 4);

 VAR_21 = (VAR_10 |
        VAR_9 |
        (VAR_18 << 1));

 if (VAR_16->wb.enabled)
  VAR_21 |= VAR_11;


 FUNC_4(VAR_7, (VAR_16->wb.gpu_addr + VAR_14) & 0xFFFFFFFC);
 FUNC_4(VAR_6, FUNC_13(VAR_16->wb.gpu_addr + VAR_14) & 0xFF);

 FUNC_4(VAR_3, VAR_21);


 FUNC_4(VAR_4, 0);
 FUNC_4(VAR_5, 0);


 VAR_20 = FUNC_1(0x10) | FUNC_2(0x10) | FUNC_0(0);

 if (VAR_16->msi_enabled)
  VAR_20 |= VAR_15;
 FUNC_4(VAR_0, VAR_20);


 FUNC_5(VAR_16);

 FUNC_10(VAR_16->pdev);


 FUNC_7(VAR_16);

 return VAR_17;
}
