
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pxa_i2c {int msg_ptr; scalar_t__ msg_idx; int msg_num; int req_slave_addr; int* icrlog; int irqlogidx; TYPE_1__* msg; } ;
struct TYPE_2__ {int flags; int len; int* buf; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct pxa_i2c*) ;
 int FUNC_1 (struct pxa_i2c*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct pxa_i2c*,int) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (struct pxa_i2c*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct pxa_i2c*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct pxa_i2c *VAR_15, u32 VAR_16)
{
 u32 VAR_17 = FUNC_6(FUNC_0(VAR_15)) & ~(VAR_7|VAR_8|VAR_5|VAR_9);

 again:



 if (VAR_16 & VAR_11) {




  FUNC_5(VAR_15, "ALD set");







  return;
 }

 if ((VAR_16 & VAR_12) &&
  (!((VAR_15->msg->flags & VAR_1) &&
   (VAR_16 & VAR_10)))) {
  int VAR_18 = VAR_0;






  if (VAR_16 & VAR_10) {
   if (VAR_15->msg_ptr == 0 && VAR_15->msg_idx == 0)
    VAR_18 = VAR_4;
   else
    VAR_18 = VAR_14;
  }
  FUNC_3(VAR_15, VAR_18);
 } else if (VAR_16 & VAR_13) {




  if (VAR_15->msg_ptr == VAR_15->msg->len - 1 &&
      VAR_15->msg_idx == VAR_15->msg_num - 1)
   VAR_17 |= VAR_8 | VAR_5;

  VAR_17 |= VAR_6 | VAR_9;
 } else if (VAR_15->msg_ptr < VAR_15->msg->len) {



  FUNC_8(VAR_15->msg->buf[VAR_15->msg_ptr++], FUNC_1(VAR_15));

  VAR_17 |= VAR_6 | VAR_9;





  if ((VAR_15->msg_ptr == VAR_15->msg->len) &&
   ((VAR_15->msg->flags & VAR_3) ||
   (VAR_15->msg_idx == VAR_15->msg_num - 1)))
    VAR_17 |= VAR_8;

 } else if (VAR_15->msg_idx < VAR_15->msg_num - 1) {



  VAR_15->msg_ptr = 0;
  VAR_15->msg_idx ++;
  VAR_15->msg++;






  if (VAR_15->msg->flags & VAR_2)
   goto again;




  FUNC_8(FUNC_2(VAR_15->msg), FUNC_1(VAR_15));
  VAR_15->req_slave_addr = FUNC_2(VAR_15->msg);




  VAR_17 &= ~VAR_6;
  VAR_17 |= VAR_7 | VAR_9;
 } else {
  if (VAR_15->msg->len == 0) {





   FUNC_4(VAR_15);
  }
  FUNC_3(VAR_15, 0);
 }

 VAR_15->icrlog[VAR_15->irqlogidx-1] = VAR_17;

 FUNC_8(VAR_17, FUNC_0(VAR_15));
 FUNC_7(VAR_15);
}
