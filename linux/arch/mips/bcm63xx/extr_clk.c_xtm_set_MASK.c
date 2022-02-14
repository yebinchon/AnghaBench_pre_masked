
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct clk *VAR_3, int VAR_4)
{
 if (!FUNC_0())
  return;

 if (VAR_4)
  FUNC_4(&VAR_2);
 else
  FUNC_3(&VAR_2);

 FUNC_2(VAR_1, VAR_4);

 if (VAR_4) {

  FUNC_1(VAR_0, 1);
  FUNC_5(1);
  FUNC_1(VAR_0, 0);
  FUNC_5(1);
 }
}
