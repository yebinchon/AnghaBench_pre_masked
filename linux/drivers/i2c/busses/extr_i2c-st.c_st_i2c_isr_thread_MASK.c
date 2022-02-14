
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct st_i2c_client {int addr; int count; int result; int xfered; } ;
struct st_i2c_dev {scalar_t__ base; int dev; int complete; struct st_i2c_client client; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct st_i2c_dev*) ;
 int FUNC_7 (struct st_i2c_dev*) ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_14, void *VAR_15)
{
 struct st_i2c_dev *VAR_16 = VAR_15;
 struct st_i2c_client *VAR_17 = &VAR_16->client;
 u32 VAR_18, VAR_19;
 int VAR_20;

 VAR_19 = FUNC_5(VAR_16->base + VAR_10);
 VAR_18 = FUNC_5(VAR_16->base + VAR_13);


 VAR_20 = FUNC_0(VAR_18 & VAR_19);
 if (VAR_20 < 0) {
  FUNC_2(VAR_16->dev, "spurious it (sta=0x%04x, ien=0x%04x)\n",
    VAR_18, VAR_19);
  return VAR_4;
 }

 switch (1 << VAR_20) {
 case 128:
  if (VAR_17->addr & VAR_2)
   FUNC_6(VAR_16);
  else
   FUNC_7(VAR_16);
  break;

 case 129:
 case 130:
  FUNC_9(0, VAR_16->base + VAR_10);
  FUNC_1(&VAR_16->complete);
  break;

 case 131:
  FUNC_9(VAR_6, VAR_16->base + VAR_5);


  if ((VAR_17->addr & VAR_2) && (VAR_17->count == 1) && (VAR_17->xfered)) {
   FUNC_6(VAR_16);
   break;
  }

  VAR_20 = VAR_12 | VAR_11;
  FUNC_9(VAR_20, VAR_16->base + VAR_10);

  FUNC_8(VAR_16->base + VAR_8, VAR_9);
  VAR_17->result = -VAR_1;
  break;

 case 132:
  FUNC_9(VAR_7, VAR_16->base + VAR_5);

  VAR_20 = VAR_12 | VAR_11;
  FUNC_9(VAR_20, VAR_16->base + VAR_10);

  FUNC_8(VAR_16->base + VAR_8, VAR_9);
  VAR_17->result = -VAR_0;
  break;

 default:
  FUNC_3(VAR_16->dev,
    "it %d unhandled (sta=0x%04x)\n", VAR_20, VAR_18);
 }






 FUNC_4(VAR_16->base + VAR_10);

 return VAR_3;
}
