
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int strdup_strings; } ;


 int FUNC_0 (struct string_list*,char const*) ;
 struct string_list* FUNC_1 (int,int) ;

void FUNC_2(struct string_list **VAR_0, const char *VAR_1)
{
 if (!*VAR_0) {
  *VAR_0 = FUNC_1(1, sizeof(**VAR_0));
  (*VAR_0)->strdup_strings = 1;
 }
 FUNC_0(*VAR_0, VAR_1);
}
