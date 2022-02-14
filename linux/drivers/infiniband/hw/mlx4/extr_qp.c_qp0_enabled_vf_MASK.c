
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_ports; TYPE_1__* spec_qps; } ;
struct mlx4_dev {TYPE_2__ caps; } ;
struct TYPE_3__ {int qp0_proxy; int qp0_qkey; } ;



__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_0, int VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0->caps.num_ports; VAR_2++) {
  if (VAR_1 == VAR_0->caps.spec_qps[VAR_2].qp0_proxy)
   return !!VAR_0->caps.spec_qps[VAR_2].qp0_qkey;
 }
 return 0;
}
