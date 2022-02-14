
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int len; int op; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; } ;





 int FUNC_0 (struct if_ath_alq_payload*) ;
 int FUNC_1 (struct if_ath_alq_payload*) ;
 int FUNC_2 (struct if_ath_alq_payload*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,int ,int,int) ;

void
FUNC_7(struct if_ath_alq_payload *VAR_0)
{

  switch (FUNC_3(VAR_0->hdr.op)) {
   case 128:
    FUNC_2(VAR_0);
    break;
   case 130:
    FUNC_0(VAR_0);
    break;
   case 129:
    FUNC_1(VAR_0);
    break;
   default:
    FUNC_6("[%d.%06d] [%lld] op: %d; len %d\n",
        FUNC_4(VAR_0->hdr.tstamp_sec),
        FUNC_4(VAR_0->hdr.tstamp_usec),
        FUNC_5(VAR_0->hdr.threadid),
        FUNC_3(VAR_0->hdr.op), FUNC_3(VAR_0->hdr.len));
  }
}
