
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synquacer_i2c {int state; int pclkrate; int dev; TYPE_1__* msg; int msg_idx; int msg_ptr; scalar_t__ base; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; unsigned char* buf; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct synquacer_i2c*) ;
 int FUNC_4 (struct synquacer_i2c*) ;
 int FUNC_5 (struct synquacer_i2c*) ;
 unsigned char FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct synquacer_i2c*,TYPE_1__*) ;
 int FUNC_8 (struct synquacer_i2c*,int ) ;
 int FUNC_9 (unsigned char,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_14, void *VAR_15)
{
 struct synquacer_i2c *VAR_16 = VAR_15;

 unsigned char VAR_17;
 unsigned char VAR_18, VAR_19;
 int VAR_20;

 VAR_19 = FUNC_6(VAR_16->base + VAR_11);
 VAR_18 = FUNC_6(VAR_16->base + VAR_12);
 FUNC_1(VAR_16->dev, "bsr:0x%02x, bcr:0x%02x\n", VAR_18, VAR_19);

 if (VAR_19 & VAR_5) {
  FUNC_2(VAR_16->dev, "bus error\n");
  FUNC_8(VAR_16, -VAR_0);
  goto out;
 }
 if ((VAR_18 & VAR_8) ||
     !(VAR_19 & VAR_7)) {
  FUNC_1(VAR_16->dev, "arbitration lost\n");
  FUNC_8(VAR_16, -VAR_0);
  goto out;
 }

 switch (VAR_16->state) {
 case 129:
  if (VAR_18 & VAR_10) {
   FUNC_1(VAR_16->dev, "ack was not received\n");
   FUNC_8(VAR_16, -VAR_0);
   goto out;
  }

  if (VAR_16->msg->flags & VAR_1)
   VAR_16->state = 130;
  else
   VAR_16->state = 128;

  if (FUNC_3(VAR_16) && VAR_16->msg->len == 0) {
   FUNC_8(VAR_16, 0);
   goto out;
  }

  if (VAR_16->state == 130)
   goto prepare_read;



 case 128:
  if (VAR_18 & VAR_10) {
   FUNC_1(VAR_16->dev, "WRITE: No Ack\n");
   FUNC_8(VAR_16, -VAR_0);
   goto out;
  }

  if (!FUNC_4(VAR_16)) {
   FUNC_9(VAR_16->msg->buf[VAR_16->msg_ptr++],
          VAR_16->base + VAR_13);


   FUNC_9(VAR_4 |
          VAR_7 |
          VAR_6,
          VAR_16->base + VAR_11);
   break;
  }
  if (FUNC_3(VAR_16)) {
   FUNC_8(VAR_16, 0);
   break;
  }
  FUNC_1(VAR_16->dev, "WRITE: Next Message\n");

  VAR_16->msg_ptr = 0;
  VAR_16->msg_idx++;
  VAR_16->msg++;


  VAR_20 = FUNC_7(VAR_16, VAR_16->msg);
  if (VAR_20 < 0) {
   FUNC_1(VAR_16->dev, "restart error (%d)\n", VAR_20);
   FUNC_8(VAR_16, -VAR_0);
   break;
  }
  VAR_16->state = 129;
  break;

 case 130:
  VAR_17 = FUNC_6(VAR_16->base + VAR_13);
  if (!(VAR_18 & VAR_9))
   VAR_16->msg->buf[VAR_16->msg_ptr++] = VAR_17;
  else
   FUNC_1(VAR_16->dev, "address:0x%02x. ignore it.\n", VAR_17);

prepare_read:
  if (FUNC_5(VAR_16)) {
   FUNC_9(VAR_7 |
          VAR_4 |
          VAR_6,
          VAR_16->base + VAR_11);
   break;
  }
  if (!FUNC_4(VAR_16)) {
   FUNC_9(VAR_7 |
          VAR_4 |
          VAR_6 |
          VAR_3,
          VAR_16->base + VAR_11);
   break;
  }
  if (FUNC_3(VAR_16)) {

   FUNC_1(VAR_16->dev, "READ: Send Stop\n");
   FUNC_8(VAR_16, 0);
   break;
  }
  FUNC_1(VAR_16->dev, "READ: Next Transfer\n");

  VAR_16->msg_ptr = 0;
  VAR_16->msg_idx++;
  VAR_16->msg++;

  VAR_20 = FUNC_7(VAR_16, VAR_16->msg);
  if (VAR_20 < 0) {
   FUNC_1(VAR_16->dev, "restart error (%d)\n", VAR_20);
   FUNC_8(VAR_16, -VAR_0);
  } else {
   VAR_16->state = 129;
  }
  break;
 default:
  FUNC_2(VAR_16->dev, "called in err STATE (%d)\n", VAR_16->state);
  break;
 }

out:
 FUNC_0(10, VAR_16->pclkrate);
 return VAR_2;
}
