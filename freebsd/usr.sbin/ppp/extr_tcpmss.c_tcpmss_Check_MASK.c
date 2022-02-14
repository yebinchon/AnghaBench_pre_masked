
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int dummy; } ;
struct mbuf {int dummy; } ;
struct ip {int ip_hl; scalar_t__ ip_p; int ip_len; int ip_off; } ;
struct bundle {TYPE_1__* iface; } ;
struct TYPE_2__ {int mtu; } ;


 int FUNC_0 (struct bundle*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct tcphdr*,size_t,int ) ;
 int VAR_2 ;
 size_t FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (struct mbuf*) ;
 size_t FUNC_6 (int ) ;

__attribute__((used)) static struct mbuf *
FUNC_7(struct bundle *VAR_3, struct mbuf *VAR_4)
{
  struct ip *VAR_5;
  size_t VAR_6, VAR_7;

  if (!FUNC_0(VAR_3, VAR_2))
    return VAR_4;

  VAR_4 = FUNC_5(VAR_4);
  VAR_7 = FUNC_4(VAR_4);
  VAR_5 = (struct ip *)FUNC_2(VAR_4);
  VAR_6 = VAR_5->ip_hl << 2;





  if (VAR_5->ip_p == VAR_0 && (FUNC_6(VAR_5->ip_off) & VAR_1) == 0 &&
      FUNC_6(VAR_5->ip_len) == VAR_7 && VAR_6 <= VAR_7 &&
      VAR_7 >= sizeof(struct tcphdr) + VAR_6)
    FUNC_3((struct tcphdr *)(FUNC_2(VAR_4) + VAR_6), VAR_7 - VAR_6,
             FUNC_1(VAR_3->iface->mtu));

  return VAR_4;
}
