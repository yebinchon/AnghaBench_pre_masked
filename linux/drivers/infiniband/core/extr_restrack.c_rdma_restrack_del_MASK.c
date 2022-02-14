
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_restrack_root {int xa; } ;
struct rdma_restrack_entry {int valid; size_t type; int * task; int comp; int id; } ;
struct ib_device {struct rdma_restrack_root* res; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rdma_restrack_entry*) ;
 struct ib_device* FUNC_3 (struct rdma_restrack_entry*) ;
 int FUNC_4 (int *) ;
 struct rdma_restrack_entry* FUNC_5 (int *,int ) ;

void FUNC_6(struct rdma_restrack_entry *VAR_0)
{
 struct rdma_restrack_entry *VAR_1;
 struct rdma_restrack_root *VAR_2;
 struct ib_device *VAR_3;

 if (!VAR_0->valid)
  goto out;

 VAR_3 = FUNC_3(VAR_0);
 if (FUNC_0(!VAR_3))
  return;

 VAR_2 = &VAR_3->res[VAR_0->type];

 VAR_1 = FUNC_5(&VAR_2->xa, VAR_0->id);
 FUNC_0(VAR_1 != VAR_0);
 VAR_0->valid = 0;

 FUNC_2(VAR_0);
 FUNC_4(&VAR_0->comp);

out:
 if (VAR_0->task) {
  FUNC_1(VAR_0->task);
  VAR_0->task = ((void*)0);
 }
}
