
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct hns_roce_dev {TYPE_1__* hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* chk_mbox ) (struct hns_roce_dev*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct hns_roce_dev*,int ,int ,unsigned long,int ,int ,int ,int ) ;
 int FUNC_2 (struct hns_roce_dev*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1, u64 VAR_2,
        u64 VAR_3, unsigned long VAR_4,
        u8 VAR_5, u16 VAR_6,
        unsigned long VAR_7)
{
 struct device *VAR_8 = VAR_1->dev;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3,
     VAR_4, VAR_5, VAR_6,
     VAR_0, 0);
 if (VAR_9) {
  FUNC_0(VAR_8, "[cmd_poll]hns_roce_cmd_mbox_post_hw failed\n");
  return VAR_9;
 }

 return VAR_1->hw->chk_mbox(VAR_1, VAR_7);
}
