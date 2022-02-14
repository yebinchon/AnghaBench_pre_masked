
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {int * curthread; } ;
struct procinfo {int threadlist; } ;
typedef int pid_t ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct procinfo* FUNC_3 (struct trussinfo*,int ) ;

__attribute__((used)) static void
FUNC_4(struct trussinfo *VAR_1, pid_t VAR_2)
{
 struct procinfo *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_3 != ((void*)0));

 VAR_1->curthread = FUNC_0(&VAR_3->threadlist);
 FUNC_2(VAR_1->curthread != ((void*)0));
 FUNC_2(FUNC_1(VAR_1->curthread, VAR_0) == ((void*)0));
}
