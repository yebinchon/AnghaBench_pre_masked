
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct i2c_client {int dev; } ;
struct TYPE_2__ {int len; int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (size_t*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_3, u8 VAR_4, u8 *VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 1; VAR_6 <= VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(VAR_3,
   VAR_2[VAR_4].cmd, VAR_1);

  if (VAR_7 == VAR_2[VAR_4].len) {
   break;
  } else {
   FUNC_0(&VAR_3->dev,
     "lm93: block read data failed, command 0x%02x.\n",
     VAR_2[VAR_4].cmd);
   FUNC_2(VAR_6 + 3);
  }
 }

 if (VAR_7 == VAR_2[VAR_4].len) {
  FUNC_3(VAR_5, VAR_1,
         VAR_2[VAR_4].len);
 } else {

 }
}
