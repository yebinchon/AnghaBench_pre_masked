
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrvl_data {int flags; int rawq; int txq; } ;
struct hci_uart {scalar_t__ serdev; struct mrvl_data* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct hci_uart*) ;
 int FUNC_2 (struct mrvl_data*) ;
 struct mrvl_data* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hci_uart *VAR_4)
{
 struct mrvl_data *VAR_5;
 int VAR_6;

 FUNC_0("hu %p", VAR_4);

 if (!FUNC_1(VAR_4))
  return -VAR_1;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_5->txq);
 FUNC_6(&VAR_5->rawq);

 FUNC_5(VAR_3, &VAR_5->flags);

 VAR_4->priv = VAR_5;

 if (VAR_4->serdev) {
  VAR_6 = FUNC_4(VAR_4->serdev);
  if (VAR_6)
   goto err;
 }

 return 0;
err:
 FUNC_2(VAR_5);

 return VAR_6;
}
