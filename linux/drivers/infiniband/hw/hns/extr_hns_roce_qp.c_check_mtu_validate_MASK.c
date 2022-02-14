
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_qp_attr {int port_num; scalar_t__ path_mtu; } ;
struct hns_roce_qp {int port; } ;
struct TYPE_6__ {scalar_t__ max_mtu; } ;
struct TYPE_5__ {TYPE_1__** netdevs; } ;
struct hns_roce_dev {int ib_dev; TYPE_3__ caps; TYPE_2__ iboe; } ;
typedef enum ib_mtu { ____Placeholder_ib_mtu } ib_mtu ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct hns_roce_dev *VAR_4,
         struct hns_roce_qp *VAR_5,
         struct ib_qp_attr *VAR_6, int VAR_7)
{
 enum ib_mtu VAR_8;
 int VAR_9;

 VAR_9 = VAR_7 & VAR_3 ? (VAR_6->port_num - 1) : VAR_5->port;
 VAR_8 = FUNC_1(VAR_4->iboe.netdevs[VAR_9]->mtu);

 if ((VAR_4->caps.max_mtu >= VAR_1 &&
     VAR_6->path_mtu > VAR_4->caps.max_mtu) ||
     VAR_6->path_mtu < VAR_2 || VAR_6->path_mtu > VAR_8) {
  FUNC_0(&VAR_4->ib_dev,
   "attr path_mtu(%d)invalid while modify qp",
   VAR_6->path_mtu);
  return -VAR_0;
 }

 return 0;
}
