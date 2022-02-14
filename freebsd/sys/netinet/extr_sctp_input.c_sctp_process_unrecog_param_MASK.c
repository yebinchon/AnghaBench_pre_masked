
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int asconf_supported; int peer_supports_nat; int prsctp_supported; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;


 int FUNC_0 (int ,char*,...) ;

 int VAR_0 ;
__attribute__((used)) static void
FUNC_1(struct sctp_tcb *VAR_1, uint16_t VAR_2)
{
 switch (VAR_2) {

 case 131:
  VAR_1->asoc.prsctp_supported = 0;
  break;
 case 128:
  break;

 case 132:
  VAR_1->asoc.peer_supports_nat = 0;
  break;
 case 135:
 case 134:
 case 130:
  VAR_1->asoc.asconf_supported = 0;
  break;
 case 129:
 case 133:
  FUNC_0(VAR_0, "Huh, the peer does not support success? or error cause?\n");
  FUNC_0(VAR_0,
      "Turning off ASCONF to this strange peer\n");
  VAR_1->asoc.asconf_supported = 0;
  break;
 default:
  FUNC_0(VAR_0,
      "Peer does not support param type %d (0x%x)??\n",
      VAR_2, VAR_2);
  break;
 }
}
