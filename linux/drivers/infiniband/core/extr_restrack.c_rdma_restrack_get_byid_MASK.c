
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_restrack_root {int xa; } ;
struct rdma_restrack_entry {int dummy; } ;
struct ib_device {struct rdma_restrack_root* res; } ;
typedef enum rdma_restrack_type { ____Placeholder_rdma_restrack_type } rdma_restrack_type ;


 int VAR_0 ;
 struct rdma_restrack_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_restrack_entry*) ;
 struct rdma_restrack_entry* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct rdma_restrack_entry *
FUNC_5(struct ib_device *VAR_1,
         enum rdma_restrack_type VAR_2, u32 VAR_3)
{
 struct rdma_restrack_root *VAR_4 = &VAR_1->res[VAR_2];
 struct rdma_restrack_entry *VAR_5;

 FUNC_3(&VAR_4->xa);
 VAR_5 = FUNC_2(&VAR_4->xa, VAR_3);
 if (!VAR_5 || !FUNC_1(VAR_5))
  VAR_5 = FUNC_0(-VAR_0);
 FUNC_4(&VAR_4->xa);

 return VAR_5;
}
