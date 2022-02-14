
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_data {int flags; } ;
struct hci_uart {int hdev; struct intel_data* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct hci_uart *VAR_4)
{
 struct intel_data *VAR_5 = VAR_4->priv;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5->flags, VAR_2,
      VAR_3,
      FUNC_1(1000));

 if (VAR_6 == -VAR_0) {
  FUNC_0(VAR_4->hdev, "Device boot interrupted");
  return -VAR_0;
 }

 if (VAR_6) {
  FUNC_0(VAR_4->hdev, "Device boot timeout");
  return -VAR_1;
 }

 return VAR_6;
}
