
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_qp {int reg_id; int ibqp; int port; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_flow_spec_ib {int size; int mask; int type; } ;
struct ib_flow_attr {int num_of_specs; size_t size; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct ib_flow_attr*,int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ib_flow_attr*) ;
 struct ib_flow_attr* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *,int ,int) ;

int FUNC_5(struct mlx4_ib_dev *VAR_5, struct mlx4_ib_qp *VAR_6,
    int VAR_7)
{
 int VAR_8;
 size_t VAR_9;
 struct ib_flow_attr *VAR_10 = ((void*)0);
 struct ib_flow_spec_ib *VAR_11;

 if (VAR_7) {
  VAR_9 = sizeof(struct ib_flow_attr) +
       sizeof(struct ib_flow_spec_ib);
  VAR_10 = FUNC_3(VAR_9, VAR_1);
  if (!VAR_10)
   return -VAR_0;
  VAR_10->port = VAR_6->port;
  VAR_10->num_of_specs = 1;
  VAR_10->size = VAR_9;
  VAR_11 = (struct ib_flow_spec_ib *)(VAR_10 + 1);
  VAR_11->type = VAR_3;
  VAR_11->size = sizeof(struct ib_flow_spec_ib);

  FUNC_4(&VAR_11->mask, 0, sizeof(VAR_11->mask));

  VAR_8 = FUNC_0(&VAR_6->ibqp, VAR_10,
         VAR_2,
         VAR_4,
         &VAR_6->reg_id);
 } else {
  VAR_8 = FUNC_1(VAR_5->dev, VAR_6->reg_id);
 }
 FUNC_2(VAR_10);
 return VAR_8;
}
