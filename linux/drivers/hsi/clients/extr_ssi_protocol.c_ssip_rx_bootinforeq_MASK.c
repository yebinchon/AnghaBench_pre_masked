
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ssi_protocol {int main_state; int lock; int tx_wd; int flags; } ;
struct hsi_msg {int complete; } ;
struct hsi_client {int device; } ;





 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_6 (struct hsi_client*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hsi_client*,int) ;
 struct hsi_msg* FUNC_12 (struct ssi_protocol*) ;
 int FUNC_13 (struct hsi_client*) ;
 int VAR_5 ;
 int FUNC_14 (struct hsi_msg*,int ) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct hsi_client *VAR_6, u32 VAR_7)
{
 struct ssi_protocol *VAR_8 = FUNC_6(VAR_6);
 struct hsi_msg *VAR_9;


 if (VAR_7 == VAR_0)
  return;

 switch (VAR_8->main_state) {
 case 130:
  FUNC_3(&VAR_6->device, "Boot info req on active state\n");
  FUNC_13(VAR_6);

 case 128:
 case 129:
  FUNC_9(&VAR_8->lock);
  VAR_8->main_state = 129;
  FUNC_10(&VAR_8->lock);

  if (!FUNC_15(VAR_2, &VAR_8->flags))
   FUNC_11(VAR_6, 1);

  FUNC_9(&VAR_8->lock);

  FUNC_7(&VAR_8->tx_wd, VAR_4 + FUNC_8(VAR_3));
  FUNC_10(&VAR_8->lock);
  FUNC_2(&VAR_6->device, "Send BOOTINFO_RESP\n");
  if (FUNC_1(VAR_7) != VAR_1)
   FUNC_4(&VAR_6->device, "boot info req verid mismatch\n");
  VAR_9 = FUNC_12(VAR_8);
  FUNC_14(VAR_9, FUNC_0(VAR_1));
  VAR_9->complete = VAR_5;
  FUNC_5(VAR_6, VAR_9);
  break;
 default:
  FUNC_2(&VAR_6->device, "Wrong state M(%d)\n", VAR_8->main_state);
  break;
 }
}
