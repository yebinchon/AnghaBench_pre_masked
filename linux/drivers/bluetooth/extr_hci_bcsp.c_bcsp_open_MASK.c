
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_uart {struct bcsp_struct* priv; } ;
struct bcsp_struct {int use_crc; int rx_state; int tbcsp; int unrel; int rel; int unack; struct hci_uart* hu; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bcsp_struct* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_4(struct hci_uart *VAR_5)
{
 struct bcsp_struct *VAR_6;

 FUNC_0("hu %p", VAR_5);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->priv = VAR_6;
 VAR_6->hu = VAR_5;
 FUNC_2(&VAR_6->unack);
 FUNC_2(&VAR_6->rel);
 FUNC_2(&VAR_6->unrel);

 FUNC_3(&VAR_6->tbcsp, VAR_3, 0);

 VAR_6->rx_state = VAR_0;

 if (VAR_4)
  VAR_6->use_crc = 1;

 return 0;
}
