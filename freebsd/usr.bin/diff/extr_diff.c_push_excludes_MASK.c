
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct excludes {char* pattern; struct excludes* next; } ;


 struct excludes* VAR_0 ;
 struct excludes* FUNC_0 (int) ;

void
FUNC_1(char *VAR_1)
{
 struct excludes *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->pattern = VAR_1;
 VAR_2->next = VAR_0;
 VAR_0 = VAR_2;
}
