
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int * n_parent; } ;


 int FUNC_0 (int) ;
 struct node* FUNC_1 (struct node*,char const*) ;

struct node *
FUNC_2(struct node *VAR_0, const char *VAR_1)
{
 struct node *VAR_2;

 FUNC_0(VAR_0->n_parent == ((void*)0));

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_0(VAR_2 != VAR_0);

 return (VAR_2);
}
