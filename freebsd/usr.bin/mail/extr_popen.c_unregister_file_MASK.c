
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fp {struct fp* link; int * fp; } ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 struct fp* VAR_0 ;
 int FUNC_1 (struct fp*) ;

void
FUNC_2(FILE *VAR_1)
{
 struct fp **VAR_2, *VAR_3;

 for (VAR_2 = &VAR_0; (VAR_3 = *VAR_2) != ((void*)0); VAR_2 = &VAR_3->link)
  if (VAR_3->fp == VAR_1) {
   *VAR_2 = VAR_3->link;
   (void)FUNC_1(VAR_3);
   return;
  }
 FUNC_0(1, "Invalid file pointer");

}
