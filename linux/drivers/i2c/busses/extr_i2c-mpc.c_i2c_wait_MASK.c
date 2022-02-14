
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpc_i2c {int interrupt; int dev; int queue; scalar_t__ base; int irq; } ;


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
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (unsigned long,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int,unsigned int) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (struct mpc_i2c*,int ) ;

__attribute__((used)) static int FUNC_8(struct mpc_i2c *VAR_11, unsigned VAR_12, int VAR_13)
{
 unsigned long VAR_14 = VAR_10;
 u32 VAR_15;
 int VAR_16 = 0;

 if (!VAR_11->irq) {
  while (!(FUNC_1(VAR_11->base + VAR_9) & VAR_3)) {
   FUNC_2();
   if (FUNC_3(VAR_10, VAR_14 + VAR_12)) {
    FUNC_0(VAR_11->dev, "timeout\n");
    FUNC_7(VAR_11, 0);
    VAR_16 = -VAR_8;
    break;
   }
  }
  VAR_15 = FUNC_1(VAR_11->base + VAR_9);
  FUNC_6(0, VAR_11->base + VAR_9);
 } else {

  VAR_16 = FUNC_5(VAR_11->queue,
   (VAR_11->interrupt & VAR_3), VAR_12);

  if (FUNC_4(!(VAR_11->interrupt & VAR_3))) {
   FUNC_0(VAR_11->dev, "wait timeout\n");
   FUNC_7(VAR_11, 0);
   VAR_16 = -VAR_8;
  }

  VAR_15 = VAR_11->interrupt;
  VAR_11->interrupt = 0;
 }

 if (VAR_16 < 0)
  return VAR_16;

 if (!(VAR_15 & VAR_2)) {
  FUNC_0(VAR_11->dev, "unfinished\n");
  return -VAR_6;
 }

 if (VAR_15 & VAR_1) {
  FUNC_0(VAR_11->dev, "MAL\n");
  return -VAR_5;
 }

 if (VAR_13 && (VAR_15 & VAR_4)) {
  FUNC_0(VAR_11->dev, "No RXAK\n");

  FUNC_7(VAR_11, VAR_0);
  return -VAR_7;
 }
 return 0;
}
