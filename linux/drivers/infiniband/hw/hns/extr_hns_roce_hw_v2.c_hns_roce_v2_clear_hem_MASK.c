
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hns_roce_hem_table {int type; } ;
struct hns_roce_dev {struct device* dev; } ;
struct hns_roce_cmd_mailbox {int dma; } ;
struct device {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_1 (struct hns_roce_cmd_mailbox*) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct hns_roce_cmd_mailbox* FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*,int) ;
 int FUNC_5 (struct hns_roce_dev*,int ,int ,int,int ,int,int ) ;
 int FUNC_6 (struct hns_roce_dev*,struct hns_roce_cmd_mailbox*) ;

__attribute__((used)) static int FUNC_7(struct hns_roce_dev *VAR_5,
     struct hns_roce_hem_table *VAR_6, int VAR_7,
     int VAR_8)
{
 struct device *VAR_9 = VAR_5->dev;
 struct hns_roce_cmd_mailbox *VAR_10;
 int VAR_11;
 u16 VAR_12 = 0xff;

 if (!FUNC_4(VAR_5, VAR_6->type))
  return 0;

 switch (VAR_6->type) {
 case 131:
  VAR_12 = VAR_2;
  break;
 case 132:
  VAR_12 = VAR_1;
  break;
 case 134:
  VAR_12 = VAR_0;
  break;
 case 129:
 case 130:
 case 133:
  break;
 case 128:
  VAR_12 = VAR_3;
  break;
 default:
  FUNC_2(VAR_9, "Table %d not to be destroyed by mailbox!\n",
    VAR_6->type);
  return 0;
 }

 if (VAR_6->type == 129 ||
     VAR_6->type == 130 ||
     VAR_6->type == 133)
  return 0;

 VAR_12 += VAR_8;

 VAR_10 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);


 VAR_11 = FUNC_5(VAR_5, 0, VAR_10->dma, VAR_7, 0, VAR_12,
    VAR_4);

 FUNC_6(VAR_5, VAR_10);
 return VAR_11;
}
