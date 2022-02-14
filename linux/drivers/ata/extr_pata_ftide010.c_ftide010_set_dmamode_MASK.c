
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ftide010 {int base; int dev; } ;
struct ata_port {struct ata_device* private_data; TYPE_1__* host; } ;
struct ata_device {int dma_mode; int devno; } ;
struct TYPE_2__ {struct ftide010* private_data; } ;


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
 int FUNC_0 (int ,char*,int,int) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int FUNC_1 (int) ;
 scalar_t__* VAR_14 ;
 scalar_t__* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ata_port *VAR_20, struct ata_device *VAR_21)
{
 struct ftide010 *VAR_22 = VAR_20->host->private_data;
 u8 VAR_23 = VAR_21->dma_mode;
 u8 VAR_24 = VAR_21->devno & 1;
 u8 VAR_25;
 u8 VAR_26;
 u8 VAR_27;
 u8 VAR_28;
 u8 VAR_29;


 if (!VAR_24) {
  VAR_25 = VAR_2;
  VAR_26 = VAR_1;
 } else {
  VAR_25 = VAR_4;
  VAR_26 = VAR_3;
 }

 VAR_27 = FUNC_1(VAR_22->base + VAR_0);
 VAR_27 &= ~VAR_25;
 VAR_27 &= ~VAR_26;

 if (VAR_23 & VAR_9) {
  VAR_29 = VAR_23 & ~VAR_9;
  FUNC_0(VAR_22->dev, "set UDMA mode %02x, index %d\n",
   VAR_23, VAR_29);

  VAR_27 |= VAR_25;
  if (VAR_15[VAR_29]) {
   VAR_27 |= VAR_26;
   VAR_28 = VAR_19[VAR_29] << 4 |
    VAR_18[VAR_29];
  } else {
   VAR_28 = VAR_17[VAR_29] << 4 |
    VAR_16[VAR_29];
  }


  if (VAR_29 >= 5)
   VAR_28 |= VAR_7;

  FUNC_0(VAR_22->dev, "UDMA write clkreg = %02x, timreg = %02x\n",
   VAR_27, VAR_28);

  FUNC_2(VAR_27, VAR_22->base + VAR_0);
  FUNC_2(VAR_28, VAR_22->base + VAR_6 + VAR_24);
 } else {
  VAR_29 = VAR_23 & ~VAR_8;
  FUNC_0(VAR_22->dev, "set MWDMA mode %02x, index %d\n",
   VAR_23, VAR_29);

  if (VAR_14[VAR_29]) {
   VAR_27 |= VAR_26;
   VAR_28 = VAR_12[VAR_29] << 4 |
    VAR_13[VAR_29];
  } else {
   VAR_28 = VAR_10[VAR_29] << 4 |
    VAR_11[VAR_29];
  }
  FUNC_0(VAR_22->dev,
   "MWDMA write clkreg = %02x, timreg = %02x\n",
   VAR_27, VAR_28);

  FUNC_2(VAR_27, VAR_22->base + VAR_0);
  FUNC_2(VAR_28, VAR_22->base + VAR_5);
 }






 VAR_20->private_data = VAR_21;

 return;
}
