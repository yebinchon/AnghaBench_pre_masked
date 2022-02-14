
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int flags; int addr; } ;
struct i2c_algo_pca_data {int dummy; } ;


 int FUNC_0 (char*,int ,char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_msg*) ;
 int FUNC_2 (struct i2c_algo_pca_data*) ;
 int FUNC_3 (struct i2c_algo_pca_data*,int ,int) ;
 int FUNC_4 (struct i2c_algo_pca_data*,int) ;
 int FUNC_5 (struct i2c_algo_pca_data*) ;

__attribute__((used)) static int FUNC_6(struct i2c_algo_pca_data *VAR_5,
         struct i2c_msg *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = FUNC_1(VAR_6);

 FUNC_0("=== SLAVE ADDRESS %#04x+%c=%#04x\n",
      VAR_6->addr, VAR_6->flags & VAR_0 ? 'R' : 'W', VAR_8);

 FUNC_3(VAR_5, VAR_4, VAR_8);

 VAR_7 &= ~(VAR_3|VAR_2|VAR_1);
 FUNC_4(VAR_5, VAR_7);

 return FUNC_5(VAR_5);
}
