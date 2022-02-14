
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ud_param {int qkey; int qp_num; int ah_attr; scalar_t__ private_data_len; int private_data; } ;
struct rdma_ucm_ud_param {int qkey; int qp_num; int ah_attr; scalar_t__ private_data_len; int private_data; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int *,int *) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ib_device *VAR_0,
          struct rdma_ucm_ud_param *VAR_1,
          struct rdma_ud_param *VAR_2)
{
 if (VAR_2->private_data_len)
  FUNC_1(VAR_1->private_data, VAR_2->private_data,
         VAR_2->private_data_len);
 VAR_1->private_data_len = VAR_2->private_data_len;
 FUNC_0(VAR_0, &VAR_1->ah_attr, &VAR_2->ah_attr);
 VAR_1->qp_num = VAR_2->qp_num;
 VAR_1->qkey = VAR_2->qkey;
}
