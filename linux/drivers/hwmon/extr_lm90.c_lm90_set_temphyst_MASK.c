
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {scalar_t__ kind; int temp_hyst; int * temp8; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lm90_data*,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_5(struct lm90_data *VAR_5, long VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->client;
 int VAR_8;
 int VAR_9;

 if (VAR_5->kind == VAR_2 || VAR_5->kind == VAR_4)
  VAR_8 = FUNC_4(VAR_5, VAR_5->temp8[VAR_1]);
 else if (VAR_5->kind == VAR_3)
  VAR_8 = FUNC_3(VAR_5->temp8[VAR_1]);
 else
  VAR_8 = FUNC_2(VAR_5->temp8[VAR_1]);

 VAR_5->temp_hyst = FUNC_0(VAR_8 - VAR_6);
 VAR_9 = FUNC_1(VAR_7, VAR_0,
     VAR_5->temp_hyst);
 return VAR_9;
}
