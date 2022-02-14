
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct rvt_ah {struct rdma_ah_attr attr; } ;
struct ib_ah {int dummy; } ;


 struct rvt_ah* FUNC_0 (struct ib_ah*) ;

int FUNC_1(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1)
{
 struct rvt_ah *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->attr;

 return 0;
}
