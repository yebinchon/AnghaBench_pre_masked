
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {int nr_args; int cmdbyte; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_1(struct i2c_client *VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = VAR_0[VAR_2].nr_args;

 VAR_4 = FUNC_0(VAR_1, VAR_0[VAR_2].cmdbyte);
 if (VAR_4 < 0)
  return VAR_4;

 if (VAR_6 == 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {

  VAR_4 = FUNC_0(VAR_1, VAR_3[VAR_5]);
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
