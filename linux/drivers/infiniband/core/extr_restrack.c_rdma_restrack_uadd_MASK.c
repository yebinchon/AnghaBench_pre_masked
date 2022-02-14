
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_restrack_entry {scalar_t__ type; int user; int * kern_name; int * task; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct rdma_restrack_entry*) ;
 int FUNC_1 (struct rdma_restrack_entry*,int *) ;

void FUNC_2(struct rdma_restrack_entry *VAR_2)
{
 if ((VAR_2->type != VAR_0) &&
     (VAR_2->type != VAR_1))
  VAR_2->task = ((void*)0);

 if (!VAR_2->task)
  FUNC_1(VAR_2, ((void*)0));
 VAR_2->kern_name = ((void*)0);

 VAR_2->user = 1;
 FUNC_0(VAR_2);
}
