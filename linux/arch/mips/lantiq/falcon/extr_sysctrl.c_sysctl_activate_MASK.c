
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int bits; int module; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct clk*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_3)
{
 FUNC_0(VAR_3->module, VAR_3->bits, VAR_2);
 FUNC_0(VAR_3->module, VAR_3->bits, VAR_0);
 FUNC_1(VAR_3, VAR_3->bits, VAR_1);
 return 0;
}
