
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2) {
  VAR_2 = FUNC_2(VAR_1);
  FUNC_0(VAR_0);
 }

 return VAR_2;
}
