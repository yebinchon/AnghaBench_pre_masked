
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp {int pid; int * fp; struct fp* link; } ;
typedef int pid_t ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 struct fp* VAR_0 ;

pid_t
FUNC_1(FILE *VAR_1)
{
 struct fp *VAR_2;

 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->link)
  if (VAR_2->fp == VAR_1)
   return (VAR_2->pid);
 FUNC_0(1, "Invalid file pointer");

}
