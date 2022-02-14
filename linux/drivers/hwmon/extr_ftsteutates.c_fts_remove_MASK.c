
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct fts_data {int wdd; } ;


 struct fts_data* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct fts_data *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(&VAR_1->wdd);
 return 0;
}
