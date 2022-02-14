
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_13 ;

void FUNC_4(struct radeon_device *VAR_14)
{
 u32 VAR_15, VAR_16;

 if (VAR_13 == 0)
  return;

 if (VAR_14->flags & VAR_11)
  return;

 if (!(VAR_14->flags & VAR_12))
  return;


 if (FUNC_0(VAR_14))
  return;

 if ((VAR_14->pdev->bus->max_bus_speed != VAR_9) &&
  (VAR_14->pdev->bus->max_bus_speed != VAR_10))
  return;

 VAR_16 = FUNC_2(VAR_8);
 if (VAR_16 & VAR_1) {
  FUNC_1("PCIE gen 2 link speeds already enabled\n");
  return;
 }

 FUNC_1("enabling PCIE gen 2 link speeds, disable with radeon.pcie_gen2=0\n");

 if ((VAR_16 & VAR_3) ||
     (VAR_16 & VAR_4)) {

  VAR_15 = FUNC_2(VAR_7);
  VAR_15 &= ~VAR_6;
  FUNC_3(VAR_7, VAR_15);

  VAR_16 = FUNC_2(VAR_8);
  VAR_16 &= ~VAR_5;
  FUNC_3(VAR_8, VAR_16);

  VAR_16 = FUNC_2(VAR_8);
  VAR_16 |= VAR_0;
  FUNC_3(VAR_8, VAR_16);

  VAR_16 = FUNC_2(VAR_8);
  VAR_16 &= ~VAR_0;
  FUNC_3(VAR_8, VAR_16);

  VAR_16 = FUNC_2(VAR_8);
  VAR_16 |= VAR_2;
  FUNC_3(VAR_8, VAR_16);

 } else {
  VAR_15 = FUNC_2(VAR_7);

  if (1)
   VAR_15 |= VAR_6;
  else
   VAR_15 &= ~VAR_6;
  FUNC_3(VAR_7, VAR_15);
 }
}
