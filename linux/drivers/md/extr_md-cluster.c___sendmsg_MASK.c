
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct md_cluster_info {int slot_number; TYPE_2__* message_lockres; TYPE_2__* ack_lockres; } ;
struct cluster_msg {int slot; } ;
struct TYPE_4__ {int sb_lvbptr; } ;
struct TYPE_5__ {TYPE_1__ lksb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct md_cluster_info *VAR_3, struct cluster_msg *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_3->slot_number - 1;

 VAR_4->slot = FUNC_0(VAR_6);

 VAR_5 = FUNC_1(VAR_3->message_lockres, VAR_2);
 if (VAR_5) {
  FUNC_4("md-cluster: failed to get EX on MESSAGE (%d)\n", VAR_5);
  goto failed_message;
 }

 FUNC_3(VAR_3->message_lockres->lksb.sb_lvbptr, (void *)VAR_4,
   sizeof(struct cluster_msg));

 VAR_5 = FUNC_1(VAR_3->message_lockres, VAR_1);
 if (VAR_5) {
  FUNC_4("md-cluster: failed to convert EX to CW on MESSAGE(%d)\n",
    VAR_5);
  goto failed_ack;
 }


 VAR_5 = FUNC_1(VAR_3->ack_lockres, VAR_2);
 if (VAR_5) {
  FUNC_4("md-cluster: failed to convert CR to EX on ACK(%d)\n",
    VAR_5);
  goto failed_ack;
 }


 VAR_5 = FUNC_1(VAR_3->ack_lockres, VAR_0);
 if (VAR_5) {
  FUNC_4("md-cluster: failed to convert EX to CR on ACK(%d)\n",
    VAR_5);
  goto failed_ack;
 }

failed_ack:
 VAR_5 = FUNC_2(VAR_3->message_lockres);
 if (FUNC_5(VAR_5 != 0)) {
  FUNC_4("md-cluster: failed convert to NL on MESSAGE(%d)\n",
   VAR_5);

  goto failed_ack;
 }
failed_message:
 return VAR_5;
}
