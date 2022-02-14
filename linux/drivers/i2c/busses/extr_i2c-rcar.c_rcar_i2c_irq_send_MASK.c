
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rcar_i2c_priv {int pos; int flags; struct i2c_msg* msg; } ;
struct i2c_msg {int len; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct rcar_i2c_priv*) ;
 int FUNC_1 (struct rcar_i2c_priv*) ;
 int FUNC_2 (struct rcar_i2c_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rcar_i2c_priv *VAR_7, u32 VAR_8)
{
 struct i2c_msg *VAR_9 = VAR_7->msg;


 if (!(VAR_8 & VAR_4))
  return;


 if (VAR_7->pos == 1 && FUNC_0(VAR_7))
  return;

 if (VAR_7->pos < VAR_9->len) {







  FUNC_2(VAR_7, VAR_2, VAR_9->buf[VAR_7->pos]);
  VAR_7->pos++;
 } else {
  if (VAR_7->flags & VAR_3) {





   FUNC_2(VAR_7, VAR_0, VAR_5);
  } else {
   FUNC_1(VAR_7);
   return;
  }
 }

 FUNC_2(VAR_7, VAR_1, VAR_6);
}
