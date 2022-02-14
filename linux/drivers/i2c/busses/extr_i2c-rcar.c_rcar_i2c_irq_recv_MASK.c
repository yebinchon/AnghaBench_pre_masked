
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rcar_i2c_priv*) ;
 int FUNC_1 (struct rcar_i2c_priv*) ;
 int FUNC_2 (struct rcar_i2c_priv*,int ) ;
 int FUNC_3 (struct rcar_i2c_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct rcar_i2c_priv *VAR_10, u32 VAR_11)
{
 struct i2c_msg *VAR_12 = VAR_10->msg;


 if (!(VAR_11 & VAR_6))
  return;

 if (VAR_11 & VAR_5) {




  FUNC_0(VAR_10);
 } else if (VAR_10->pos < VAR_12->len) {

  VAR_12->buf[VAR_10->pos] = FUNC_2(VAR_10, VAR_2);
  VAR_10->pos++;
 }


 if (VAR_10->pos + 1 == VAR_12->len) {
  if (VAR_10->flags & VAR_3) {
   FUNC_3(VAR_10, VAR_0, VAR_8);
  } else {
   FUNC_3(VAR_10, VAR_0, VAR_7);
   VAR_10->flags |= VAR_4;
  }
 }

 if (VAR_10->pos == VAR_12->len && !(VAR_10->flags & VAR_3))
  FUNC_1(VAR_10);
 else
  FUNC_3(VAR_10, VAR_1, VAR_9);
}
