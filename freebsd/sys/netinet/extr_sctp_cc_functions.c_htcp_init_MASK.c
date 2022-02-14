
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int last_cong; int bytes_acked; int beta; int alpha; } ;
struct TYPE_3__ {TYPE_2__ htcp_ca; } ;
struct sctp_nets {TYPE_1__ cc_mod; int mtu; } ;
struct htcp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct sctp_nets *VAR_2)
{
 FUNC_0(&VAR_2->cc_mod.htcp_ca, 0, sizeof(struct htcp));
 VAR_2->cc_mod.htcp_ca.alpha = VAR_0;
 VAR_2->cc_mod.htcp_ca.beta = VAR_1;
 VAR_2->cc_mod.htcp_ca.bytes_acked = VAR_2->mtu;
 VAR_2->cc_mod.htcp_ca.last_cong = FUNC_1();
}
