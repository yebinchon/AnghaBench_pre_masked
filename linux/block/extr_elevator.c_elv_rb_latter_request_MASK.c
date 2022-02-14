
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int rb_node; } ;
struct rb_node {int dummy; } ;


 struct request* FUNC_0 (struct rb_node*) ;
 struct rb_node* FUNC_1 (int *) ;

struct request *FUNC_2(struct request_queue *VAR_0,
          struct request *VAR_1)
{
 struct rb_node *VAR_2 = FUNC_1(&VAR_1->rb_node);

 if (VAR_2)
  return FUNC_0(VAR_2);

 return ((void*)0);
}
