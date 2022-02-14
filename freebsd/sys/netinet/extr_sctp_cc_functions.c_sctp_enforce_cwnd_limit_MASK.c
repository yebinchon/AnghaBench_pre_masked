
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctphdr {int dummy; } ;
struct sctp_nets {scalar_t__ cwnd; int mtu; } ;
struct sctp_association {scalar_t__ max_cwnd; } ;



__attribute__((used)) static void
FUNC_0(struct sctp_association *VAR_0, struct sctp_nets *VAR_1)
{
 if ((VAR_0->max_cwnd > 0) &&
     (VAR_1->cwnd > VAR_0->max_cwnd) &&
     (VAR_1->cwnd > (VAR_1->mtu - sizeof(struct sctphdr)))) {
  VAR_1->cwnd = VAR_0->max_cwnd;
  if (VAR_1->cwnd < (VAR_1->mtu - sizeof(struct sctphdr))) {
   VAR_1->cwnd = VAR_1->mtu - sizeof(struct sctphdr);
  }
 }
}
