
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (struct node const*,int ) ;
 size_t FUNC_2 (char*) ;

char *
FUNC_3(const struct node *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 VAR_1 = FUNC_1(VAR_0, FUNC_0(""));




 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 > 1 && VAR_1[VAR_2 - 1] == '/')
  VAR_1[VAR_2 - 1] = '\0';

 return (VAR_1);
}
