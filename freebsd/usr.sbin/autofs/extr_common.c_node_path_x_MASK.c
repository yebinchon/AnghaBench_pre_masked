
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {char* n_key; struct node* n_parent; } ;


 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct node const*) ;

__attribute__((used)) static char *
FUNC_4(const struct node *VAR_0, char *VAR_1)
{
 char *VAR_2;

 if (VAR_0->n_parent == ((void*)0))
  return (VAR_1);





 if (FUNC_3(VAR_0) && VAR_1[0] != '\0')
  return (VAR_1);

 FUNC_0(VAR_0->n_key[0] != '\0');
 VAR_2 = FUNC_1(VAR_0->n_key, '/', VAR_1);
 FUNC_2(VAR_1);

 return (FUNC_4(VAR_0->n_parent, VAR_2));
}
