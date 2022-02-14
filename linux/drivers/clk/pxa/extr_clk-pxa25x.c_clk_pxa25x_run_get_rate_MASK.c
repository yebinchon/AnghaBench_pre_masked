
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_2,
          unsigned long VAR_3)
{
 unsigned long VAR_4 = FUNC_0(VAR_0);
 unsigned int VAR_5 = VAR_1[(VAR_4 >> 7) & 0x07];

 return (VAR_3 / VAR_5) * 2;
}
