
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct category_description {int * member_1; int member_0; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (struct category_description*,int *) ;
 int FUNC_2 (char) ;

void FUNC_3(void)
{
 struct category_description VAR_1[] = {
  { &VAR_0, *FUNC_0("The common Git guides are:") },
  { 0, ((void*)0) }
 };
 FUNC_1(VAR_1, ((void*)0));
 FUNC_2('\n');
}
