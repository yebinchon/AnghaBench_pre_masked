
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_restrack_root {int xa; } ;
struct ib_device {struct rdma_restrack_root* res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rdma_restrack_root* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *,int ) ;

int FUNC_2(struct ib_device *VAR_4)
{
 struct rdma_restrack_root *VAR_5;
 int VAR_6;

 VAR_4->res = FUNC_0(VAR_2, sizeof(*VAR_5), VAR_1);
 if (!VAR_4->res)
  return -VAR_0;

 VAR_5 = VAR_4->res;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_1(&VAR_5[VAR_6].xa, VAR_3);

 return 0;
}
