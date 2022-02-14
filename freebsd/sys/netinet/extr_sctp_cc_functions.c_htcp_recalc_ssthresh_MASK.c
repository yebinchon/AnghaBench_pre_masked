
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int beta; } ;
struct TYPE_4__ {TYPE_1__ htcp_ca; } ;
struct sctp_nets {int cwnd; int mtu; TYPE_2__ cc_mod; } ;


 int FUNC_0 (struct sctp_nets*) ;
 int FUNC_1 (int,unsigned int) ;

__attribute__((used)) static uint32_t
FUNC_2(struct sctp_nets *VAR_0)
{
 FUNC_0(VAR_0);
 return (FUNC_1(((VAR_0->cwnd / VAR_0->mtu * VAR_0->cc_mod.htcp_ca.beta) >> 7) * VAR_0->mtu, 2U * VAR_0->mtu));
}
