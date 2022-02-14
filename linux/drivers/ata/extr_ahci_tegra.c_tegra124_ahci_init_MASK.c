
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tegra_ahci_priv {scalar_t__ sata_regs; } ;
struct sata_pad_calibration {size_t gen1_tx_amp; size_t gen1_tx_peak; size_t gen2_tx_amp; size_t gen2_tx_peak; } ;
struct ahci_host_priv {struct tegra_ahci_priv* plat_data; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_1 (scalar_t__) ;
 struct sata_pad_calibration* VAR_16 ;
 int FUNC_2 (int ,size_t*) ;
 int FUNC_3 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct ahci_host_priv *VAR_17)
{
 struct tegra_ahci_priv *VAR_18 = VAR_17->plat_data;
 struct sata_pad_calibration VAR_19;
 int VAR_20;
 u32 VAR_21;


 VAR_20 = FUNC_2(VAR_0, &VAR_21);
 if (VAR_20)
  return VAR_20;

 VAR_19 = VAR_16[VAR_21 & VAR_1];

 FUNC_3(FUNC_0(0), VAR_18->sata_regs + VAR_2 + VAR_15);

 VAR_21 = FUNC_1(VAR_18->sata_regs +
      VAR_2 + VAR_5);
 VAR_21 &= ~VAR_6;
 VAR_21 &= ~VAR_8;
 VAR_21 |= VAR_19.gen1_tx_amp << VAR_7;
 VAR_21 |= VAR_19.gen1_tx_peak << VAR_9;
 FUNC_3(VAR_21, VAR_18->sata_regs + VAR_2 +
        VAR_5);

 VAR_21 = FUNC_1(VAR_18->sata_regs +
      VAR_2 + VAR_10);
 VAR_21 &= ~VAR_11;
 VAR_21 &= ~VAR_12;
 VAR_21 |= VAR_19.gen2_tx_amp << VAR_7;
 VAR_21 |= VAR_19.gen2_tx_peak << VAR_9;
 FUNC_3(VAR_21, VAR_18->sata_regs + VAR_2 +
        VAR_10);

 FUNC_3(VAR_4,
        VAR_18->sata_regs + VAR_2 + VAR_3);
 FUNC_3(VAR_14,
        VAR_18->sata_regs + VAR_2 + VAR_13);

 FUNC_3(0, VAR_18->sata_regs + VAR_2 + VAR_15);

 return 0;
}
