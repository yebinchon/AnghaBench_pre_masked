
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct anx78xx {int edid; int bridge; } ;


 int FUNC_0 (int *) ;
 struct anx78xx* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct anx78xx*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct anx78xx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->bridge);

 FUNC_3(VAR_1);

 FUNC_2(VAR_1->edid);

 return 0;
}
