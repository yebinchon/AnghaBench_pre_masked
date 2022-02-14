
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_nodes_list {struct query_nodes_list* next; } ;



__attribute__((used)) static void FUNC_0 (struct query_nodes_list *VAR_0, struct query_nodes_list *VAR_1) {
  while (VAR_0->next) {
    VAR_0 = VAR_0->next;
  }
  VAR_0->next = VAR_1;
}
