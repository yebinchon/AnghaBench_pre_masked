
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx2967_i2c {int residue; int access_cnt; int msg_rd; int cur_trans; } ;
struct i2c_msg {int len; int flags; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zx2967_i2c*) ;
 int FUNC_1 (struct zx2967_i2c*,int) ;

__attribute__((used)) static int FUNC_2(struct zx2967_i2c *VAR_2,
          struct i2c_msg *VAR_3)
{
 int VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);

 VAR_2->cur_trans = VAR_3->buf;
 VAR_2->residue = VAR_3->len;
 VAR_2->access_cnt = VAR_3->len / VAR_0;
 VAR_2->msg_rd = VAR_3->flags & VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_2->access_cnt; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2, VAR_0);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_2->residue > 0) {
  VAR_4 = FUNC_1(VAR_2, VAR_2->residue);
  if (VAR_4)
   return VAR_4;
 }

 VAR_2->residue = 0;
 VAR_2->access_cnt = 0;

 return 0;
}
