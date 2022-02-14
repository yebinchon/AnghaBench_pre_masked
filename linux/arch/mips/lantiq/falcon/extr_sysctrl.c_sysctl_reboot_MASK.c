
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned int bits; int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int,int ) ;
 int FUNC_2 (struct clk*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_0(VAR_4->module, VAR_0);
 VAR_6 = ~VAR_5 & VAR_4->bits;
 if (VAR_6 != 0) {
  FUNC_1(VAR_4->module, VAR_6, VAR_2);
  FUNC_1(VAR_4->module, VAR_6, VAR_0);
  FUNC_2(VAR_4, VAR_6, VAR_1);
 }
 FUNC_1(VAR_4->module, VAR_5 & VAR_4->bits, VAR_3);
 FUNC_2(VAR_4, VAR_4->bits, VAR_1);
}
