
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pci_pbm_info {scalar_t__ chip_type; int chip_version; scalar_t__ pbm_regs; TYPE_2__* op; } ;
struct TYPE_3__ {int of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_pbm_info *VAR_19)
{
 u64 VAR_20;

 FUNC_2(5, VAR_19->pbm_regs + VAR_12);

 VAR_20 = FUNC_1(VAR_19->pbm_regs + VAR_10);


 VAR_20 |= 0xff;

 if (VAR_19->chip_type == VAR_0 &&
     VAR_19->chip_version >= 0x2)
  VAR_20 |= 0x3UL << VAR_4;

 if (!FUNC_0(VAR_19->op->dev.of_node, "no-bus-parking", ((void*)0)))
  VAR_20 |= VAR_3;
 else
  VAR_20 &= ~VAR_3;

 if (VAR_19->chip_type == VAR_0 &&
     VAR_19->chip_version <= 0x1)
  VAR_20 |= VAR_1;
 else
  VAR_20 &= ~VAR_1;

 if (VAR_19->chip_type == VAR_0)
  VAR_20 |= (VAR_2 |
   VAR_6 |
   VAR_5);

 FUNC_2(VAR_20, VAR_19->pbm_regs + VAR_10);

 VAR_20 = FUNC_1(VAR_19->pbm_regs + VAR_11);
 VAR_20 &= ~(VAR_9 |
   VAR_8 |
   VAR_7);
 FUNC_2(VAR_20, VAR_19->pbm_regs + VAR_11);

 if (VAR_19->chip_type == VAR_0) {



  VAR_20 = (VAR_13 |
         (1 << VAR_14) |
         VAR_16 |
         VAR_17 |
         VAR_15);

  FUNC_2(VAR_20, VAR_19->pbm_regs + VAR_18);
 }
}
