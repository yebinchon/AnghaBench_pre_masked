
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int flags; int addr; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct img_i2c {int line_status; scalar_t__ mode; int int_enable; int lock; int last_msg; TYPE_3__ msg; TYPE_2__ adap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_8 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (int ,char*,char*,int ) ;
 unsigned int FUNC_3 (struct img_i2c*,int,int) ;
 unsigned int FUNC_4 (struct img_i2c*,int,int) ;
 int FUNC_5 (struct img_i2c*,int) ;
 unsigned int FUNC_6 (struct img_i2c*,int,int) ;
 int FUNC_7 (struct img_i2c*,int ) ;
 unsigned int FUNC_8 (struct img_i2c*,int) ;
 int FUNC_9 (struct img_i2c*,scalar_t__) ;
 int FUNC_10 (struct img_i2c*) ;
 int FUNC_11 (struct img_i2c*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_27, void *VAR_28)
{
 struct img_i2c *VAR_29 = (struct img_i2c *)VAR_28;
 u32 VAR_30, VAR_31;

 unsigned int VAR_32;


 VAR_30 = FUNC_7(VAR_29, VAR_25);

 FUNC_11(VAR_29, VAR_23, VAR_30);





 VAR_31 = FUNC_7(VAR_29, VAR_26);
 if (VAR_31 & VAR_14) {
  FUNC_11(VAR_29, VAR_22,
         (VAR_31 & VAR_14)
    >> VAR_12);
  FUNC_10(VAR_29);
 }

 FUNC_12(&VAR_29->lock);


 VAR_29->line_status &= ~VAR_13;
 VAR_29->line_status |= VAR_31;





 if ((VAR_30 & VAR_5) &&
     !(VAR_30 & (VAR_6 |
       VAR_2 |
       VAR_3))) {
  FUNC_2(VAR_29->adap.dev.parent,
    "fatal: clock low timeout occurred %s addr 0x%02x\n",
    (VAR_29->msg.flags & VAR_1) ? "reading" : "writing",
    VAR_29->msg.addr);
  VAR_32 = FUNC_1(VAR_0);
  goto out;
 }

 if (VAR_29->mode == VAR_16)
  VAR_32 = FUNC_3(VAR_29, VAR_30, VAR_31);
 else if (VAR_29->mode == VAR_17)
  VAR_32 = FUNC_4(VAR_29, VAR_30, VAR_31);
 else if (VAR_29->mode == VAR_20)
  VAR_32 = FUNC_8(VAR_29, VAR_30);
 else if (VAR_29->mode == VAR_21 && (VAR_30 & VAR_6) &&
    (VAR_31 & VAR_15))
  VAR_32 = FUNC_0(0);
 else if (VAR_29->mode == VAR_19)
  VAR_32 = FUNC_6(VAR_29, VAR_30, VAR_31);
 else
  VAR_32 = 0;


 FUNC_11(VAR_29, VAR_23, VAR_30 & VAR_4);

out:
 if (VAR_32 & VAR_11) {




  if (!VAR_29->last_msg || VAR_29->line_status & VAR_15)
   VAR_32 = FUNC_0(0);
  else
   FUNC_9(VAR_29, VAR_21);
 }


 if (VAR_32 & VAR_8) {
  int VAR_33 = -(VAR_32 & VAR_10);

  FUNC_5(VAR_29, VAR_33);
  if (VAR_32 & VAR_9)
   FUNC_9(VAR_29, VAR_18);
 }


 FUNC_11(VAR_29, VAR_24, VAR_29->int_enable);

 FUNC_13(&VAR_29->lock);

 return VAR_7;
}
