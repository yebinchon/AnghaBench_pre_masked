
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sn_bridge {int bridge; scalar_t__ dsi; int dev; int host_node; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct ti_sn_bridge* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ti_sn_bridge*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct ti_sn_bridge *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return -VAR_0;

 FUNC_6(VAR_2);

 FUNC_4(VAR_2->host_node);

 FUNC_5(VAR_2->dev);

 if (VAR_2->dsi) {
  FUNC_2(VAR_2->dsi);
  FUNC_3(VAR_2->dsi);
 }

 FUNC_0(&VAR_2->bridge);

 return 0;
}
