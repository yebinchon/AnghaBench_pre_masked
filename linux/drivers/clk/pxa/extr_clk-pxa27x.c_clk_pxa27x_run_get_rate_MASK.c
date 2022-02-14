
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_3,
          unsigned long VAR_4)
{
 unsigned long VAR_5 = FUNC_0(VAR_0);
 unsigned int VAR_6 = (VAR_5 & VAR_1) >> VAR_2;

 return (VAR_4 / VAR_6) * 2;
}
