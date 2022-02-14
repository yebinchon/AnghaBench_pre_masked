
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_graph {int graph_fd; } ;


 struct commit_graph* FUNC_0 (int,int) ;

__attribute__((used)) static struct commit_graph *FUNC_1(void)
{
 struct commit_graph *VAR_0 = FUNC_0(1, sizeof(*VAR_0));
 VAR_0->graph_fd = -1;

 return VAR_0;
}
