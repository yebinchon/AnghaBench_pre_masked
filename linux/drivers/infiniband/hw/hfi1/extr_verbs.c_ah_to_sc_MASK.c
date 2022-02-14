
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rdma_ah_attr {int dummy; } ;
struct ib_device {int dummy; } ;
struct hfi1_ibport {int * sl_to_sc; } ;


 int FUNC_0 (struct rdma_ah_attr*) ;
 size_t FUNC_1 (struct rdma_ah_attr*) ;
 struct hfi1_ibport* FUNC_2 (struct ib_device*,int ) ;

u8 FUNC_3(struct ib_device *VAR_0, struct rdma_ah_attr *VAR_1)
{
 struct hfi1_ibport *VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_1));

 return VAR_2->sl_to_sc[FUNC_1(VAR_1)];
}
