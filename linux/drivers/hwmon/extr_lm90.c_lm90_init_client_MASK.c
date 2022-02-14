
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {int convrate_orig; int config_orig; int config; scalar_t__ kind; int flags; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ,struct lm90_data*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct i2c_client*,struct lm90_data*,int) ;
 int FUNC_3 (struct lm90_data*,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_8, struct lm90_data *VAR_9)
{
 int VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_2);
 if (VAR_11 < 0)
  return VAR_11;
 VAR_9->convrate_orig = VAR_11;




 VAR_10 = FUNC_1(VAR_8, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_9->config_orig = VAR_10;
 VAR_9->config = VAR_10;

 FUNC_2(VAR_8, VAR_9, 500);


 if (VAR_9->kind == VAR_3 || VAR_9->kind == VAR_7) {
  if (VAR_10 & 0x04)
   VAR_9->flags |= VAR_0;
 }






 if (VAR_9->kind == VAR_5)
  VAR_10 |= 0x18;




 if (VAR_9->kind == VAR_6)
  VAR_10 &= ~0x08;

 VAR_10 &= 0xBF;
 FUNC_3(VAR_9, VAR_10);

 return FUNC_0(&VAR_8->dev, VAR_4, VAR_9);
}
