
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct clk_si570 {unsigned long frequency; int fxtal; TYPE_1__* i2c_client; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct clk_si570*,int*,unsigned int*,unsigned int*) ;
 struct clk_si570* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 int VAR_2;
 u64 VAR_3, VAR_4;
 unsigned int VAR_5, VAR_6;
 struct clk_si570 *VAR_7 = FUNC_3(VAR_0);

 VAR_2 = FUNC_2(VAR_7, &VAR_3, &VAR_5, &VAR_6);
 if (VAR_2) {
  FUNC_0(&VAR_7->i2c_client->dev, "unable to recalc rate\n");
  return VAR_7->frequency;
 }

 VAR_3 = FUNC_1(VAR_3, VAR_6 * VAR_5);
 VAR_4 = (VAR_7->fxtal * VAR_3) >> 28;

 return VAR_4;
}
