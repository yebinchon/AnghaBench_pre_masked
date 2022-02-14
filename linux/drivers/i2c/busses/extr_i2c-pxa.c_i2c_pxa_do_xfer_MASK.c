
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct pxa_i2c {int msg_num; int msg_idx; int wait; int lock; scalar_t__ irqlogidx; scalar_t__ msg_ptr; struct i2c_msg* msg; TYPE_1__ adap; scalar_t__ high_mode; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct pxa_i2c*,char*) ;
 int FUNC_2 (struct pxa_i2c*) ;
 int FUNC_3 (struct pxa_i2c*) ;
 int FUNC_4 (struct pxa_i2c*) ;
 int FUNC_5 (struct pxa_i2c*) ;
 int FUNC_6 (struct pxa_i2c*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 long FUNC_9 (int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct pxa_i2c *VAR_2, struct i2c_msg *VAR_3, int VAR_4)
{
 long VAR_5;
 int VAR_6;




 VAR_6 = FUNC_6(VAR_2);
 if (VAR_6) {
  FUNC_0(&VAR_2->adap.dev, "i2c_pxa: timeout waiting for bus free\n");
  goto out;
 }




 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6) {
  FUNC_0(&VAR_2->adap.dev, "i2c_pxa_set_master: error %d\n", VAR_6);
  goto out;
 }

 if (VAR_2->high_mode) {
  VAR_6 = FUNC_2(VAR_2);
  if (VAR_6) {
   FUNC_0(&VAR_2->adap.dev, "i2c_pxa_send_mastercode timeout\n");
   goto out;
   }
 }

 FUNC_7(&VAR_2->lock);

 VAR_2->msg = VAR_3;
 VAR_2->msg_num = VAR_4;
 VAR_2->msg_idx = 0;
 VAR_2->msg_ptr = 0;
 VAR_2->irqlogidx = 0;

 FUNC_4(VAR_2);

 FUNC_8(&VAR_2->lock);




 VAR_5 = FUNC_9(VAR_2->wait, VAR_2->msg_num == 0, VAR_0 * 5);
 FUNC_5(VAR_2);




 VAR_6 = VAR_2->msg_idx;

 if (!VAR_5 && VAR_2->msg_num) {
  FUNC_1(VAR_2, "timeout");
  VAR_6 = VAR_1;
 }

 out:
 return VAR_6;
}
