
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sync ;
struct hci_uart {int hdev_flags; struct h5* priv; scalar_t__ serdev; } ;
struct h5 {int timer; TYPE_1__* vnd; int tx_win; int unrel; int rel; int unack; struct hci_uart* hu; } ;
struct TYPE_2__ {int (* open ) (struct h5*) ;} ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_uart*,unsigned char const*,int) ;
 int FUNC_2 (struct h5*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct h5* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 struct h5* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct h5*) ;
 int FUNC_9 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct hci_uart *VAR_7)
{
 struct h5 *VAR_8;
 const unsigned char VAR_9[] = { 0x01, 0x7e };

 FUNC_0("hu %p", VAR_7);

 if (VAR_7->serdev) {
  VAR_8 = FUNC_5(VAR_7->serdev);
 } else {
  VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return -VAR_0;
 }

 VAR_7->priv = VAR_8;
 VAR_8->hu = VAR_7;

 FUNC_7(&VAR_8->unack);
 FUNC_7(&VAR_8->rel);
 FUNC_7(&VAR_8->unrel);

 FUNC_2(VAR_8);

 FUNC_9(&VAR_8->timer, VAR_5, 0);

 VAR_8->tx_win = VAR_3;

 if (VAR_8->vnd && VAR_8->vnd->open)
  VAR_8->vnd->open(VAR_8);

 FUNC_6(VAR_4, &VAR_7->hdev_flags);


 FUNC_1(VAR_7, VAR_9, sizeof(VAR_9));
 FUNC_4(&VAR_8->timer, VAR_6 + VAR_2);

 return 0;
}
