
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_graph {scalar_t__ graph_fd; struct commit_graph* filename; int * data; int data_len; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct commit_graph*) ;
 int FUNC_2 (void*,int ) ;

void FUNC_3(struct commit_graph *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->graph_fd >= 0) {
  FUNC_2((void *)VAR_0->data, VAR_0->data_len);
  VAR_0->data = ((void*)0);
  FUNC_0(VAR_0->graph_fd);
 }
 FUNC_1(VAR_0->filename);
 FUNC_1(VAR_0);
}
