
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dummy; } ;
struct ad5686_state {TYPE_1__* data; int dev; } ;
struct TYPE_2__ {int * d8; int d32; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct i2c_client*,int *,int) ;
 struct i2c_client* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct ad5686_state *VAR_1,
       u8 VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_1->dev);
 int VAR_6;

 VAR_1->data[0].d32 = FUNC_2(FUNC_1(VAR_2) | FUNC_0(VAR_3)
          | VAR_4);

 VAR_6 = FUNC_3(VAR_5, &VAR_1->data[0].d8[1], 3);
 if (VAR_6 < 0)
  return VAR_6;

 return (VAR_6 != 3) ? -VAR_0 : 0;
}
