
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {scalar_t__ send_state; int tx_usecnt; int lock; } ;
struct hsi_client {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 struct ssi_protocol* FUNC_4 (struct hsi_client*) ;
 int FUNC_5 (struct hsi_client*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ssi_protocol*,int ) ;

int FUNC_9(struct hsi_client *VAR_3)
{
 struct ssi_protocol *VAR_4 = FUNC_4(VAR_3);

 FUNC_0(FUNC_2(&VAR_4->tx_usecnt) == 0);

 if (FUNC_1(&VAR_4->tx_usecnt)) {
  FUNC_6(&VAR_4->lock);
  if ((VAR_4->send_state == VAR_1) ||
   (VAR_4->send_state == VAR_2)) {
   FUNC_8(VAR_4, VAR_0);
   FUNC_5(VAR_3);
  }
  FUNC_7(&VAR_4->lock);
 }
 FUNC_3(&VAR_3->device, "stop TX %d\n", FUNC_2(&VAR_4->tx_usecnt));

 return 0;
}
