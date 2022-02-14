
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* recalc ) (struct clk*) ;int rate; int children; struct clk* parent; int childnode; int usecount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct clk*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct clk*) ;

int FUNC_10(struct clk *VAR_3, struct clk *VAR_4)
{
 unsigned long VAR_5;

 if (VAR_3 == ((void*)0) || FUNC_0(VAR_3))
  return -VAR_0;


 if (FUNC_1(VAR_3->usecount))
  return -VAR_0;

 FUNC_4(&VAR_2);
 VAR_3->parent = VAR_4;
 FUNC_3(&VAR_3->childnode);
 FUNC_2(&VAR_3->childnode, &VAR_3->parent->children);
 FUNC_5(&VAR_2);

 FUNC_7(&VAR_1, VAR_5);
 if (VAR_3->recalc)
  VAR_3->rate = VAR_3->recalc(VAR_3);
 FUNC_6(VAR_3);
 FUNC_8(&VAR_1, VAR_5);

 return 0;
}
