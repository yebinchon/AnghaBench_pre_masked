
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hci_dev {int dummy; } ;
struct dtl1_info {int lock; struct hci_dev* hdev; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct dtl1_info *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5 = VAR_3->p_dev->resource[0]->start;
 struct hci_dev *VAR_6 = VAR_3->hdev;

 if (!VAR_6)
  return -VAR_0;

 FUNC_0(VAR_6);

 FUNC_4(&(VAR_3->lock), VAR_4);


 FUNC_3(0, VAR_5 + VAR_2);


 FUNC_3(0, VAR_5 + VAR_1);

 FUNC_5(&(VAR_3->lock), VAR_4);

 FUNC_2(VAR_6);
 FUNC_1(VAR_6);

 return 0;
}
