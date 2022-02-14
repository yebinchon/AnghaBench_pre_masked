
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_pnx_algo_data {long timeout; } ;


 int FUNC_0 (struct i2c_pnx_algo_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_3(struct i2c_pnx_algo_data *VAR_1)
{
 long VAR_2 = VAR_1->timeout;
 while (VAR_2 > 0 &&
   (FUNC_1(FUNC_0(VAR_1)) & VAR_0)) {
  FUNC_2(1);
  VAR_2--;
 }
 return (VAR_2 <= 0);
}
