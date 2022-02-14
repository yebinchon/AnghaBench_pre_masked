
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_data {int cmdlist_mutex; int free_cmdlist; } ;
struct g2d_cmdlist_node {int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct g2d_data *VAR_0, struct g2d_cmdlist_node *VAR_1)
{
 FUNC_1(&VAR_0->cmdlist_mutex);
 FUNC_0(&VAR_1->list, &VAR_0->free_cmdlist);
 FUNC_2(&VAR_0->cmdlist_mutex);
}
