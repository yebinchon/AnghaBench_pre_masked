
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {int outfile; struct threadinfo* curthread; } ;
struct threadinfo {int after; int before; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct trussinfo*) ;

__attribute__((used)) static void
FUNC_3(struct trussinfo *VAR_1)
{
 struct threadinfo *VAR_2;

 VAR_2 = VAR_1->curthread;
 FUNC_0(VAR_0, &VAR_2->after);
 VAR_2->before = VAR_2->after;
 FUNC_2(VAR_1);
 FUNC_1(VAR_1->outfile, "<new process>\n");
}
