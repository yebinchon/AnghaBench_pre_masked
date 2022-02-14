
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {int port_num; struct ib_device* device; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int const) ;
 int FUNC_1 (struct ib_device*) ;

__attribute__((used)) static bool FUNC_2(const struct rdma_cm_id *VAR_0)
{
 struct ib_device *VAR_1 = VAR_0->device;
 const int VAR_2 = VAR_0->port_num ?: FUNC_1(VAR_1);

 return FUNC_0(VAR_1, VAR_2);
}
