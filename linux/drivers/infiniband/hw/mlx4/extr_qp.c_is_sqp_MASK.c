
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ qpn; } ;
struct mlx4_ib_qp {int flags; TYPE_2__ mqp; } ;
struct mlx4_ib_dev {TYPE_5__* dev; } ;
struct TYPE_10__ {int num_ports; TYPE_3__* spec_qps; } ;
struct TYPE_7__ {scalar_t__ base_sqpn; } ;
struct TYPE_11__ {TYPE_4__ caps; TYPE_1__ phys_caps; } ;
struct TYPE_9__ {scalar_t__ qp0_proxy; scalar_t__ qp1_proxy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_ib_dev *VAR_1, struct mlx4_ib_qp *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = 0;
 int VAR_5;

 VAR_4 = ((FUNC_0(VAR_1->dev) || !FUNC_1(VAR_1->dev)) &&
      VAR_2->mqp.qpn >= VAR_1->dev->phys_caps.base_sqpn &&
      VAR_2->mqp.qpn <= VAR_1->dev->phys_caps.base_sqpn + 3);
 if (VAR_4)
  return 1;

 if (FUNC_1(VAR_1->dev)) {
  for (VAR_5 = 0; VAR_5 < VAR_1->dev->caps.num_ports; VAR_5++) {
   if (VAR_2->mqp.qpn == VAR_1->dev->caps.spec_qps[VAR_5].qp0_proxy ||
       VAR_2->mqp.qpn == VAR_1->dev->caps.spec_qps[VAR_5].qp1_proxy) {
    VAR_3 = 1;
    break;
   }
  }
 }
 if (VAR_3)
  return 1;

 return !!(VAR_2->flags & VAR_0);
}
