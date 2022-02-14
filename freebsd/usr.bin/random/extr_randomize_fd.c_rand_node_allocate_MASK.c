
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rand_node {int * next; int * cp; scalar_t__ len; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct rand_node *
FUNC_2(void)
{
 struct rand_node *VAR_0;

 VAR_0 = (struct rand_node *)FUNC_1(sizeof(struct rand_node));
 if (VAR_0 == ((void*)0))
  FUNC_0(1, "malloc");

 VAR_0->len = 0;
 VAR_0->cp = ((void*)0);
 VAR_0->next = ((void*)0);
 return(VAR_0);
}
