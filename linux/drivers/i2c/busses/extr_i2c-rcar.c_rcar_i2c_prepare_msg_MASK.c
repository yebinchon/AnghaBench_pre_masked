
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int msgs_left; int flags; int msg; scalar_t__ pos; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rcar_i2c_priv*) ;
 int FUNC_2 (struct rcar_i2c_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct rcar_i2c_priv *VAR_10)
{
 int VAR_11 = !!FUNC_1(VAR_10);

 VAR_10->pos = 0;
 if (VAR_10->msgs_left == 1)
  VAR_10->flags |= VAR_5;

 FUNC_2(VAR_10, VAR_0, FUNC_0(VAR_10->msg));





 if (VAR_10->flags & VAR_4) {
  FUNC_2(VAR_10, VAR_3, 0);
  FUNC_2(VAR_10, VAR_1, VAR_7);
 } else {
  if (VAR_10->flags & VAR_6)
   VAR_10->flags &= ~VAR_6;
  else
   FUNC_2(VAR_10, VAR_1, VAR_7);
  FUNC_2(VAR_10, VAR_3, 0);
 }
 FUNC_2(VAR_10, VAR_2, VAR_11 ? VAR_8 : VAR_9);
}
