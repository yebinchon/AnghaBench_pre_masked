
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {int lock; int txqueue; } ;
struct hsi_msg {scalar_t__ status; int complete; struct hsi_client* cl; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_3 (struct hsi_client*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hsi_msg* FUNC_7 (struct ssi_protocol*) ;
 int FUNC_8 (struct hsi_client*) ;
 int FUNC_9 (struct hsi_msg*) ;
 int FUNC_10 (struct hsi_msg*,int ) ;
 int FUNC_11 (struct ssi_protocol*,int ) ;
 int VAR_3 ;
 int FUNC_12 (struct hsi_client*) ;

__attribute__((used)) static void FUNC_13(struct hsi_msg *VAR_4)
{
 struct hsi_client *VAR_5 = VAR_4->cl;
 struct ssi_protocol *VAR_6 = FUNC_3(VAR_5);
 struct hsi_msg *VAR_7;

 if (VAR_4->status == VAR_0) {
  FUNC_1(&VAR_5->device, "TX data error\n");
  FUNC_8(VAR_5);
  goto out;
 }
 FUNC_5(&VAR_6->lock);
 if (FUNC_4(&VAR_6->txqueue)) {
  FUNC_11(VAR_6, VAR_1);
  FUNC_6(&VAR_6->lock);
  VAR_7 = FUNC_7(VAR_6);
  FUNC_10(VAR_7, VAR_2);
  VAR_7->complete = VAR_3;
  FUNC_0(&VAR_5->device, "Send SWBREAK\n");
  FUNC_2(VAR_5, VAR_7);
 } else {
  FUNC_6(&VAR_6->lock);
  FUNC_12(VAR_5);
 }
out:
 FUNC_9(VAR_4);
}
