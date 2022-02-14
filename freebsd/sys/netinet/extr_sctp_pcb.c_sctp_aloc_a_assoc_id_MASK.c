
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct sctpasochead {int dummy; } ;
struct TYPE_2__ {int in_asocid_hash; } ;
struct sctp_tcb {TYPE_1__ asoc; } ;
struct sctp_inpcb {int sctp_flags; scalar_t__ sctp_associd_counter; int hashasocidmark; struct sctpasochead* sctp_asocidhash; } ;
typedef int sctp_assoc_t ;


 int FUNC_0 (struct sctpasochead*,struct sctp_tcb*,int ) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (scalar_t__,int ) ;
 int VAR_1 ;
 struct sctp_tcb* FUNC_2 (struct sctp_inpcb*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_3(struct sctp_inpcb *VAR_3, struct sctp_tcb *VAR_4)
{
 uint32_t VAR_5;
 struct sctpasochead *VAR_6;
 struct sctp_tcb *VAR_7;

try_again:
 if (VAR_3->sctp_flags & VAR_1) {

  return (0);
 }




 if (VAR_3->sctp_associd_counter <= VAR_0) {
  VAR_3->sctp_associd_counter = VAR_0 + 1;
 }
 VAR_5 = VAR_3->sctp_associd_counter;
 VAR_3->sctp_associd_counter++;
 VAR_7 = FUNC_2(VAR_3, (sctp_assoc_t)VAR_5, 0);
 if (VAR_7) {
  goto try_again;
 }
 VAR_6 = &VAR_3->sctp_asocidhash[FUNC_1(VAR_5, VAR_3->hashasocidmark)];
 FUNC_0(VAR_6, VAR_4, VAR_2);
 VAR_4->asoc.in_asocid_hash = 1;
 return (VAR_5);
}
