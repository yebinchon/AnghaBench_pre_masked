
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_iov_port {int mcgs_parent; } ;
struct mlx4_ib_dev {struct mlx4_ib_iov_port* iov_ports; } ;
struct attribute {int name; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct attribute*) ;

int FUNC_2(struct mlx4_ib_dev *VAR_0, int VAR_1,
  struct attribute *VAR_2)
{
 struct mlx4_ib_iov_port *VAR_3 = &VAR_0->iov_ports[VAR_1 - 1];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->mcgs_parent, VAR_2);
 if (VAR_4)
  FUNC_0("failed to create %s\n", VAR_2->name);

 return VAR_4;
}
