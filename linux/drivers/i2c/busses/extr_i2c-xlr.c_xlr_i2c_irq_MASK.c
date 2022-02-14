
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_i2c_private {scalar_t__ pos; int wait; int iobase; struct i2c_msg* msg; } ;
struct i2c_msg {scalar_t__ len; int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct xlr_i2c_private*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct xlr_i2c_private*,int ) ;
 int FUNC_4 (struct xlr_i2c_private*,int ) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_5, void *VAR_6)
{
 struct xlr_i2c_private *VAR_7 = VAR_6;
 struct i2c_msg *VAR_8 = VAR_7->msg;
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_2(VAR_7->iobase, VAR_3);
 if (!VAR_9)
  return VAR_2;

 FUNC_5(VAR_7->iobase, VAR_3, VAR_9);

 if (!VAR_8)
  return VAR_1;

 VAR_10 = FUNC_2(VAR_7->iobase, VAR_4);

 if (VAR_7->pos < VAR_8->len) {
  if (VAR_8->flags & VAR_0)
   FUNC_3(VAR_7, VAR_10);
  else
   FUNC_4(VAR_7, VAR_10);
 }

 if (!FUNC_1(VAR_7, VAR_10))
  FUNC_0(&VAR_7->wait);

 return VAR_1;
}
