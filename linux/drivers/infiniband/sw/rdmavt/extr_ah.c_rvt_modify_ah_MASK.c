
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct rvt_ah {struct rdma_ah_attr attr; } ;
struct ib_ah {int device; } ;


 int VAR_0 ;
 struct rvt_ah* FUNC_0 (struct ib_ah*) ;
 scalar_t__ FUNC_1 (int ,struct rdma_ah_attr*) ;

int FUNC_2(struct ib_ah *VAR_1, struct rdma_ah_attr *VAR_2)
{
 struct rvt_ah *VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_1->device, VAR_2))
  return -VAR_0;

 VAR_3->attr = *VAR_2;

 return 0;
}
