
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct axxia_i2c_dev {scalar_t__ msg_xfrd_r; scalar_t__ base; int msg_complete; int msg_err; TYPE_1__* msg_r; scalar_t__ last; TYPE_1__* msg; int dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ len; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (struct axxia_i2c_dev*) ;
 scalar_t__ FUNC_1 (struct axxia_i2c_dev*) ;
 int FUNC_2 (struct axxia_i2c_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int,int ,int,int,int,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct axxia_i2c_dev*,int) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_23, void *VAR_24)
{
 struct axxia_i2c_dev *VAR_25 = VAR_24;
 irqreturn_t VAR_26 = VAR_8;
 u32 VAR_27;

 VAR_27 = FUNC_8(VAR_25->base + VAR_4);

 if (VAR_27 & VAR_6)
  VAR_26 = FUNC_2(VAR_25);
 if (!(VAR_27 & VAR_5))
  return VAR_26;


 VAR_27 = FUNC_8(VAR_25->base + VAR_9);

 if (!VAR_25->msg) {
  FUNC_5(VAR_25->dev, "unexpected interrupt\n");
  goto out;
 }


 if (FUNC_7(VAR_25->msg_r) && (VAR_27 & VAR_15))
  FUNC_0(VAR_25);


 if (!FUNC_7(VAR_25->msg) && (VAR_27 & VAR_19)) {
  if (FUNC_1(VAR_25) == 0)
   FUNC_6(VAR_25, VAR_19);
 }

 if (FUNC_9(VAR_27 & VAR_13)) {

  FUNC_6(VAR_25, ~0);
  if (VAR_27 & VAR_12)
   VAR_25->msg_err = -VAR_0;
  else if (VAR_27 & VAR_14)
   VAR_25->msg_err = -VAR_2;
  else
   VAR_25->msg_err = -VAR_1;
  FUNC_4(VAR_25->dev, "error %#x, addr=%#x rx=%u/%u tx=%u/%u\n",
   VAR_27,
   VAR_25->msg->addr,
   FUNC_8(VAR_25->base + VAR_10),
   FUNC_8(VAR_25->base + VAR_11),
   FUNC_8(VAR_25->base + VAR_21),
   FUNC_8(VAR_25->base + VAR_22));
  FUNC_3(&VAR_25->msg_complete);
 } else if (VAR_27 & VAR_16) {

  FUNC_6(VAR_25, ~VAR_20);
  FUNC_3(&VAR_25->msg_complete);
 } else if (VAR_27 & (VAR_17 | VAR_18)) {

  int VAR_28 = VAR_25->last ? ~0 : ~VAR_20;

  FUNC_6(VAR_25, VAR_28);
  if (FUNC_7(VAR_25->msg_r) && VAR_25->msg_xfrd_r < VAR_25->msg_r->len)
   FUNC_0(VAR_25);
  FUNC_3(&VAR_25->msg_complete);
 } else if (VAR_27 & VAR_20) {

  VAR_25->msg_err = -VAR_3;
  FUNC_6(VAR_25, ~VAR_20);
  FUNC_3(&VAR_25->msg_complete);
 }

out:

 FUNC_10(VAR_5, VAR_25->base + VAR_4);

 return VAR_7;
}
