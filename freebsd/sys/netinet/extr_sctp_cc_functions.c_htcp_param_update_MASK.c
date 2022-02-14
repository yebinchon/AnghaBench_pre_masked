
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ minRTT; scalar_t__ maxRTT; } ;
struct TYPE_4__ {TYPE_2__ htcp_ca; } ;
struct sctp_nets {TYPE_1__ cc_mod; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct sctp_nets *VAR_0)
{
 uint32_t VAR_1 = VAR_0->cc_mod.htcp_ca.minRTT;
 uint32_t VAR_2 = VAR_0->cc_mod.htcp_ca.maxRTT;

 FUNC_1(&VAR_0->cc_mod.htcp_ca, VAR_1, VAR_2);
 FUNC_0(&VAR_0->cc_mod.htcp_ca);





 if (VAR_1 > 0 && VAR_2 > VAR_1)
  VAR_0->cc_mod.htcp_ca.maxRTT = VAR_1 + ((VAR_2 - VAR_1) * 95) / 100;
}
