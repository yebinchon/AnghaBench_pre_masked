
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct llist_node {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct active_node {TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static inline struct llist_node *FUNC_2(struct active_node *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->base));
 return (struct llist_node *)&VAR_0->base.link;
}
