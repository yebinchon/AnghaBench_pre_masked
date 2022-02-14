
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long long u64 ;
struct clk_si570 {int rfreq; long long n1; long long hs_div; long long frequency; void* fxtal; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (long long,int) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct clk_si570*,int*,long long*,long long*) ;

__attribute__((used)) static int FUNC_3(struct clk_si570 *VAR_2, u64 VAR_3)
{
 int VAR_4;
 u64 VAR_5;

 FUNC_1(VAR_2->regmap, VAR_1, VAR_0);

 VAR_4 = FUNC_2(VAR_2, &VAR_2->rfreq, &VAR_2->n1, &VAR_2->hs_div);
 if (VAR_4)
  return VAR_4;





 VAR_5 = VAR_3 * VAR_2->n1 * VAR_2->hs_div;
 if (VAR_5 >= (1LL << 36))
  VAR_2->fxtal = FUNC_0(VAR_5 << 24, VAR_2->rfreq >> 4);
 else
  VAR_2->fxtal = FUNC_0(VAR_5 << 28, VAR_2->rfreq);

 VAR_2->frequency = VAR_3;

 return 0;
}
