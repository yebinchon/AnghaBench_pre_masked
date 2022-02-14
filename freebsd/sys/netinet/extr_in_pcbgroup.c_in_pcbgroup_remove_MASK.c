
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcbgroup {int dummy; } ;
struct inpcb {int inp_flags2; struct inpcbgroup* inp_pcbgroup; int inp_pcbinfo; } ;


 int FUNC_0 (struct inpcb*,int ) ;
 int FUNC_1 (struct inpcbgroup*) ;
 int FUNC_2 (struct inpcbgroup*) ;
 int VAR_0 ;
 int FUNC_3 (struct inpcb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct inpcb*) ;
 int VAR_1 ;

void
FUNC_6(struct inpcb *VAR_2)
{
 struct inpcbgroup *VAR_3;

 FUNC_3(VAR_2);

 if (!FUNC_4(VAR_2->inp_pcbinfo))
  return;

 if (VAR_2->inp_flags2 & VAR_0)
  FUNC_5(VAR_2);

 VAR_3 = VAR_2->inp_pcbgroup;
 if (VAR_3 != ((void*)0)) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_2, VAR_1);
  VAR_2->inp_pcbgroup = ((void*)0);
  FUNC_2(VAR_3);
 }
}
