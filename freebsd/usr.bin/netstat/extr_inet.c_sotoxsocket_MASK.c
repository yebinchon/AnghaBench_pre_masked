
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsocket {int xso_len; uintptr_t xso_so; int so_options; uintptr_t so_pcb; int so_oobmark; int so_rcv; int so_snd; int so_qlimit; int so_incqlen; int so_qlen; int so_error; int so_timeo; int xso_family; int xso_protocol; int so_state; int so_linger; int so_type; } ;
struct socket {int so_options; int so_oobmark; int so_rcv; int so_snd; int sol_qlimit; int sol_incqlen; int sol_qlen; int so_error; int so_timeo; scalar_t__ so_proto; scalar_t__ so_pcb; int so_state; int so_linger; int so_type; } ;
struct protosw {int dom_family; scalar_t__ pr_domain; int pr_protocol; } ;
struct domain {int dom_family; scalar_t__ pr_domain; int pr_protocol; } ;
typedef int proto ;
typedef int domain ;


 int VAR_0 ;
 int FUNC_0 (struct xsocket*,int) ;
 scalar_t__ FUNC_1 (uintptr_t,struct protosw*,int) ;
 int FUNC_2 (int *,int *) ;

int
FUNC_3(struct socket *VAR_1, struct xsocket *VAR_2)
{
 struct protosw VAR_3;
 struct domain VAR_4;

 FUNC_0(VAR_2, sizeof *VAR_2);
 VAR_2->xso_len = sizeof *VAR_2;
 VAR_2->xso_so = (uintptr_t)VAR_1;
 VAR_2->so_type = VAR_1->so_type;
 VAR_2->so_options = VAR_1->so_options;
 VAR_2->so_linger = VAR_1->so_linger;
 VAR_2->so_state = VAR_1->so_state;
 VAR_2->so_pcb = (uintptr_t)VAR_1->so_pcb;
 if (FUNC_1((uintptr_t)VAR_1->so_proto, &VAR_3, sizeof(VAR_3)) != 0)
  return (-1);
 VAR_2->xso_protocol = VAR_3.pr_protocol;
 if (FUNC_1((uintptr_t)VAR_3.pr_domain, &VAR_4, sizeof(VAR_4)) != 0)
  return (-1);
 VAR_2->xso_family = VAR_4.dom_family;
 VAR_2->so_timeo = VAR_1->so_timeo;
 VAR_2->so_error = VAR_1->so_error;
 if ((VAR_1->so_options & VAR_0) != 0) {
  VAR_2->so_qlen = VAR_1->sol_qlen;
  VAR_2->so_incqlen = VAR_1->sol_incqlen;
  VAR_2->so_qlimit = VAR_1->sol_qlimit;
 } else {
  FUNC_2(&VAR_1->so_snd, &VAR_2->so_snd);
  FUNC_2(&VAR_1->so_rcv, &VAR_2->so_rcv);
  VAR_2->so_oobmark = VAR_1->so_oobmark;
 }
 return (0);
}
