
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_gid_attr {scalar_t__ port_num; int gid; int index; int device; } ;
struct TYPE_3__ {scalar_t__ num_ports; } ;
struct hns_roce_dev {TYPE_2__* hw; TYPE_1__ caps; } ;
struct TYPE_4__ {int (* set_gid ) (struct hns_roce_dev*,scalar_t__,int ,int *,struct ib_gid_attr const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,scalar_t__,int ,int *,struct ib_gid_attr const*) ;
 struct hns_roce_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct ib_gid_attr *VAR_1, void **VAR_2)
{
 struct hns_roce_dev *VAR_3 = FUNC_1(VAR_1->device);
 u8 VAR_4 = VAR_1->port_num - 1;
 int VAR_5;

 if (VAR_4 >= VAR_3->caps.num_ports)
  return -VAR_0;

 VAR_5 = VAR_3->hw->set_gid(VAR_3, VAR_4, VAR_1->index, &VAR_1->gid, VAR_1);

 return VAR_5;
}
