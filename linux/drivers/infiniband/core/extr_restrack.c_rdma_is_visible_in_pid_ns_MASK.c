
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_restrack_entry {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rdma_restrack_entry*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(struct rdma_restrack_entry *VAR_2)
{






 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_0) == &VAR_1;


 return FUNC_2(VAR_2->task);
}
