
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inpcbgroup {int dummy; } ;
struct inpcb {int inp_flags2; size_t inp_rss_listen_bucket; int inp_fport; int in6p_faddr; int inp_lport; int in6p_laddr; TYPE_1__* inp_pcbinfo; } ;
struct TYPE_2__ {struct inpcbgroup* ipi_pcbgroups; } ;


 int VAR_0 ;
 struct inpcbgroup* FUNC_0 (TYPE_1__*,int *,int ,int *,int ) ;

struct inpcbgroup *
FUNC_1(struct inpcb *VAR_1)
{
 return (FUNC_0(VAR_1->inp_pcbinfo, &VAR_1->in6p_laddr,
     VAR_1->inp_lport, &VAR_1->in6p_faddr, VAR_1->inp_fport));
}
