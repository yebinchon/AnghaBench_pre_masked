
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssi_protocol {scalar_t__ main_state; int netdev; int lock; int tx_wd; int flags; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,char*) ;
 struct ssi_protocol* FUNC_4 (struct hsi_client*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hsi_client*,int ) ;
 int FUNC_10 (struct hsi_client*) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct hsi_client *VAR_4, u32 VAR_5)
{
 struct ssi_protocol *VAR_6 = FUNC_4(VAR_4);
 unsigned int VAR_7 = FUNC_0(VAR_5);

 FUNC_7(&VAR_6->lock);
 if (VAR_6->main_state != VAR_1) {
  FUNC_2(&VAR_4->device, "wake lines test ignored M(%d)\n",
       VAR_6->main_state);
  FUNC_8(&VAR_6->lock);
  return;
 }
 FUNC_8(&VAR_6->lock);

 if (FUNC_11(VAR_3, &VAR_6->flags))
  FUNC_9(VAR_4, 0);

 FUNC_7(&VAR_6->lock);
 VAR_6->main_state = VAR_0;
 FUNC_1(&VAR_6->tx_wd);
 FUNC_8(&VAR_6->lock);

 FUNC_3(&VAR_4->device, "WAKELINES TEST %s\n",
    VAR_7 & VAR_2 ? "FAILED" : "OK");
 if (VAR_7 & VAR_2) {
  FUNC_10(VAR_4);
  return;
 }
 FUNC_2(&VAR_4->device, "CMT is ONLINE\n");
 FUNC_6(VAR_6->netdev);
 FUNC_5(VAR_6->netdev);
}
