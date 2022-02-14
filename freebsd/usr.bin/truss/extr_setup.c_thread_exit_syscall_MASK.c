
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {struct threadinfo* curthread; } ;
struct threadinfo {int after; int in_syscall; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct threadinfo*) ;
 int FUNC_2 (struct trussinfo*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct trussinfo *VAR_1)
{
 struct threadinfo *VAR_2;

 VAR_2 = VAR_1->curthread;
 if (!VAR_2->in_syscall)
  return;

 FUNC_0(VAR_0, &VAR_2->after);

 FUNC_2(VAR_1, 0, ((void*)0));
 FUNC_1(VAR_2);
}
