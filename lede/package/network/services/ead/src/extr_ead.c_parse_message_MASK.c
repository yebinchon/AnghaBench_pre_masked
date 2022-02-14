
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sid; int type; } ;
struct ead_packet {TYPE_1__ msg; } ;
struct ead_msg_user {int dummy; } ;
struct ead_msg_number {int dummy; } ;
struct ead_msg_encrypted {int dummy; } ;
struct ead_msg_cmd {int dummy; } ;
struct ead_msg_auth {int dummy; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_6__ {int len; int sid; int nid; void* type; void* magic; } ;
struct TYPE_7__ {TYPE_2__ msg; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_1 (struct ead_packet*) ;
 int FUNC_2 (struct ead_packet*,int,int*) ;
 int FUNC_3 (struct ead_packet*,int,int*) ;
 int FUNC_4 (struct ead_packet*,int,int*) ;
 int FUNC_5 (struct ead_packet*,int,int*) ;
 int FUNC_6 (struct ead_packet*,int,int*) ;
 int FUNC_7 (struct ead_packet*,int,int*) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 TYPE_3__* VAR_5 ;
 int FUNC_12 (int) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_13(struct ead_packet *VAR_7, int VAR_8)
{
 bool (*VAR_9)(struct ead_packet *VAR_10, int VAR_11, int *VAR_12);
 int VAR_13 = sizeof(struct ead_packet);
 int VAR_14 = VAR_6;
 int VAR_15 = FUNC_10(VAR_7->msg.type);

 if ((VAR_15 >= 133) &&
  (VAR_6 != VAR_15))
  return;

 if ((VAR_15 != 132) &&
  ((FUNC_11(VAR_7->msg.sid) & VAR_0) >>
   VAR_1) != VAR_3->id)
  return;

 switch(VAR_15) {
 case 132:
  VAR_9 = FUNC_3;
  break;
 case 128:
  VAR_9 = FUNC_7;
  VAR_13 += sizeof(struct ead_msg_user);
  break;
 case 133:
  VAR_9 = FUNC_2;
  break;
 case 131:
  VAR_9 = FUNC_4;
  VAR_13 += sizeof(struct ead_msg_number);
  break;
 case 130:
  VAR_9 = FUNC_5;
  VAR_13 += sizeof(struct ead_msg_auth);
  break;
 case 129:
  VAR_9 = FUNC_6;
  VAR_13 += sizeof(struct ead_msg_cmd) + sizeof(struct ead_msg_encrypted);
  break;
 default:
  return;
 }

 if (VAR_8 < VAR_13) {
  FUNC_0(2, "discarding packet: message too small\n");
  return;
 }

 VAR_5->msg.magic = FUNC_8(VAR_2);
 VAR_5->msg.type = FUNC_8(VAR_15 + 1);
 VAR_5->msg.nid = FUNC_9(VAR_4);
 VAR_5->msg.sid = VAR_7->msg.sid;
 VAR_5->msg.len = 0;

 if (VAR_9(VAR_7, VAR_8, &VAR_14)) {
  FUNC_0(2, "sending response to packet type %d: %d\n", VAR_15 + 1, FUNC_10(VAR_5->msg.len));

  FUNC_1(VAR_7);
 }
 FUNC_12(VAR_14);
}
