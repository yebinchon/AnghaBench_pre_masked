
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int asconf_queue; } ;
struct sctp_tcb {TYPE_4__ asoc; } ;
struct TYPE_5__ {int param_type; } ;
struct TYPE_6__ {TYPE_1__ ph; } ;
struct TYPE_7__ {TYPE_2__ aph; } ;
struct sctp_asconf_addr {scalar_t__ ifa; TYPE_3__ ap; } ;


 int FUNC_0 (int ,char*) ;

 int VAR_0 ;

 int FUNC_1 (struct sctp_asconf_addr*,int ) ;
 int VAR_1 ;

 int FUNC_2 (int *,struct sctp_asconf_addr*,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct sctp_tcb*,scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct sctp_tcb *VAR_3,
    struct sctp_asconf_addr *VAR_4, uint32_t VAR_5)
{
 uint16_t VAR_6;


 VAR_6 = VAR_4->ap.aph.ph.param_type;
 switch (VAR_6) {
 case 130:
  FUNC_0(VAR_0,
      "process_param_ack: added IP address\n");
  FUNC_3(VAR_3, VAR_4->ifa, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_0,
      "process_param_ack: deleted IP address\n");

  break;
 case 128:
  FUNC_0(VAR_0,
      "process_param_ack: set primary IP address\n");

  break;
 default:

  break;
 }


 FUNC_2(&VAR_3->asoc.asconf_queue, VAR_4, VAR_2);
 if (VAR_4->ifa)
  FUNC_4(VAR_4->ifa);
 FUNC_1(VAR_4, VAR_1);
}
