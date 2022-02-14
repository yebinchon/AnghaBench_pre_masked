
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct dc_i2c {int last; int error; int state; int done; int lock; scalar_t__ msgbuf_ptr; struct i2c_msg* msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dc_i2c*,int) ;
 int FUNC_1 (struct dc_i2c*,int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned long FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct dc_i2c *VAR_3, struct i2c_msg *VAR_4, int VAR_5,
      int VAR_6)
{
 unsigned long VAR_7 = FUNC_2(VAR_2);
 unsigned long VAR_8;

 FUNC_4(&VAR_3->lock, VAR_8);
 VAR_3->msg = VAR_4;
 VAR_3->msgbuf_ptr = 0;
 VAR_3->last = VAR_6;
 VAR_3->error = 0;

 FUNC_3(&VAR_3->done);
 FUNC_0(VAR_3, 1);
 FUNC_1(VAR_3, VAR_5);
 FUNC_5(&VAR_3->lock, VAR_8);

 VAR_7 = FUNC_6(&VAR_3->done, VAR_7);
 FUNC_0(VAR_3, 0);
 if (VAR_7 == 0) {
  VAR_3->state = VAR_1;
  return -VAR_0;
 }

 if (VAR_3->error)
  return VAR_3->error;

 return 0;
}
