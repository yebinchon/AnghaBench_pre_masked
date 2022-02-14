
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si570 {unsigned long rfreq; int regmap; int frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct clk_si570*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct clk_si570 *VAR_2,
         unsigned long VAR_3)
{





 VAR_2->rfreq = FUNC_0((VAR_2->rfreq * VAR_3) +
   FUNC_1(VAR_2->frequency, 2), VAR_2->frequency);
 FUNC_2(VAR_2->regmap, VAR_1, VAR_0);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2->regmap, VAR_1, 0);


 FUNC_4(100, 200);

 return 0;
}
