
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {struct node* n_parent; int n_options; } ;


 char* FUNC_0 (char*,char,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(const struct node *VAR_0, char *VAR_1)
{
 char *VAR_2;

 if (VAR_0 == ((void*)0))
  return (VAR_1);

 VAR_2 = FUNC_0(VAR_1, ',', VAR_0->n_options);
 FUNC_1(VAR_1);

 return (FUNC_2(VAR_0->n_parent, VAR_2));
}
