
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ usecount; int name; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct clk *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 == ((void*)0) || FUNC_0(VAR_1))
  return;

 FUNC_4(&VAR_0, VAR_2);
 if (VAR_1->usecount == 0) {
  FUNC_3("Trying disable clock %s with 0 usecount\n",
         VAR_1->name);
  FUNC_1(1);
  goto out;
 }

 FUNC_2(VAR_1);

out:
 FUNC_5(&VAR_0, VAR_2);
}
