
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {scalar_t__ state; int pos; int process_lock; scalar_t__ nmsgs; struct i2c_msg* msg; int wait; } ;
struct i2c_msg {int flags; int* buf; int len; } ;


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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (struct ocores_i2c*,int ) ;
 int FUNC_2 (struct ocores_i2c*,int ,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ocores_i2c *VAR_17, u8 VAR_18)
{
 struct i2c_msg *VAR_19 = VAR_17->msg;
 unsigned long VAR_20;





 FUNC_3(&VAR_17->process_lock, VAR_20);

 if ((VAR_17->state == VAR_12) || (VAR_17->state == VAR_13)) {

  FUNC_2(VAR_17, VAR_2, VAR_3);
  FUNC_5(&VAR_17->wait);
  goto out;
 }


 if (VAR_18 & VAR_10) {
  VAR_17->state = VAR_13;
  FUNC_2(VAR_17, VAR_2, VAR_7);
  goto out;
 }

 if ((VAR_17->state == VAR_15) || (VAR_17->state == VAR_16)) {
  VAR_17->state =
   (VAR_19->flags & VAR_1) ? VAR_14 : VAR_16;

  if (VAR_18 & VAR_11) {
   VAR_17->state = VAR_13;
   FUNC_2(VAR_17, VAR_2, VAR_7);
   goto out;
  }
 } else {
  VAR_19->buf[VAR_17->pos++] = FUNC_1(VAR_17, VAR_9);
 }


 if (VAR_17->pos == VAR_19->len) {
  VAR_17->nmsgs--;
  VAR_17->msg++;
  VAR_17->pos = 0;
  VAR_19 = VAR_17->msg;

  if (VAR_17->nmsgs) {

   if (!(VAR_19->flags & VAR_0)) {
    u8 VAR_21 = FUNC_0(VAR_19);

    VAR_17->state = VAR_15;

    FUNC_2(VAR_17, VAR_9, VAR_21);
    FUNC_2(VAR_17, VAR_2, VAR_6);
    goto out;
   }
   VAR_17->state = (VAR_19->flags & VAR_1)
    ? VAR_14 : VAR_16;
  } else {
   VAR_17->state = VAR_12;
   FUNC_2(VAR_17, VAR_2, VAR_7);
   goto out;
  }
 }

 if (VAR_17->state == VAR_14) {
  FUNC_2(VAR_17, VAR_2, VAR_17->pos == (VAR_19->len-1) ?
     VAR_5 : VAR_4);
 } else {
  FUNC_2(VAR_17, VAR_9, VAR_19->buf[VAR_17->pos++]);
  FUNC_2(VAR_17, VAR_2, VAR_8);
 }

out:
 FUNC_4(&VAR_17->process_lock, VAR_20);
}
