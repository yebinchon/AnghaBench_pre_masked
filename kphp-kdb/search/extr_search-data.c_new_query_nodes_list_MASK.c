
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_nodes_list {scalar_t__ next; int * v; } ;
typedef int query_node_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct query_nodes_list* VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static struct query_nodes_list *FUNC_1 (query_node_t *VAR_3) {
  FUNC_0 (VAR_2 < VAR_0);
  struct query_nodes_list *VAR_4 = &VAR_1[VAR_2++];
  VAR_4->v = VAR_3;
  VAR_4->next = 0;
  return VAR_4;
}
