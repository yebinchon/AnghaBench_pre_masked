
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_node {struct rand_node* next; } ;


 int FUNC_0 (struct rand_node*) ;

__attribute__((used)) static void
FUNC_1(struct rand_node *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->next != ((void*)0))
   FUNC_1(VAR_0->next);

  FUNC_0(VAR_0);
 }
}
