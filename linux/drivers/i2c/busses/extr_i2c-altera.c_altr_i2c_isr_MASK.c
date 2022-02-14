
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct altr_i2c_dev {int isr_status; scalar_t__ msg_len; int dev; int msg_complete; scalar_t__ base; int msg_err; TYPE_1__* msg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct altr_i2c_dev*) ;
 int FUNC_1 (struct altr_i2c_dev*) ;
 int FUNC_2 (struct altr_i2c_dev*,int) ;
 int FUNC_3 (struct altr_i2c_dev*,int,int) ;
 int FUNC_4 (struct altr_i2c_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (scalar_t__,int,int,int,int ) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_13, void *VAR_14)
{
 int VAR_15;
 bool VAR_16, VAR_17 = 0;
 struct altr_i2c_dev *VAR_18 = VAR_14;
 u32 VAR_19 = VAR_18->isr_status;

 if (!VAR_18->msg) {
  FUNC_8(VAR_18->dev, "unexpected interrupt\n");
  FUNC_2(VAR_18, VAR_0);
  return VAR_12;
 }
 VAR_16 = (VAR_18->msg->flags & VAR_11) != 0;


 if (FUNC_10(VAR_19 & VAR_1)) {
  FUNC_2(VAR_18, VAR_1);
  VAR_18->msg_err = -VAR_9;
  VAR_17 = 1;
 } else if (FUNC_10(VAR_19 & VAR_2)) {
  FUNC_6(VAR_18->dev, "Could not get ACK\n");
  VAR_18->msg_err = -VAR_10;
  FUNC_2(VAR_18, VAR_2);
  FUNC_4(VAR_18);
  VAR_17 = 1;
 } else if (VAR_16 && FUNC_10(VAR_19 & VAR_3)) {

  FUNC_0(VAR_18);
  FUNC_2(VAR_18, VAR_4);
  FUNC_4(VAR_18);
  FUNC_7(VAR_18->dev, "RX FIFO Overflow\n");
  VAR_17 = 1;
 } else if (VAR_16 && (VAR_19 & VAR_4)) {

  FUNC_0(VAR_18);
  FUNC_2(VAR_18, VAR_4);
  if (!VAR_18->msg_len)
   VAR_17 = 1;
 } else if (!VAR_16 && (VAR_19 & VAR_5)) {

  FUNC_2(VAR_18, VAR_5);
  if (VAR_18->msg_len > 0)
   FUNC_1(VAR_18);
  else
   VAR_17 = 1;
 } else {
  FUNC_8(VAR_18->dev, "Unexpected interrupt: 0x%x\n", VAR_19);
  FUNC_2(VAR_18, VAR_0);
 }

 if (VAR_17) {

  VAR_15 = FUNC_9(VAR_18->base + VAR_6,
      VAR_19,
      !(VAR_19 & VAR_7),
      1, VAR_8);
  if (VAR_15)
   FUNC_7(VAR_18->dev, "message timeout\n");
  FUNC_3(VAR_18, VAR_0, 0);
  FUNC_2(VAR_18, VAR_0);
  FUNC_5(&VAR_18->msg_complete);
  FUNC_6(VAR_18->dev, "Message Complete\n");
 }

 return VAR_12;
}
