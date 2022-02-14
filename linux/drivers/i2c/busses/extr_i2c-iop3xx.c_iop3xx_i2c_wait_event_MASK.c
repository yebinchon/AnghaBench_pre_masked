
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_algo_iop3xx_data {int waitq; } ;
typedef int (* compare_func ) (unsigned int,unsigned int) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct i2c_algo_iop3xx_data*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int
FUNC_3(struct i2c_algo_iop3xx_data *VAR_2,
     unsigned VAR_3, unsigned* VAR_4,
     compare_func VAR_5)
{
 unsigned VAR_6 = 0;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 do {
  VAR_7 = FUNC_2 (
   VAR_2->waitq,
   (VAR_8 = VAR_5( VAR_6 = FUNC_1(VAR_2) ,VAR_3 )),
   1 * VAR_1
   );
  if ((VAR_9 = FUNC_0(VAR_6)) < 0) {
   *VAR_4 = VAR_6;
   return VAR_9;
  } else if (!VAR_7) {
   *VAR_4 = VAR_6;
   return -VAR_0;
  }
 } while(!VAR_8);

 *VAR_4 = VAR_6;

 return 0;
}
