
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jc42_data {int config; int orig_config; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct jc42_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_2)
{
 struct jc42_data *VAR_3 = FUNC_0(VAR_2);


 if ((VAR_3->config & ~VAR_0) !=
     (VAR_3->orig_config & ~VAR_0)) {
  int VAR_4;

  VAR_4 = (VAR_3->orig_config & ~VAR_0)
    | (VAR_3->config & VAR_0);
  FUNC_1(VAR_2, VAR_1, VAR_4);
 }
 return 0;
}
