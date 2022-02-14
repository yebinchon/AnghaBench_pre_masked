
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adv7511 {scalar_t__ type; int i2c_edid; int i2c_packet; int cec_adap; int bridge; scalar_t__ cec_clk; int i2c_cec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adv7511*) ;
 int FUNC_1 (struct adv7511*) ;
 int FUNC_2 (struct adv7511*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 struct adv7511* FUNC_6 (struct i2c_client*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_1)
{
 struct adv7511 *VAR_2 = FUNC_6(VAR_1);

 if (VAR_2->type == VAR_0)
  FUNC_2(VAR_2);
 FUNC_7(VAR_2->i2c_cec);
 if (VAR_2->cec_clk)
  FUNC_4(VAR_2->cec_clk);

 FUNC_1(VAR_2);

 FUNC_5(&VAR_2->bridge);

 FUNC_0(VAR_2);

 FUNC_3(VAR_2->cec_adap);

 FUNC_7(VAR_2->i2c_packet);
 FUNC_7(VAR_2->i2c_edid);

 return 0;
}
