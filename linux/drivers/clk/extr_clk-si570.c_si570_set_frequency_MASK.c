
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_si570 {int n1; int hs_div; int regmap; scalar_t__ div_offset; int rfreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (unsigned long,struct clk_si570*,int *,int*,int*) ;
 int FUNC_2 (struct clk_si570*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct clk_si570 *VAR_8, unsigned long VAR_9)
{
 int VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_8, &VAR_8->rfreq, &VAR_8->n1,
   &VAR_8->hs_div);
 if (VAR_10)
  return VAR_10;





 FUNC_0(VAR_8->regmap, VAR_6, VAR_4);
 FUNC_0(VAR_8->regmap, VAR_7 + VAR_8->div_offset,
   ((VAR_8->hs_div - VAR_0) << VAR_1) |
   (((VAR_8->n1 - 1) >> 2) & VAR_2));
 FUNC_2(VAR_8);
 FUNC_0(VAR_8->regmap, VAR_6, 0);
 FUNC_0(VAR_8->regmap, VAR_5, VAR_3);


 FUNC_3(10000, 12000);

 return 0;
}
