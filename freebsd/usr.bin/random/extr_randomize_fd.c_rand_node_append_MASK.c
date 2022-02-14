
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_node {struct rand_node* next; } ;


 struct rand_node* VAR_0 ;
 struct rand_node* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rand_node *VAR_2)
{
 if (VAR_0 == ((void*)0))
  VAR_0 = VAR_1 = VAR_2;
 else {
  VAR_1->next = VAR_2;
  VAR_1 = VAR_2;
 }
}
