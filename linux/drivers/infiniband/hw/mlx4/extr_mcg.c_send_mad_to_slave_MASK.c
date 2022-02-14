
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int dummy; } ;
struct mlx4_ib_dev {int ib_dev; int * sm_ah; struct ib_mad_agent*** send_agent; } ;
struct mlx4_ib_demux_ctx {int port; struct mlx4_ib_dev* dev; } ;
struct ib_wc {int port_num; int src_qp; int slid; scalar_t__ dlid_path_bits; scalar_t__ sl; int pkey_index; } ;
struct ib_mad_agent {int dummy; } ;
struct ib_mad {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int,int ,int *) ;
 int FUNC_1 (struct mlx4_ib_dev*,int,int,int ,struct ib_wc*,int *,struct ib_mad*) ;
 int FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (int ,struct rdma_ah_attr*) ;

__attribute__((used)) static int FUNC_4(int VAR_4, struct mlx4_ib_demux_ctx *VAR_5,
        struct ib_mad *VAR_6)
{
 struct mlx4_ib_dev *VAR_7 = VAR_5->dev;
 struct ib_mad_agent *VAR_8 = VAR_7->send_agent[VAR_5->port - 1][1];
 struct ib_wc VAR_9;
 struct rdma_ah_attr VAR_10;


 if (!VAR_8)
  return -VAR_0;

 FUNC_3(VAR_7->sm_ah[VAR_5->port - 1], &VAR_10);

 if (FUNC_0(&VAR_7->ib_dev, VAR_5->port, VAR_2, &VAR_9.pkey_index))
  return -VAR_1;
 VAR_9.sl = 0;
 VAR_9.dlid_path_bits = 0;
 VAR_9.port_num = VAR_5->port;
 VAR_9.slid = FUNC_2(&VAR_10);
 VAR_9.src_qp = 1;
 return FUNC_1(VAR_7, VAR_4, VAR_5->port, VAR_3, &VAR_9, ((void*)0), VAR_6);
}
