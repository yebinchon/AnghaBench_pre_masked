
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int prsctp_supported; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_nets {int dummy; } ;


 int FUNC_0 (int ,char*,int,int) ;


 int VAR_0 ;


 int FUNC_1 (struct sctp_tcb*,struct sctp_nets*) ;

__attribute__((used)) static void
FUNC_2(struct sctp_tcb *VAR_1, uint8_t VAR_2,
    struct sctp_nets *VAR_3)
{
 switch (VAR_2) {
 case 130:
 case 131:
  FUNC_1(VAR_1, VAR_3);
  break;
 case 128:
 case 129:
  VAR_1->asoc.prsctp_supported = 0;
  break;
 default:
  FUNC_0(VAR_0,
      "Peer does not support chunk type %d (0x%x).\n",
      VAR_2, VAR_2);
  break;
 }
}
