
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int bytecount; int lasttime; int alpha; int minRTT; int minB; int maxB; int Bi; scalar_t__ bytes_acked; } ;
struct TYPE_3__ {TYPE_2__ htcp_ca; } ;
struct sctp_nets {int fast_retran_ip; int cwnd; int mtu; TYPE_1__ cc_mod; scalar_t__ net_ack; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct sctp_nets *VAR_2)
{
 uint32_t VAR_3 = FUNC_1();

 if (VAR_2->fast_retran_ip == 0)
  VAR_2->cc_mod.htcp_ca.bytes_acked = VAR_2->net_ack;

 if (!VAR_1)
  return;



 if (VAR_2->fast_retran_ip == 1) {
  VAR_2->cc_mod.htcp_ca.bytecount = 0;
  VAR_2->cc_mod.htcp_ca.lasttime = VAR_3;
  return;
 }

 VAR_2->cc_mod.htcp_ca.bytecount += VAR_2->net_ack;
 if ((VAR_2->cc_mod.htcp_ca.bytecount >= VAR_2->cwnd - (((VAR_2->cc_mod.htcp_ca.alpha >> 7) ? (VAR_2->cc_mod.htcp_ca.alpha >> 7) : 1) * VAR_2->mtu)) &&
     (VAR_3 - VAR_2->cc_mod.htcp_ca.lasttime >= VAR_2->cc_mod.htcp_ca.minRTT) &&
     (VAR_2->cc_mod.htcp_ca.minRTT > 0)) {
  uint32_t VAR_4 = VAR_2->cc_mod.htcp_ca.bytecount / VAR_2->mtu * VAR_0 / (VAR_3 - VAR_2->cc_mod.htcp_ca.lasttime);

  if (FUNC_0(&VAR_2->cc_mod.htcp_ca) <= 3) {

   VAR_2->cc_mod.htcp_ca.minB = VAR_2->cc_mod.htcp_ca.maxB = VAR_2->cc_mod.htcp_ca.Bi = VAR_4;
  } else {
   VAR_2->cc_mod.htcp_ca.Bi = (3 * VAR_2->cc_mod.htcp_ca.Bi + VAR_4) / 4;
   if (VAR_2->cc_mod.htcp_ca.Bi > VAR_2->cc_mod.htcp_ca.maxB)
    VAR_2->cc_mod.htcp_ca.maxB = VAR_2->cc_mod.htcp_ca.Bi;
   if (VAR_2->cc_mod.htcp_ca.minB > VAR_2->cc_mod.htcp_ca.maxB)
    VAR_2->cc_mod.htcp_ca.minB = VAR_2->cc_mod.htcp_ca.maxB;
  }
  VAR_2->cc_mod.htcp_ca.bytecount = 0;
  VAR_2->cc_mod.htcp_ca.lasttime = VAR_3;
 }
}
