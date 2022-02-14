
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_graph {int prev_state; int state; } ;
typedef enum graph_state { ____Placeholder_graph_state } graph_state ;



__attribute__((used)) static void FUNC_0(struct git_graph *VAR_0, enum graph_state VAR_1)
{
 VAR_0->prev_state = VAR_0->state;
 VAR_0->state = VAR_1;
}
