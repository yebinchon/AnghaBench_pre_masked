
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_gid_attr {scalar_t__ port_num; int index; int device; } ;
struct TYPE_3__ {scalar_t__ num_ports; } ;
struct hns_roce_dev {TYPE_2__* hw; TYPE_1__ caps; } ;
struct TYPE_4__ {int (* set_gid ) (struct hns_roce_dev*,scalar_t__,int ,int *,struct ib_gid_attr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,scalar_t__,int ,int *,struct ib_gid_attr*) ;
 struct hns_roce_dev* FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(const struct ib_gid_attr *VAR_2, void **VAR_3)
{
 struct hns_roce_dev *VAR_4 = FUNC_1(VAR_2->device);
 struct ib_gid_attr VAR_5 = { };
 u8 VAR_6 = VAR_2->port_num - 1;
 int VAR_7;

 if (VAR_6 >= VAR_4->caps.num_ports)
  return -VAR_0;

 VAR_7 = VAR_4->hw->set_gid(VAR_4, VAR_6, VAR_2->index, &VAR_1, &VAR_5);

 return VAR_7;
}
