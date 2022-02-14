
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int netdev; int lock; int tx_usecnt; int txqueue; } ;
struct hsi_msg {struct hsi_client* cl; } ;
struct hsi_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 int FUNC_2 (struct hsi_client*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct hsi_msg*) ;
 int FUNC_8 (struct ssi_protocol*,int ) ;
 int FUNC_9 (struct hsi_client*) ;

__attribute__((used)) static void FUNC_10(struct hsi_msg *VAR_2)
{
 struct hsi_client *VAR_3 = VAR_2->cl;
 struct ssi_protocol *VAR_4 = FUNC_1(VAR_3);

 FUNC_7(VAR_2);
 FUNC_5(&VAR_4->lock);
 if (FUNC_3(&VAR_4->txqueue)) {
  if (FUNC_0(&VAR_4->tx_usecnt)) {
   FUNC_8(VAR_4, VAR_1);
  } else {
   FUNC_8(VAR_4, VAR_0);
   FUNC_2(VAR_3);
  }
  FUNC_6(&VAR_4->lock);
 } else {
  FUNC_6(&VAR_4->lock);
  FUNC_9(VAR_3);
 }
 FUNC_4(VAR_4->netdev);
}
