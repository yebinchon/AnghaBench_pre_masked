
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_iov_port {int mcgs_parent; } ;
struct mlx4_ib_dev {struct mlx4_ib_iov_port* iov_ports; } ;
struct attribute {int dummy; } ;


 int FUNC_0 (int ,struct attribute*) ;

void FUNC_1(struct mlx4_ib_dev *VAR_0, int VAR_1,
  struct attribute *VAR_2)
{
 struct mlx4_ib_iov_port *VAR_3 = &VAR_0->iov_ports[VAR_1 - 1];

 FUNC_0(VAR_3->mcgs_parent, VAR_2);
}
