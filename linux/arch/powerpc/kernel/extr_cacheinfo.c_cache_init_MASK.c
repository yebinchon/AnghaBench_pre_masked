
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct cache {int type; int level; int list; int ofnode; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct device_node*) ;

__attribute__((used)) static void FUNC_3(struct cache *VAR_1, int VAR_2, int VAR_3,
         struct device_node *VAR_4)
{
 VAR_1->type = VAR_2;
 VAR_1->level = VAR_3;
 VAR_1->ofnode = FUNC_2(VAR_4);
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->list, &VAR_0);
}
