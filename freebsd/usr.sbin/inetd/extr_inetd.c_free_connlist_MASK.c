
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int * se_conn; } ;
struct conninfo {int co_numchild; int * co_proc; } ;


 struct conninfo* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct conninfo*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct servtab *VAR_1)
{
 struct conninfo *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  while ((VAR_2 = FUNC_0(&VAR_1->se_conn[VAR_3])) != ((void*)0)) {
   for (VAR_4 = 0; VAR_4 < VAR_2->co_numchild; ++VAR_4)
    FUNC_2(VAR_2->co_proc[VAR_4]);
   VAR_2->co_numchild = 0;
   FUNC_1(VAR_2);
  }
 }
}
