
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct radeon_device {int flags; TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ max_bus_speed; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_22 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_23 ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27, VAR_28;
 u16 VAR_29;

 if (VAR_23 == 0)
  return;

 if (VAR_24->flags & VAR_20)
  return;

 if (!(VAR_24->flags & VAR_21))
  return;


 if (FUNC_0(VAR_24))
  return;

 if ((VAR_24->pdev->bus->max_bus_speed != VAR_18) &&
  (VAR_24->pdev->bus->max_bus_speed != VAR_19))
  return;

 FUNC_1("enabling PCIE gen 2 link speeds, disable with radeon.pcie_gen2=0\n");


 VAR_25 = FUNC_4(VAR_16);
 VAR_25 &= ~VAR_12;
 FUNC_7(VAR_16, VAR_25);
 VAR_25 = FUNC_4(VAR_16);
 if (VAR_25 & VAR_10) {
  VAR_26 = (VAR_25 & VAR_3) >> VAR_4;
  VAR_25 &= ~(VAR_2 |
         VAR_7);
  VAR_25 |= VAR_26 | VAR_8 |
   VAR_9 | VAR_13;
  FUNC_7(VAR_16, VAR_25);
 } else {
  VAR_25 |= VAR_12;
  FUNC_7(VAR_16, VAR_25);
 }

 VAR_27 = FUNC_4(VAR_17);
 if ((VAR_27 & VAR_5) &&
     (VAR_27 & VAR_6)) {

  VAR_28 = FUNC_3(0x541c);
  FUNC_6(0x541c, VAR_28 | 0x8);
  FUNC_6(VAR_14, VAR_15);
  VAR_29 = FUNC_2(0x4088);
  VAR_29 &= ~VAR_22;
  VAR_29 |= 0x2;
  FUNC_5(0x4088, VAR_29);
  FUNC_6(VAR_14, 0);

  VAR_27 = FUNC_4(VAR_17);
  VAR_27 &= ~VAR_11;
  FUNC_7(VAR_17, VAR_27);

  VAR_27 = FUNC_4(VAR_17);
  VAR_27 |= VAR_0;
  FUNC_7(VAR_17, VAR_27);

  VAR_27 = FUNC_4(VAR_17);
  VAR_27 &= ~VAR_0;
  FUNC_7(VAR_17, VAR_27);

  VAR_27 = FUNC_4(VAR_17);
  VAR_27 |= VAR_1;
  FUNC_7(VAR_17, VAR_27);

 } else {
  VAR_25 = FUNC_4(VAR_16);

  if (1)
   VAR_25 |= VAR_12;
  else
   VAR_25 &= ~VAR_12;
  FUNC_7(VAR_16, VAR_25);
 }
}
