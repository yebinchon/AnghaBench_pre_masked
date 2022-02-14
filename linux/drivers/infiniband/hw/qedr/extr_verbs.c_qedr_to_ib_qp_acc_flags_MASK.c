
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_rdma_query_qp_out_params {scalar_t__ incoming_atomic_en; scalar_t__ incoming_rdma_read_en; scalar_t__ incoming_rdma_write_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct qed_rdma_query_qp_out_params *VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4->incoming_rdma_write_en)
  VAR_5 |= VAR_3;
 if (VAR_4->incoming_rdma_read_en)
  VAR_5 |= VAR_2;
 if (VAR_4->incoming_atomic_en)
  VAR_5 |= VAR_1;
 VAR_5 |= VAR_0;
 return VAR_5;
}
