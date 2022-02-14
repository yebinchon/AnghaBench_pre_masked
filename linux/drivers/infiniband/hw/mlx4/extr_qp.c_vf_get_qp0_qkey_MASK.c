
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_ports; TYPE_2__* spec_qps; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int qp0_proxy; int qp0_tunnel; int qp0_qkey; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx4_dev *VAR_1, int VAR_2, u32 *VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < VAR_1->caps.num_ports; VAR_4++) {
  if (VAR_2 == VAR_1->caps.spec_qps[VAR_4].qp0_proxy ||
      VAR_2 == VAR_1->caps.spec_qps[VAR_4].qp0_tunnel) {
   *VAR_3 = VAR_1->caps.spec_qps[VAR_4].qp0_qkey;
   return 0;
  }
 }
 return -VAR_0;
}
