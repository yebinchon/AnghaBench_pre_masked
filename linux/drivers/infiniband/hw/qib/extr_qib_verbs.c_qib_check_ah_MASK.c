
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct rdma_ah_attr*) ;
 scalar_t__ FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (struct rdma_ah_attr*) ;

int FUNC_4(struct ib_device *VAR_4, struct rdma_ah_attr *VAR_5)
{
 if (FUNC_3(VAR_5) > 15)
  return -VAR_0;

 if (FUNC_2(VAR_5) == 0)
  return -VAR_0;
 if (FUNC_2(VAR_5) >=
  FUNC_0(VAR_3) &&
     FUNC_2(VAR_5) !=
  FUNC_0(VAR_2) &&
     !(FUNC_1(VAR_5) & VAR_1))
  return -VAR_0;

 return 0;
}
