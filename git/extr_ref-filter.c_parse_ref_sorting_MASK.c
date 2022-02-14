
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_sorting {int reverse; int version; int atom; struct ref_sorting* next; } ;


 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 struct ref_sorting* FUNC_2 (int,int) ;

void FUNC_3(struct ref_sorting **VAR_0, const char *VAR_1)
{
 struct ref_sorting *VAR_2;

 VAR_2 = FUNC_2(1, sizeof(*VAR_2));
 VAR_2->next = *VAR_0;
 *VAR_0 = VAR_2;

 if (*VAR_1 == '-') {
  VAR_2->reverse = 1;
  VAR_1++;
 }
 if (FUNC_1(VAR_1, "version:", &VAR_1) ||
     FUNC_1(VAR_1, "v:", &VAR_1))
  VAR_2->version = 1;
 VAR_2->atom = FUNC_0(VAR_1);
}
