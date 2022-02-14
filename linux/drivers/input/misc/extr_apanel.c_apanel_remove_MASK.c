
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct apanel {int ipdev; int mail_led; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 struct apanel* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3)
{
 struct apanel *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2[VAR_0] != VAR_1)
  FUNC_3(&VAR_4->mail_led);

 FUNC_2(VAR_4->ipdev);
 FUNC_1(VAR_4->ipdev);

 return 0;
}
