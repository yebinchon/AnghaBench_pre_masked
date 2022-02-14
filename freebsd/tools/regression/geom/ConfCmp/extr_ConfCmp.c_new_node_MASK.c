
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int children; void* key; void* cont; } ;


 int FUNC_0 (int *) ;
 struct node* FUNC_1 (int,int) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 () ;

__attribute__((used)) static struct node *
FUNC_4(void)
{
 struct node *VAR_0;

 VAR_0 = FUNC_1(1, sizeof *VAR_0);
 VAR_0->cont = FUNC_3();
 FUNC_2(VAR_0->cont);
 VAR_0->key = FUNC_3();
 FUNC_2(VAR_0->key);
 FUNC_0(&VAR_0->children);
 return (VAR_0);
}
