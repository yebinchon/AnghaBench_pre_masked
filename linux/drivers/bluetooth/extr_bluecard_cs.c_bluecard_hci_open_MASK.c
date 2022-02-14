
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct bluecard_info {int hw_state; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hci_dev*,int ) ;
 struct bluecard_info* FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int,unsigned int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_2)
{
 struct bluecard_info *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = VAR_3->p_dev->resource[0]->start;

 if (FUNC_3(VAR_0, &(VAR_3->hw_state)))
  FUNC_0(VAR_2, VAR_1);


 FUNC_2(0x08 | 0x20, VAR_4 + 0x30);

 return 0;
}
