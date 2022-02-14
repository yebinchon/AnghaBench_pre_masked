
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct bluecard_info {int timer; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (int *) ;
 struct bluecard_info* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct hci_dev *VAR_0)
{
 struct bluecard_info *VAR_1 = FUNC_2(VAR_0);
 unsigned int VAR_2 = VAR_1->p_dev->resource[0]->start;

 FUNC_0(VAR_0);


 FUNC_1(&(VAR_1->timer));


 FUNC_3(0x00, VAR_2 + 0x30);

 return 0;
}
