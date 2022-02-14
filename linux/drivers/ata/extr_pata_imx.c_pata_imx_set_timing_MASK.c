
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pata_imx_priv {scalar_t__ host_regs; int clk; } ;
struct ata_timing {int setup; int act8b; } ;
struct ata_device {scalar_t__ pio_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct ata_device*,scalar_t__,struct ata_timing*,int,int ) ;
 unsigned long FUNC_1 (int ) ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ata_device *VAR_14,
    struct pata_imx_priv *VAR_15)
{
 struct ata_timing VAR_16;
 unsigned long VAR_17;
 u32 VAR_18, VAR_19;

 VAR_17 = FUNC_1(VAR_15->clk);

 if (VAR_14->pio_mode < VAR_9 || VAR_14->pio_mode > VAR_10 ||
     !VAR_17)
  return;

 VAR_18 = 1000000000 / VAR_17;
 FUNC_0(VAR_14, VAR_14->pio_mode, &VAR_16, VAR_18 * 1000, 0);

 VAR_19 = VAR_14->pio_mode - VAR_9;

 FUNC_2(3, VAR_15->host_regs + VAR_6);
 FUNC_2(3, VAR_15->host_regs + VAR_7);
 FUNC_2(VAR_16.setup, VAR_15->host_regs + VAR_0);
 FUNC_2(VAR_16.act8b, VAR_15->host_regs + VAR_2);
 FUNC_2(VAR_16.act8b, VAR_15->host_regs + VAR_1);
 FUNC_2(1, VAR_15->host_regs + VAR_8);

 FUNC_2(VAR_11[VAR_19] / VAR_18 + 1, VAR_15->host_regs + VAR_3);
 FUNC_2(VAR_12[VAR_19] / VAR_18 + 1, VAR_15->host_regs + VAR_4);
 FUNC_2(VAR_13[VAR_19] / VAR_18 + 1, VAR_15->host_regs + VAR_5);
}
