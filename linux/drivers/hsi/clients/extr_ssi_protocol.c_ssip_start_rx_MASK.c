
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {scalar_t__ main_state; scalar_t__ recv_state; int lock; } ;
struct hsi_msg {int complete; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct hsi_client*,struct hsi_msg*) ;
 struct ssi_protocol* FUNC_2 (struct hsi_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct hsi_msg* FUNC_5 (struct ssi_protocol*) ;
 int VAR_3 ;
 int FUNC_6 (struct hsi_msg*,int ) ;
 int FUNC_7 (struct ssi_protocol*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct hsi_client *VAR_4)
{
 struct ssi_protocol *VAR_5 = FUNC_2(VAR_4);
 struct hsi_msg *VAR_6;

 FUNC_0(&VAR_4->device, "RX start M(%d) R(%d)\n", VAR_5->main_state,
      VAR_5->recv_state);
 FUNC_3(&VAR_5->lock);




 if ((VAR_5->main_state != VAR_0) || (VAR_5->recv_state == VAR_1)) {
  FUNC_4(&VAR_5->lock);
  return;
 }
 FUNC_7(VAR_5, VAR_1);
 FUNC_4(&VAR_5->lock);

 VAR_6 = FUNC_5(VAR_5);
 FUNC_6(VAR_6, VAR_2);
 VAR_6->complete = VAR_3;
 FUNC_0(&VAR_4->device, "Send READY\n");
 FUNC_1(VAR_4, VAR_6);
}
