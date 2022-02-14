
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct tcpcb {scalar_t__ ts_recent_age; scalar_t__ ts_recent; } ;
struct mbuf {int dummy; } ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct mbuf*,int *) ;
 int FUNC_3 (struct mbuf*,struct tcpcb*,struct tcphdr*,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_5(struct mbuf *VAR_4, struct tcphdr *VAR_5, struct tcpcb *VAR_6,
    int32_t VAR_7, int32_t VAR_8, int32_t * VAR_9)
{

 if (FUNC_4() - VAR_6->ts_recent_age > VAR_0) {
  VAR_6->ts_recent = 0;
 } else {
  FUNC_1(VAR_3);
  FUNC_0(VAR_2, VAR_7);
  FUNC_1(VAR_1);
  *VAR_9 = 0;
  if (VAR_7) {
   FUNC_3(VAR_4, VAR_6, VAR_5, VAR_8, VAR_7, VAR_9);
  } else {
   FUNC_2(VAR_4, ((void*)0));
  }
  return (1);
 }
 return (0);
}
