
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sprd_i2c {int count; int complete; int buf; int err; scalar_t__ base; struct i2c_msg* msg; } ;
struct i2c_msg {int flags; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sprd_i2c*) ;
 int FUNC_3 (struct sprd_i2c*) ;
 int FUNC_4 (struct sprd_i2c*) ;
 int FUNC_5 (struct sprd_i2c*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct sprd_i2c *VAR_8 = VAR_7;
 struct i2c_msg *VAR_9 = VAR_8->msg;
 bool VAR_10 = !(FUNC_1(VAR_8->base + VAR_4) & VAR_3);
 u32 VAR_11;

 if (VAR_9->flags & VAR_2)
  VAR_11 = VAR_8->count >= VAR_1;
 else
  VAR_11 = VAR_8->count;
 if (VAR_11 && VAR_10) {
  FUNC_4(VAR_8);
  return VAR_5;
 }

 VAR_8->err = 0;





 if (!VAR_10)
  VAR_8->err = -VAR_0;
 else if (VAR_9->flags & VAR_2 && VAR_8->count)
  FUNC_5(VAR_8, VAR_8->buf, VAR_8->count);


 FUNC_2(VAR_8);
 FUNC_3(VAR_8);
 FUNC_0(&VAR_8->complete);

 return VAR_5;
}
