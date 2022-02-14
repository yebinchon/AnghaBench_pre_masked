
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp; int len; int op; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; } ;
 int FUNC_0 (struct if_ath_alq_payload*) ;
 int FUNC_1 (struct if_ath_alq_payload*) ;
 int FUNC_2 (struct if_ath_alq_payload*) ;
 int FUNC_3 (struct if_ath_alq_payload*) ;
 int FUNC_4 (struct if_ath_alq_payload*) ;
 int FUNC_5 (struct if_ath_alq_payload*) ;
 int FUNC_6 (struct if_ath_alq_payload*) ;
 int FUNC_7 (struct if_ath_alq_payload*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,int ,int,int) ;

void
FUNC_12(struct if_ath_alq_payload *VAR_0)
{

  switch (FUNC_8(VAR_0->hdr.op)) {
   case 133:
    FUNC_2(VAR_0);
    break;
   case 135:
    FUNC_0(VAR_0);
    break;
   case 134:
    FUNC_1(VAR_0);
    break;
   case 132:
    FUNC_3(VAR_0);
    break;
   case 130:
    FUNC_5(VAR_0);
    break;
   case 131:
    FUNC_4(VAR_0);
    break;
   case 128:
    FUNC_7(VAR_0);
    break;
   case 129:
    FUNC_6(VAR_0);
    break;
   default:
    FUNC_11("[%d] [%lld] op: %d; len %d\n",
        FUNC_9(VAR_0->hdr.tstamp),
        FUNC_10(VAR_0->hdr.threadid),
        FUNC_8(VAR_0->hdr.op), FUNC_8(VAR_0->hdr.len));
  }
}
