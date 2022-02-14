
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct sctp_tcb {int sctp_ep; } ;
struct sctp_ifa {int ifn_p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sctp_tcb*,int ) ;
 int FUNC_1 (struct sctp_tcb*,struct sctp_ifa*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct sctp_tcb*,struct sctp_ifa*) ;

__attribute__((used)) static void
FUNC_4(struct sctp_tcb *VAR_2, struct sctp_ifa *VAR_3, uint32_t VAR_4)
{
 if (VAR_4) {

  FUNC_1(VAR_2, VAR_3);

  if (FUNC_2(VAR_2->sctp_ep,
      VAR_0) ||
      FUNC_2(VAR_2->sctp_ep,
      VAR_1)) {
   FUNC_3(VAR_2, VAR_3);
   return;
  }

  FUNC_0(VAR_2, VAR_3->ifn_p);
 }

}
