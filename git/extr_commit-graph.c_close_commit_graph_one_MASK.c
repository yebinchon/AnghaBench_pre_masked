
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_graph {struct commit_graph* base_graph; } ;


 int FUNC_0 (struct commit_graph*) ;

__attribute__((used)) static void FUNC_1(struct commit_graph *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->base_graph);
 FUNC_0(VAR_0);
}
