
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct bluecard_info {int ctrl_reg; int hw_state; struct hci_dev* hdev; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct bluecard_info *VAR_5)
{
 unsigned int VAR_6 = VAR_5->p_dev->resource[0]->start;
 struct hci_dev *VAR_7 = VAR_5->hdev;

 if (!VAR_7)
  return -VAR_1;

 FUNC_0(VAR_7);

 FUNC_1(VAR_0, &(VAR_5->hw_state));


 VAR_5->ctrl_reg = VAR_3 | VAR_4;
 FUNC_4(VAR_5->ctrl_reg, VAR_6 + VAR_2);


 FUNC_4(0x80, VAR_6 + 0x30);

 FUNC_3(VAR_7);
 FUNC_2(VAR_7);

 return 0;
}
