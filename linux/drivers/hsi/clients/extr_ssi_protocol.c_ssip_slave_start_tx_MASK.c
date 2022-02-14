
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {scalar_t__ send_state; int tx_usecnt; int lock; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ssi_protocol* FUNC_3 (struct hsi_client*) ;
 int FUNC_4 (struct hsi_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ssi_protocol*,int ) ;

int FUNC_8(struct hsi_client *VAR_2)
{
 struct ssi_protocol *VAR_3 = FUNC_3(VAR_2);

 FUNC_2(&VAR_2->device, "start TX %d\n", FUNC_1(&VAR_3->tx_usecnt));
 FUNC_5(&VAR_3->lock);
 if (VAR_3->send_state == VAR_0) {
  FUNC_7(VAR_3, VAR_1);
  FUNC_4(VAR_2);
 }
 FUNC_6(&VAR_3->lock);
 FUNC_0(&VAR_3->tx_usecnt);

 return 0;
}
