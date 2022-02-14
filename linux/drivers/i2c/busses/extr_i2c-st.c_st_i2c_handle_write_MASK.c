
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_i2c_client {int count; } ;
struct st_i2c_dev {struct st_i2c_client client; } ;


 int FUNC_0 (struct st_i2c_dev*) ;
 int FUNC_1 (struct st_i2c_dev*) ;
 int FUNC_2 (struct st_i2c_dev*) ;

__attribute__((used)) static void FUNC_3(struct st_i2c_dev *VAR_0)
{
 struct st_i2c_client *VAR_1 = &VAR_0->client;

 FUNC_0(VAR_0);

 if (!VAR_1->count)

  FUNC_1(VAR_0);
 else
  FUNC_2(VAR_0);
}
