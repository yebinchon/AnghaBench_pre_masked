
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ll_struct {int txq; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_2 (int,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(u8 VAR_2, struct hci_uart *VAR_3)
{
 int VAR_4 = 0;
 struct sk_buff *VAR_5 = ((void*)0);
 struct ll_struct *VAR_6 = VAR_3->priv;

 FUNC_0("hu %p cmd 0x%x", VAR_3, VAR_2);


 VAR_5 = FUNC_2(1, VAR_1);
 if (!VAR_5) {
  FUNC_1("cannot allocate memory for HCILL packet");
  VAR_4 = -VAR_0;
  goto out;
 }


 FUNC_3(VAR_5, VAR_2);


 FUNC_4(&VAR_6->txq, VAR_5);
out:
 return VAR_4;
}
