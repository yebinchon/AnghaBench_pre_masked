
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct asc7621_data {int class_dev; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_5__ {TYPE_1__ sda; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 struct asc7621_data* FUNC_3 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct asc7621_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_2(VAR_2->class_dev);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  FUNC_1(&VAR_1->dev,
       &(VAR_0[VAR_3].sda.dev_attr));
 }

 return 0;
}
