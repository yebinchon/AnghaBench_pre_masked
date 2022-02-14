
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_i2c {int msg_read; int last; int clk; scalar_t__ finished_len; scalar_t__ cmd_ptr; scalar_t__ err_status; int msg_len; int buf; } ;
struct i2c_msg {int flags; int len; int buf; } ;
struct i2c_adapter {struct sirfsoc_i2c* algo_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sirfsoc_i2c*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_1, struct i2c_msg *VAR_2,
 int VAR_3)
{
 struct sirfsoc_i2c *VAR_4 = VAR_1->algo_data;
 int VAR_5, VAR_6;

 FUNC_1(VAR_4->clk);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_4->buf = VAR_2[VAR_5].buf;
  VAR_4->msg_len = VAR_2[VAR_5].len;
  VAR_4->msg_read = !!(VAR_2[VAR_5].flags & VAR_0);
  VAR_4->err_status = 0;
  VAR_4->cmd_ptr = 0;
  VAR_4->finished_len = 0;
  VAR_4->last = (VAR_5 == (VAR_3 - 1));

  VAR_6 = FUNC_2(VAR_4, &VAR_2[VAR_5]);
  if (VAR_6) {
   FUNC_0(VAR_4->clk);
   return VAR_6;
  }
 }

 FUNC_0(VAR_4->clk);
 return VAR_3;
}
