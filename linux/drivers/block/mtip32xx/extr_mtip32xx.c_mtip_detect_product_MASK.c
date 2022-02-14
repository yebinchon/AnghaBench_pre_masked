
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {int slot_groups; TYPE_1__* pdev; int product_type; scalar_t__ mmio; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct driver_data *VAR_6)
{
 u32 VAR_7;
 unsigned int VAR_8, VAR_9;
 VAR_7 = FUNC_2(VAR_6->mmio + VAR_0);

 VAR_6->product_type = VAR_5;
 VAR_6->slot_groups = 1;

 if (VAR_7 & 0x8) {
  VAR_6->product_type = VAR_4;
  VAR_8 = (VAR_7 & VAR_1) >> 8;
  VAR_9 = (VAR_7 & VAR_2) + 1;
  FUNC_0(&VAR_6->pdev->dev,
   "ASIC-FPGA design, HS rev 0x%x, "
   "%i slot groups [%i slots]\n",
    VAR_8,
    VAR_9,
    VAR_9 * 32);

  if (VAR_9 > VAR_3) {
   FUNC_1(&VAR_6->pdev->dev,
    "Warning: driver only supports "
    "%i slot groups.\n", VAR_3);
   VAR_9 = VAR_3;
  }
  VAR_6->slot_groups = VAR_9;
  return;
 }

 FUNC_1(&VAR_6->pdev->dev, "Unrecognized product id\n");
}
