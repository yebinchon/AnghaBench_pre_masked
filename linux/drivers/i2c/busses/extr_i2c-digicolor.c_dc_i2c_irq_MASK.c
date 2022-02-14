
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dc_i2c {int state; int lock; int done; TYPE_1__* msg; int msgbuf_ptr; int error; scalar_t__ regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int flags; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dc_i2c*) ;
 int FUNC_3 (struct dc_i2c*) ;
 int FUNC_4 (struct dc_i2c*) ;
 int FUNC_5 (struct dc_i2c*) ;
 int FUNC_6 (struct dc_i2c*) ;
 int FUNC_7 (struct dc_i2c*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_11(int VAR_7, void *VAR_8)
{
 struct dc_i2c *VAR_9 = VAR_8;
 int VAR_10 = FUNC_2(VAR_9);
 unsigned long VAR_11;
 u8 VAR_12;

 FUNC_10(1, VAR_9->regs + VAR_4);

 FUNC_8(&VAR_9->lock, VAR_11);

 if (VAR_10 == VAR_3
     || VAR_10 == VAR_2) {
  VAR_9->error = -VAR_0;
  FUNC_0(&VAR_9->done);
  goto out;
 }

 switch (VAR_9->state) {
 case 130:
  VAR_12 = FUNC_1(VAR_9->msg);
  FUNC_7(VAR_9, VAR_12);
  VAR_9->state = 132;
  break;
 case 132:
  if (VAR_9->msg->flags & VAR_1) {
   FUNC_3(VAR_9);
   VAR_9->state = 131;
   break;
  }
  VAR_9->state = 128;

 case 128:
  if (VAR_9->msgbuf_ptr < VAR_9->msg->len)
   FUNC_6(VAR_9);
  else
   FUNC_5(VAR_9);
  break;
 case 131:
  if (VAR_9->msgbuf_ptr < VAR_9->msg->len)
   FUNC_4(VAR_9);
  else
   FUNC_5(VAR_9);
  break;
 case 129:
  VAR_9->state = VAR_6;
  FUNC_0(&VAR_9->done);
  break;
 }

out:
 FUNC_9(&VAR_9->lock, VAR_11);
 return VAR_5;
}
