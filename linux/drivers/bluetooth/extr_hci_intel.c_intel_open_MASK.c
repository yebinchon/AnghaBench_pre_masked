
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_data {int flags; struct hci_uart* hu; int busy_work; int txq; } ;
struct hci_uart {struct intel_data* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct hci_uart*) ;
 int VAR_4 ;
 int FUNC_3 (struct hci_uart*,int) ;
 struct intel_data* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct hci_uart *VAR_5)
{
 struct intel_data *VAR_6;

 FUNC_0("hu %p", VAR_5);

 if (!FUNC_2(VAR_5))
  return -VAR_1;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(&VAR_6->txq);
 FUNC_1(&VAR_6->busy_work, VAR_4);

 VAR_6->hu = VAR_5;

 VAR_5->priv = VAR_6;

 if (!FUNC_3(VAR_5, 1))
  FUNC_5(VAR_3, &VAR_6->flags);

 return 0;
}
