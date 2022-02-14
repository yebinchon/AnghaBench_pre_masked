
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_i2c {int count; scalar_t__ base; struct i2c_msg* msg; } ;
struct i2c_msg {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sprd_i2c*) ;
 int FUNC_2 (struct sprd_i2c*) ;
 int FUNC_3 (struct sprd_i2c*,int ) ;
 int FUNC_4 (struct sprd_i2c*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_5, void *VAR_6)
{
 struct sprd_i2c *VAR_7 = VAR_6;
 struct i2c_msg *VAR_8 = VAR_7->msg;
 bool VAR_9 = !(FUNC_0(VAR_7->base + VAR_3) & VAR_2);
 u32 VAR_10;

 if (VAR_8->flags & VAR_1)
  VAR_10 = VAR_7->count >= VAR_0;
 else
  VAR_10 = VAR_7->count;
 if (!VAR_10 || !VAR_9) {
  FUNC_2(VAR_7);
  FUNC_1(VAR_7);
 }

 FUNC_3(VAR_7, 0);
 FUNC_4(VAR_7, 0);

 return VAR_4;
}
