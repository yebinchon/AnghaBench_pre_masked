
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpc2k_i2c {int msg_status; int irq; int wait; scalar_t__ base; int msg_idx; TYPE_1__* msg; } ;
struct TYPE_2__ {int flags; scalar_t__ len; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct lpc2k_i2c *VAR_9, int VAR_10)
{

 if (!VAR_10) {
  FUNC_6(VAR_8, VAR_9->base + VAR_5);
 } else {





  if (FUNC_4(VAR_9->msg->flags & VAR_2)) {
   FUNC_0(VAR_9->msg->len == 0);

   if (!(VAR_9->msg->flags & VAR_3)) {

    FUNC_6(VAR_9->msg->buf[0],
           VAR_9->base + VAR_6);
    VAR_9->msg_idx++;
   }
  } else {

   FUNC_6(VAR_8, VAR_9->base + VAR_5);
  }

  FUNC_6(VAR_7, VAR_9->base + VAR_4);
 }

 FUNC_2(VAR_9->irq);


 if (FUNC_5(VAR_9->wait, VAR_9->msg_status != -VAR_0,
          FUNC_3(1000)) == 0) {
  FUNC_1(VAR_9->irq);

  return -VAR_1;
 }

 return VAR_9->msg_status;
}
