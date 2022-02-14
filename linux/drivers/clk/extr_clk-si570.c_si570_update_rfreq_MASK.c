
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_si570 {int n1; int rfreq; scalar_t__ div_offset; int regmap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_si570 *VAR_2)
{
 u8 VAR_3[5];

 VAR_3[0] = ((VAR_2->n1 - 1) << 6) |
  ((VAR_2->rfreq >> 32) & VAR_0);
 VAR_3[1] = (VAR_2->rfreq >> 24) & 0xff;
 VAR_3[2] = (VAR_2->rfreq >> 16) & 0xff;
 VAR_3[3] = (VAR_2->rfreq >> 8) & 0xff;
 VAR_3[4] = VAR_2->rfreq & 0xff;

 return FUNC_1(VAR_2->regmap, VAR_1 +
   VAR_2->div_offset, VAR_3, FUNC_0(VAR_3));
}
