
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int dummy; } ;
struct inpcb {int inp_flags; } ;
struct in_conninfo {int inc_flags; int inc_lport; int inc_laddr; int inc_fport; int inc_faddr; int inc6_laddr; int inc6_faddr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_4 ;
 struct inpcb* FUNC_2 (int *,int *,int ,int *,int ,int ,struct ifnet*) ;
 struct inpcb* FUNC_3 (int *,int ,int ,int ,int ,int ,struct ifnet*) ;
 int FUNC_4 (struct inpcb*,int *,struct tcphdr*,int *,int ) ;

int
FUNC_5(struct in_conninfo *VAR_5, struct tcphdr *VAR_6, struct ifnet *VAR_7)
{
 struct inpcb *VAR_8;

 if (VAR_5->inc_flags & VAR_1) {
  VAR_8 = FUNC_2(&VAR_4, &VAR_5->inc6_faddr,
      VAR_5->inc_fport, &VAR_5->inc6_laddr, VAR_5->inc_lport,
      VAR_2, VAR_7);
 } else {
  VAR_8 = FUNC_3(&VAR_4, VAR_5->inc_faddr, VAR_5->inc_fport,
      VAR_5->inc_laddr, VAR_5->inc_lport, VAR_2, VAR_7);
 }
 if (VAR_8 != ((void*)0)) {
  FUNC_0(VAR_8);

  if ((VAR_8->inp_flags & VAR_3) && VAR_6 != ((void*)0)) {
   if (!FUNC_4(VAR_8, ((void*)0), VAR_6, ((void*)0), 0))
    return (VAR_0);
  } else {
   FUNC_1(VAR_8);
   return (VAR_0);
  }
 }

 return (0);
}
