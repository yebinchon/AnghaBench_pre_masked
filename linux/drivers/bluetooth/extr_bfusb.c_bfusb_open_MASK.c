
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_dev {int dummy; } ;
struct bfusb_data {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_dev*,struct bfusb_data*) ;
 int FUNC_1 (struct bfusb_data*,int *) ;
 struct bfusb_data* FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct hci_dev *VAR_1)
{
 struct bfusb_data *VAR_2 = FUNC_2(VAR_1);
 unsigned long VAR_3;
 int VAR_4, VAR_5;

 FUNC_0("hdev %p bfusb %p", VAR_1, VAR_2);

 FUNC_3(&VAR_2->lock, VAR_3);

 VAR_5 = FUNC_1(VAR_2, ((void*)0));
 if (!VAR_5) {
  for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(VAR_2, ((void*)0));
 }

 FUNC_4(&VAR_2->lock, VAR_3);

 return VAR_5;
}
