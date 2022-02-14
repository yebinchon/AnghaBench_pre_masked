
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmd_mailbox {int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hns_roce_dev*,int ,int ,unsigned long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_2,
         struct hns_roce_cmd_mailbox *VAR_3,
         unsigned long VAR_4)
{
 return FUNC_0(VAR_2, VAR_3->dma, 0, VAR_4, 0,
     VAR_0,
     VAR_1);
}
