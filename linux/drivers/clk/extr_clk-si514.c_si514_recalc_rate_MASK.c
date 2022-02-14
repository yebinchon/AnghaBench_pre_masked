
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk_si514_muldiv {int dummy; } ;
struct clk_si514 {TYPE_1__* i2c_client; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 unsigned long FUNC_1 (struct clk_si514_muldiv*) ;
 int FUNC_2 (struct clk_si514*,struct clk_si514_muldiv*) ;
 struct clk_si514* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct clk_si514 *VAR_2 = FUNC_3(VAR_0);
 struct clk_si514_muldiv VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_0(&VAR_2->i2c_client->dev, "unable to retrieve settings\n");
  return 0;
 }

 return FUNC_1(&VAR_3);
}
