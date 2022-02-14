
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssif_info {int intf; } ;
struct i2c_client {int dummy; } ;


 struct ssif_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ssif_info*) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_0)
{
 struct ssif_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->intf);
 FUNC_2(VAR_1);
}
