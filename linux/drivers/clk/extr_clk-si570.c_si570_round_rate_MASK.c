
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct clk_si570 {unsigned long frequency; unsigned long rfreq; unsigned int n1; unsigned int hs_div; TYPE_1__* i2c_client; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 long long FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,char*) ;
 unsigned long FUNC_2 (unsigned long,int) ;
 int FUNC_3 (unsigned long,struct clk_si570*,unsigned long*,unsigned int*,unsigned int*) ;
 struct clk_si570* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_5(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long *VAR_2)
{
 int VAR_3;
 u64 VAR_4;
 unsigned int VAR_5, VAR_6;
 struct clk_si570 *VAR_7 = FUNC_4(VAR_0);

 if (!VAR_1)
  return 0;

 if (FUNC_2(FUNC_0(VAR_1 - VAR_7->frequency) * 10000LL,
    VAR_7->frequency) < 35) {
  VAR_4 = FUNC_2((VAR_7->rfreq * VAR_1) +
    FUNC_2(VAR_7->frequency, 2), VAR_7->frequency);
  VAR_5 = VAR_7->n1;
  VAR_6 = VAR_7->hs_div;

 } else {
  VAR_3 = FUNC_3(VAR_1, VAR_7, &VAR_4, &VAR_5, &VAR_6);
  if (VAR_3) {
   FUNC_1(&VAR_7->i2c_client->dev,
     "unable to round rate\n");
   return 0;
  }
 }

 return VAR_1;
}
