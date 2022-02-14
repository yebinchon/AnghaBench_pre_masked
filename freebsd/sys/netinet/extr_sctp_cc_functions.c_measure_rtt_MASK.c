
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ minRTT; scalar_t__ maxRTT; } ;
struct TYPE_3__ {TYPE_2__ htcp_ca; } ;
struct sctp_nets {scalar_t__ lastsa; scalar_t__ fast_retran_ip; int ssthresh; TYPE_1__ cc_mod; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void
FUNC_2(struct sctp_nets *VAR_1)
{
 uint32_t VAR_2 = VAR_1->lastsa >> VAR_0;


 if (VAR_1->cc_mod.htcp_ca.minRTT > VAR_2 || !VAR_1->cc_mod.htcp_ca.minRTT)
  VAR_1->cc_mod.htcp_ca.minRTT = VAR_2;


 if (VAR_1->fast_retran_ip == 0 && VAR_1->ssthresh < 0xFFFF && FUNC_1(&VAR_1->cc_mod.htcp_ca) > 3) {
  if (VAR_1->cc_mod.htcp_ca.maxRTT < VAR_1->cc_mod.htcp_ca.minRTT)
   VAR_1->cc_mod.htcp_ca.maxRTT = VAR_1->cc_mod.htcp_ca.minRTT;
  if (VAR_1->cc_mod.htcp_ca.maxRTT < VAR_2 && VAR_2 <= VAR_1->cc_mod.htcp_ca.maxRTT + FUNC_0(20))
   VAR_1->cc_mod.htcp_ca.maxRTT = VAR_2;
 }
}
