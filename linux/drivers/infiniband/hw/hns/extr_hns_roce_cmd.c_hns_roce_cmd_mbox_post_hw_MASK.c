
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_cmdq {int hcr_mutex; } ;
struct hns_roce_dev {TYPE_1__* hw; struct hns_roce_cmdq cmd; } ;
struct TYPE_2__ {int (* post_mbox ) (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hns_roce_dev*,int ,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_0, u64 VAR_1,
         u64 VAR_2, u32 VAR_3,
         u8 VAR_4, u16 VAR_5, u16 VAR_6,
         int VAR_7)
{
 struct hns_roce_cmdq *VAR_8 = &VAR_0->cmd;
 int VAR_9;

 FUNC_0(&VAR_8->hcr_mutex);
 VAR_9 = VAR_0->hw->post_mbox(VAR_0, VAR_1, VAR_2, VAR_3,
        VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_1(&VAR_8->hcr_mutex);

 return VAR_9;
}
