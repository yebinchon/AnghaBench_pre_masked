
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct inpcbinfo {int dummy; } ;
struct inpcbgroup {int dummy; } ;
struct inpcb {int inp_flags2; int inp_flags; int inp_vflag; struct inpcbinfo* inp_pcbinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inpcb*) ;
 struct inpcbgroup* FUNC_1 (struct inpcb*) ;
 struct inpcbgroup* FUNC_2 (struct inpcb*) ;
 struct inpcbgroup* FUNC_3 (struct inpcbinfo*,struct mbuf*) ;
 int FUNC_4 (struct inpcbinfo*) ;
 int FUNC_5 (struct inpcbinfo*,struct inpcbgroup*,struct inpcb*) ;
 int FUNC_6 (struct inpcb*) ;

void
FUNC_7(struct inpcb *VAR_3, struct mbuf *VAR_4)
{
 struct inpcbinfo *VAR_5;
 struct inpcbgroup *VAR_6;

 FUNC_0(VAR_3);

 VAR_5 = VAR_3->inp_pcbinfo;
 if (!FUNC_4(VAR_5))
  return;






 FUNC_6(VAR_3);
 if (!(VAR_3->inp_flags2 & VAR_2) &&
     !(VAR_3->inp_flags & VAR_0)) {
  VAR_6 = FUNC_3(VAR_5, VAR_4);






   if (VAR_6 == ((void*)0))
    VAR_6 = FUNC_2(VAR_3);



 } else
  VAR_6 = ((void*)0);
 FUNC_5(VAR_5, VAR_6, VAR_3);
}
