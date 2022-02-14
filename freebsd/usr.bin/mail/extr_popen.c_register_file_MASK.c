
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp {int pipe; struct fp* link; int pid; int * fp; } ;
typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 struct fp* VAR_0 ;
 struct fp* FUNC_1 (int) ;

void
FUNC_2(FILE *VAR_1, int VAR_2, pid_t VAR_3)
{
 struct fp *VAR_4;

 if ((VAR_4 = FUNC_1(sizeof(*VAR_4))) == ((void*)0))
  FUNC_0(1, "Out of memory");
 VAR_4->fp = VAR_1;
 VAR_4->pipe = VAR_2;
 VAR_4->pid = VAR_3;
 VAR_4->link = VAR_0;
 VAR_0 = VAR_4;
}
