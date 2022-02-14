
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int n_children; void* n_options; void* n_key; } ;


 int FUNC_0 (int *) ;
 struct node* FUNC_1 (int,int) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;

struct node *
FUNC_4(void)
{
 struct node *VAR_0;

 VAR_0 = FUNC_1(1, sizeof(*VAR_0));
 if (VAR_0 == ((void*)0))
  FUNC_3(1, "calloc");

 VAR_0->n_key = FUNC_2("/");
 VAR_0->n_options = FUNC_2("");

 FUNC_0(&VAR_0->n_children);

 return (VAR_0);
}
