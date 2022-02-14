
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sprd_i2c {scalar_t__ count; int buf; struct i2c_msg* msg; } ;
struct i2c_msg {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sprd_i2c*,int ,scalar_t__) ;
 int FUNC_1 (struct sprd_i2c*,int) ;
 int FUNC_2 (struct sprd_i2c*,int) ;
 int FUNC_3 (struct sprd_i2c*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct sprd_i2c *VAR_3)
{
 u32 VAR_4 = VAR_3->count;
 u32 VAR_5 = VAR_4 <= VAR_0 ? VAR_4 : VAR_0;
 struct i2c_msg *VAR_6 = VAR_3->msg;

 if (VAR_6->flags & VAR_2) {
  FUNC_0(VAR_3, VAR_3->buf, VAR_1);
  VAR_3->count -= VAR_1;
  VAR_3->buf += VAR_1;






  if (VAR_3->count >= VAR_1)
   FUNC_2(VAR_3, 1);
 } else {
  FUNC_3(VAR_3, VAR_3->buf, VAR_5);
  VAR_3->buf += VAR_5;
  VAR_3->count -= VAR_5;






  if (VAR_4 > VAR_0)
   FUNC_1(VAR_3, 1);
 }
}
