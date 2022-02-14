
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfvar {int vars; struct cfvar* name; struct cfvar* s; } ;
struct cfstring {int vars; struct cfstring* name; struct cfstring* s; } ;
struct cfparam {int val; } ;


 struct cfvar* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct cfvar* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cfvar*,int ) ;
 int FUNC_4 (struct cfvar*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct cfparam *VAR_1)
{
 struct cfstring *VAR_2;
 struct cfvar *VAR_3;

 while ((VAR_2 = FUNC_2(&VAR_1->val))) {
  FUNC_4(VAR_2->s);
  while ((VAR_3 = FUNC_0(&VAR_2->vars))) {
   FUNC_4(VAR_3->name);
   FUNC_1(&VAR_2->vars, VAR_0);
   FUNC_4(VAR_3);
  }
  FUNC_3(&VAR_1->val, VAR_2, VAR_0);
  FUNC_4(VAR_2);
 }
}
