
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_mobile_i2c_data {unsigned char sr; int pos; scalar_t__ dma_direction; int wait; TYPE_1__* msg; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; int len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int FUNC_0 (int ,char*,unsigned char,unsigned char,char*,int,int ) ;
 unsigned char FUNC_1 (struct sh_mobile_i2c_data*,int ) ;
 int FUNC_2 (struct sh_mobile_i2c_data*,int ,int ,int ) ;
 int FUNC_3 (struct sh_mobile_i2c_data*,int ,unsigned char) ;
 int FUNC_4 (struct sh_mobile_i2c_data*) ;
 int FUNC_5 (struct sh_mobile_i2c_data*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_12, void *VAR_13)
{
 struct sh_mobile_i2c_data *VAR_14 = VAR_13;
 unsigned char VAR_15;
 int VAR_16 = 0;

 VAR_15 = FUNC_1(VAR_14, VAR_6);
 VAR_14->sr |= VAR_15;

 FUNC_0(VAR_14->dev, "i2c_isr 0x%02x 0x%02x %s %d %d!\n", VAR_15, VAR_14->sr,
        (VAR_14->msg->flags & VAR_2) ? "read" : "write",
        VAR_14->pos, VAR_14->msg->len);


 if (VAR_14->dma_direction == VAR_1 && VAR_14->pos == 0)
  FUNC_2(VAR_14, VAR_3, VAR_5, 0);
 else if (VAR_15 & (VAR_7 | VAR_8))

  FUNC_3(VAR_14, VAR_6, VAR_15 & ~(VAR_7 | VAR_8));
 else if (VAR_14->msg->flags & VAR_2)
  VAR_16 = FUNC_4(VAR_14);
 else
  VAR_16 = FUNC_5(VAR_14);


 if (VAR_14->dma_direction == VAR_0 && VAR_14->pos == 1)
  FUNC_2(VAR_14, VAR_3, VAR_4, 0);

 if (VAR_15 & VAR_9)
  FUNC_3(VAR_14, VAR_6, VAR_15 & ~VAR_9);

 if (VAR_16) {
  VAR_14->sr |= VAR_11;
  FUNC_6(&VAR_14->wait);
 }


 FUNC_1(VAR_14, VAR_6);

 return VAR_10;
}
