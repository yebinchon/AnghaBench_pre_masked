
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int port_num; int type; } ;
struct ib_port_attr {int subnet_prefix; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_3 (struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*,int *,int ,int ,int,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;

__attribute__((used)) static int FUNC_7(struct ib_device *VAR_3,
      struct rdma_ah_attr *VAR_4,
      struct rdma_ah_attr *VAR_5)
{
 struct ib_port_attr VAR_6;
 int VAR_7 = 0;


 *VAR_4 = *VAR_5;

 VAR_4->type = VAR_2;
 FUNC_4(VAR_4, ((void*)0), 0, 0, 1, 0);

 if (FUNC_2(VAR_3, VAR_5->port_num, &VAR_6)) {

  FUNC_6(VAR_4, VAR_1);
  VAR_7 = -VAR_0;
 } else {
  FUNC_6(VAR_4,
       FUNC_1(VAR_6.subnet_prefix));
 }
 FUNC_5(VAR_4, FUNC_0(FUNC_3(VAR_5)));
 return VAR_7;
}
