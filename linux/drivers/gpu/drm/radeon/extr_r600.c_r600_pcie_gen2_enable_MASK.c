
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct radeon_device {int flags; scalar_t__ family; TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {scalar_t__ max_bus_speed; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
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
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ VAR_34 ;

__attribute__((used)) static void FUNC_8(struct radeon_device *VAR_35)
{
 u32 VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 u16 VAR_41;

 if (VAR_34 == 0)
  return;

 if (VAR_35->flags & VAR_30)
  return;

 if (!(VAR_35->flags & VAR_31))
  return;


 if (FUNC_0(VAR_35))
  return;


 if (VAR_35->family <= VAR_0)
  return;

 if ((VAR_35->pdev->bus->max_bus_speed != VAR_28) &&
  (VAR_35->pdev->bus->max_bus_speed != VAR_29))
  return;

 VAR_38 = FUNC_4(VAR_26);
 if (VAR_38 & VAR_4) {
  FUNC_1("PCIE gen 2 link speeds already enabled\n");
  return;
 }

 FUNC_1("enabling PCIE gen 2 link speeds, disable with radeon.pcie_gen2=0\n");


 if ((VAR_35->family == VAR_3) ||
     (VAR_35->family == VAR_1) ||
     (VAR_35->family == VAR_2)) {

  VAR_36 = FUNC_4(VAR_25);
  VAR_36 &= ~VAR_21;
  FUNC_7(VAR_25, VAR_36);
  VAR_36 = FUNC_4(VAR_25);
  if (VAR_36 & VAR_17) {
   VAR_37 = (VAR_36 & VAR_9) >> VAR_10;
   VAR_36 &= ~(VAR_8 |
          VAR_14);
   VAR_36 |= VAR_37 | VAR_15 | VAR_16;
   FUNC_7(VAR_25, VAR_36);
  } else {
   VAR_36 |= VAR_21;
   FUNC_7(VAR_25, VAR_36);
  }
 }

 VAR_38 = FUNC_4(VAR_26);
 if ((VAR_38 & VAR_11) &&
     (VAR_38 & VAR_12)) {


  if ((VAR_35->family == VAR_3) ||
      (VAR_35->family == VAR_1) ||
      (VAR_35->family == VAR_2)) {
   FUNC_6(VAR_23, 0x8);
   VAR_41 = FUNC_3(0x4088);
   FUNC_6(VAR_23, 0);

   if (VAR_41 & VAR_32)
    return;
  }

  VAR_38 &= ~VAR_18;
  VAR_38 |= (0x3 << VAR_19);
  VAR_38 &= ~VAR_22;
  VAR_38 &= ~VAR_5;
  VAR_38 |= VAR_6;
  FUNC_7(VAR_26, VAR_38);

  VAR_40 = FUNC_3(0x541c);
  FUNC_6(0x541c, VAR_40 | 0x8);
  FUNC_6(VAR_23, VAR_24);
  VAR_41 = FUNC_2(0x4088);
  VAR_41 &= ~VAR_33;
  VAR_41 |= 0x2;
  FUNC_5(0x4088, VAR_41);
  FUNC_6(VAR_23, 0);

  if ((VAR_35->family == VAR_3) ||
      (VAR_35->family == VAR_1) ||
      (VAR_35->family == VAR_2)) {
   VAR_39 = FUNC_4(VAR_27);
   VAR_39 &= ~VAR_13;
   FUNC_7(VAR_27, VAR_39);
  } else {
   VAR_38 = FUNC_4(VAR_26);
   VAR_38 &= ~VAR_20;
   FUNC_7(VAR_26, VAR_38);
  }

  VAR_38 = FUNC_4(VAR_26);
  VAR_38 |= VAR_7;
  FUNC_7(VAR_26, VAR_38);

 } else {
  VAR_36 = FUNC_4(VAR_25);

  if (1)
   VAR_36 |= VAR_21;
  else
   VAR_36 &= ~VAR_21;
  FUNC_7(VAR_25, VAR_36);
 }
}
