
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_id_private {int dummy; } ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct rdma_id_private*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (struct rdma_id_private*) ;
 int FUNC_4 (struct rdma_id_private*) ;
 int FUNC_5 (struct rdma_id_private*) ;
 int FUNC_6 (int,struct rdma_id_private*) ;
 int VAR_2 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rdma_id_private *VAR_3)
{
 enum rdma_ucm_port_space VAR_4;
 int VAR_5;

 if (FUNC_2(VAR_3) != VAR_0)
  VAR_4 = FUNC_4(VAR_3);
 else
  VAR_4 = FUNC_3(VAR_3);
 if (!VAR_4)
  return -VAR_1;

 FUNC_7(&VAR_2);
 if (FUNC_1(FUNC_5(VAR_3)))
  VAR_5 = FUNC_0(VAR_4, VAR_3);
 else
  VAR_5 = FUNC_6(VAR_4, VAR_3);
 FUNC_8(&VAR_2);

 return VAR_5;
}
