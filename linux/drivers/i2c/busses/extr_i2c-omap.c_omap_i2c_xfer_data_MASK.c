
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct omap_i2c_dev {int buf_len; int errata; int threshold; int dev; scalar_t__ fifo_size; scalar_t__ receiver; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct omap_i2c_dev*,int) ;
 int FUNC_4 (struct omap_i2c_dev*,int) ;
 int FUNC_5 (struct omap_i2c_dev*,int ) ;
 int FUNC_6 (struct omap_i2c_dev*,int,int) ;
 int FUNC_7 (struct omap_i2c_dev*,int,int) ;

__attribute__((used)) static int FUNC_8(struct omap_i2c_dev *VAR_14)
{
 u16 VAR_15;
 u16 VAR_16;
 int VAR_17 = 0, VAR_18 = 0;

 do {
  VAR_15 = FUNC_5(VAR_14, VAR_3);
  VAR_16 = FUNC_5(VAR_14, VAR_8);
  VAR_16 &= VAR_15;


  if (VAR_14->receiver)
   VAR_16 &= ~(VAR_11 | VAR_12);
  else
   VAR_16 &= ~(VAR_7 | VAR_10);

  if (!VAR_16) {

   VAR_17 = -VAR_0;
   break;
  }

  FUNC_0(VAR_14->dev, "IRQ (ISR = 0x%04x)\n", VAR_16);
  if (VAR_18++ == 100) {
   FUNC_2(VAR_14->dev, "Too much work in one IRQ\n");
   break;
  }

  if (VAR_16 & VAR_6) {
   VAR_17 |= VAR_6;
   FUNC_4(VAR_14, VAR_6);
  }

  if (VAR_16 & VAR_4) {
   FUNC_1(VAR_14->dev, "Arbitration lost\n");
   VAR_17 |= VAR_4;
   FUNC_4(VAR_14, VAR_4);
  }




  if (VAR_16 & VAR_5)
   FUNC_4(VAR_14, VAR_5);

  if (VAR_16 & (VAR_5 | VAR_6 |
     VAR_4)) {
   FUNC_4(VAR_14, (VAR_10 |
      VAR_7 |
      VAR_12 |
      VAR_11 |
      VAR_5));
   break;
  }

  if (VAR_16 & VAR_7) {
   u8 VAR_19 = 1;

   if (VAR_14->fifo_size)
    VAR_19 = VAR_14->buf_len;

   if (VAR_14->errata & VAR_1) {
    FUNC_3(VAR_14, VAR_16);
    VAR_19 = (FUNC_5(VAR_14,
     VAR_2) >> 8) & 0x3F;
   }

   FUNC_6(VAR_14, VAR_19, 1);
   FUNC_4(VAR_14, VAR_7);
   continue;
  }

  if (VAR_16 & VAR_10) {
   u8 VAR_20 = 1;

   if (VAR_14->threshold)
    VAR_20 = VAR_14->threshold;

   FUNC_6(VAR_14, VAR_20, 0);
   FUNC_4(VAR_14, VAR_10);
   continue;
  }

  if (VAR_16 & VAR_11) {
   u8 VAR_21 = 1;
   int VAR_22;

   if (VAR_14->fifo_size)
    VAR_21 = VAR_14->buf_len;

   VAR_22 = FUNC_7(VAR_14, VAR_21, 1);
   if (VAR_22 < 0)
    break;

   FUNC_4(VAR_14, VAR_11);
   continue;
  }

  if (VAR_16 & VAR_12) {
   u8 VAR_23 = 1;
   int VAR_24;

   if (VAR_14->threshold)
    VAR_23 = VAR_14->threshold;

   VAR_24 = FUNC_7(VAR_14, VAR_23, 0);
   if (VAR_24 < 0)
    break;

   FUNC_4(VAR_14, VAR_12);
   continue;
  }

  if (VAR_16 & VAR_9) {
   FUNC_1(VAR_14->dev, "Receive overrun\n");
   VAR_17 |= VAR_9;
   FUNC_4(VAR_14, VAR_9);
   break;
  }

  if (VAR_16 & VAR_13) {
   FUNC_1(VAR_14->dev, "Transmit underflow\n");
   VAR_17 |= VAR_13;
   FUNC_4(VAR_14, VAR_13);
   break;
  }
 } while (VAR_16);

 return VAR_17;
}
