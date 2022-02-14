
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long* VAR_2 ;
 unsigned long* VAR_3 ;

__attribute__((used)) static unsigned long FUNC_1(struct clk_hw *VAR_4,
           unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_0;
 unsigned long VAR_7 = FUNC_0(VAR_1);

 return (VAR_5 / 48) * VAR_3[(VAR_6 >> 23) & 0x7] /
  VAR_2[(VAR_7 >> 16) & 0x3];
}
