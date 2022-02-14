
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct tegra_ahci_priv {scalar_t__ sata_regs; TYPE_3__* soc; TYPE_1__* pdev; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* init ) (struct ahci_host_priv*) ;} ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ahci_host_priv*) ;
 int FUNC_3 (struct ahci_host_priv*) ;
 int FUNC_4 (struct ahci_host_priv*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct ahci_host_priv *VAR_58)
{
 struct tegra_ahci_priv *VAR_59 = VAR_58->plat_data;
 int VAR_60;
 u32 VAR_61;

 VAR_60 = FUNC_4(VAR_58);
 if (VAR_60) {
  FUNC_0(&VAR_59->pdev->dev,
   "failed to power on AHCI controller: %d\n", VAR_60);
  return VAR_60;
 }





 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_3);
 VAR_61 &= ~(VAR_6 | VAR_4);
 VAR_61 |= VAR_5 | VAR_4;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_3);


 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_0);
 VAR_61 |= VAR_2;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_0);


 VAR_61 = VAR_41;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_40);
 VAR_61 = VAR_43;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_42);
 VAR_61 = VAR_45;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_44);
 VAR_61 = VAR_47;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_46);



 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_55);
 VAR_61 |= VAR_56;
 VAR_61 &= ~VAR_57;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_55);

 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_48);
 VAR_61 &= ~(VAR_50 |
   VAR_52 |
   VAR_54);
 VAR_61 |= (VAR_49 |
  VAR_51 |
  VAR_53);
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_48);




 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_22);
 VAR_61 &= ~VAR_24;
 VAR_61 |= VAR_23;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_22);

 if (VAR_59->soc->ops && VAR_59->soc->ops->init)
  VAR_59->soc->ops->init(VAR_58);





 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_25);
 VAR_61 |= (VAR_27 | VAR_28 |
  VAR_26 | VAR_29);
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_25);
 VAR_61 = VAR_34;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_33);


 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_38);
 VAR_61 |= VAR_39;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_38);

 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_17);
 VAR_61 &=
     ~(VAR_19 |
       VAR_21);
 VAR_61 |= VAR_18 | VAR_20;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_17);

 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_38);
 VAR_61 &= ~VAR_39;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_38);


 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_10);
 VAR_61 |= (VAR_11 |
  VAR_13 |
  VAR_12 |
  VAR_14);
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_10);





 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_30);
 VAR_61 &= ~VAR_32;
 VAR_61 |= VAR_31;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_30);

 VAR_61 = VAR_16;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_15);

 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_9 + VAR_35);
 VAR_61 |= (VAR_36 |
  VAR_37);
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_9 + VAR_35);


 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_0);
 VAR_61 &= ~VAR_1;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_0);

 FUNC_3(VAR_58);



 VAR_61 = FUNC_1(VAR_59->sata_regs + VAR_7);
 VAR_61 |= VAR_8;
 FUNC_5(VAR_61, VAR_59->sata_regs + VAR_7);

 return 0;
}
