
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_sq {int * doorbell; int * sq; } ;
struct mlx5_ib_rq {int * doorbell; int * rq; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_rq rq; struct mlx5_ib_sq sq; } ;
struct mlx5_ib_qp {int db; int rq; int sq; } ;



__attribute__((used)) static void FUNC_0(struct mlx5_ib_qp *VAR_0,
        struct mlx5_ib_raw_packet_qp *VAR_1)
{
 struct mlx5_ib_sq *VAR_2 = &VAR_1->sq;
 struct mlx5_ib_rq *VAR_3 = &VAR_1->rq;

 VAR_2->sq = &VAR_0->sq;
 VAR_3->rq = &VAR_0->rq;
 VAR_2->doorbell = &VAR_0->db;
 VAR_3->doorbell = &VAR_0->db;
}
