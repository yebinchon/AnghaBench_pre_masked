
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_5,
      unsigned long VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 unsigned long VAR_10 = FUNC_0(VAR_0);
 unsigned long VAR_11 = FUNC_0(VAR_3);

 VAR_9 = VAR_11 & (1 << VAR_2);
 VAR_7 = VAR_10 & (1 << VAR_1);
 VAR_8 = VAR_11 & VAR_4;

 if (VAR_9 || VAR_7)
  return VAR_6;
 if (VAR_8 <= 10)
  return VAR_6;
 if (VAR_8 <= 20)
  return VAR_6 / 2;
 return VAR_6 / 4;
}
