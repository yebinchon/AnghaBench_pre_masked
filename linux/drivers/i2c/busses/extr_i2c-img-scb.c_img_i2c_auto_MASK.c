
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ len; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct img_i2c {int last_msg; TYPE_3__ msg; int check_timer; int int_enable; int msg_status; TYPE_2__ adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct img_i2c*) ;
 int FUNC_3 (struct img_i2c*) ;
 int FUNC_4 (struct img_i2c*,int) ;
 int FUNC_5 (struct img_i2c*) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static unsigned int FUNC_8(struct img_i2c *VAR_13,
     unsigned int VAR_14,
     unsigned int VAR_15)
{
 if (VAR_14 & (VAR_8 | VAR_2))
  return FUNC_0(VAR_0);

 if (VAR_15 & VAR_10) {
  FUNC_1(VAR_13->adap.dev.parent, "abort condition detected\n");

  if ((VAR_13->msg.flags & VAR_1) &&
      (VAR_14 & VAR_4))
   FUNC_2(VAR_13);

  VAR_13->msg_status = -VAR_0;
  FUNC_3(VAR_13);
  return 0;
 }


 if (!VAR_13->last_msg && VAR_15 & VAR_11) {
  FUNC_4(VAR_13, !VAR_13->last_msg);

  VAR_13->int_enable &= ~VAR_6;
 }

 FUNC_6(&VAR_13->check_timer, VAR_12 + FUNC_7(1));

 if (VAR_14 & VAR_7) {

  if (VAR_13->msg.flags & VAR_1)
   FUNC_2(VAR_13);
  return FUNC_0(0);
 }

 if (VAR_13->msg.flags & VAR_1) {
  if (VAR_14 & (VAR_4 | VAR_5)) {
   FUNC_2(VAR_13);
   if (VAR_13->msg.len == 0)
    return VAR_9;
  }
 } else {
  if (VAR_14 & (VAR_3 | VAR_5)) {
   if ((VAR_14 & VAR_3) &&
       VAR_13->msg.len == 0)
    return VAR_9;
   FUNC_5(VAR_13);
  }
 }
 if (VAR_14 & VAR_5) {




  FUNC_4(VAR_13, 0);
  FUNC_4(VAR_13, !VAR_13->last_msg);
 }

 return 0;
}
