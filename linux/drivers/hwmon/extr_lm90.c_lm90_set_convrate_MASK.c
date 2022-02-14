
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm90_data {int max_convrate; int update_interval; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct lm90_data*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, struct lm90_data *VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5, VAR_6;


 VAR_3 <<= 6;


 for (VAR_5 = 0, VAR_4 = VAR_0 << 6;
      VAR_5 < VAR_2->max_convrate; VAR_5++, VAR_4 >>= 1)
  if (VAR_3 >= VAR_4 * 3 / 4)
   break;

 VAR_6 = FUNC_1(VAR_2, VAR_5);
 VAR_2->update_interval = FUNC_0(VAR_4, 64);
 return VAR_6;
}
