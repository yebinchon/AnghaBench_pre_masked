
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct clk_si570 {scalar_t__ div_offset; int regmap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,scalar_t__,int*,int ) ;

__attribute__((used)) static int FUNC_2(struct clk_si570 *VAR_7, u64 *VAR_8,
  unsigned int *VAR_9, unsigned int *VAR_10)
{
 int VAR_11;
 u8 VAR_12[6];
 u64 VAR_13;

 VAR_11 = FUNC_1(VAR_7->regmap, VAR_6 + VAR_7->div_offset,
   VAR_12, FUNC_0(VAR_12));
 if (VAR_11)
  return VAR_11;

 *VAR_10 = ((VAR_12[0] & VAR_0) >> VAR_2) + VAR_1;
 *VAR_9 = ((VAR_12[0] & VAR_4) << 2) + ((VAR_12[1] & VAR_3) >> 6) + 1;

 if (*VAR_9 > 1)
  *VAR_9 &= ~1;

 VAR_13 = VAR_12[1] & VAR_5;
 VAR_13 = (VAR_13 << 8) + VAR_12[2];
 VAR_13 = (VAR_13 << 8) + VAR_12[3];
 VAR_13 = (VAR_13 << 8) + VAR_12[4];
 VAR_13 = (VAR_13 << 8) + VAR_12[5];
 *VAR_8 = VAR_13;

 return 0;
}
