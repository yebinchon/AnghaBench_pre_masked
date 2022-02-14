
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct syscall {int * name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct syscall*,int ) ;
 struct syscall* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct syscall*) ;
 int VAR_2 ;

void
FUNC_3(void)
{
 struct syscall *VAR_3;

 FUNC_0(&VAR_2);
 for (VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++) {



  FUNC_1(&VAR_2, VAR_3, VAR_1);
 }
}
