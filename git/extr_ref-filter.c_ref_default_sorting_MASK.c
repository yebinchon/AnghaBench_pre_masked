
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int atom; int * next; } ;


 int FUNC_0 (char const*) ;
 struct ref_sorting* FUNC_1 (int,int) ;

struct ref_sorting *FUNC_2(void)
{
 static const char VAR_0[] = "refname";

 struct ref_sorting *VAR_1 = FUNC_1(1, sizeof(*VAR_1));

 VAR_1->next = ((void*)0);
 VAR_1->atom = FUNC_0(VAR_0);
 return VAR_1;
}
