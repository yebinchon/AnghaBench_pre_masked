
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int port_num; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

bool FUNC_3(struct rdma_cm_id *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2->device, VAR_2->port_num))
  return VAR_3 == VAR_1;

 if (FUNC_2(VAR_2->device, VAR_2->port_num))
  return VAR_3 == -VAR_0;

 FUNC_0(1);
 return 0;
}
