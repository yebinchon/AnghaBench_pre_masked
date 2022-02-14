
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct sp2 {TYPE_1__ ca; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 struct sp2* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct sp2 *VAR_1;

 FUNC_0(&VAR_0->dev, "\n");

 if (!VAR_0)
  return 0;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1)
  return 0;

 if (!VAR_1->ca.data)
  return 0;

 FUNC_1(&VAR_1->ca);

 return 0;
}
