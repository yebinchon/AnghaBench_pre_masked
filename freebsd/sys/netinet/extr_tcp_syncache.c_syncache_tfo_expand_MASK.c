
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int server; } ;
struct tcpcb {unsigned int* t_tfo_pending; int iss; int snd_nxt; int snd_max; TYPE_1__ t_tfo_cookie; int t_flags; } ;
struct syncache {int dummy; } ;
struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int*,int) ;
 struct tcpcb* FUNC_3 (struct inpcb*) ;
 int FUNC_4 (struct socket*) ;
 struct inpcb* FUNC_5 (struct socket*) ;
 struct socket* FUNC_6 (struct syncache*,struct socket*,struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(struct syncache *VAR_3, struct socket **VAR_4, struct mbuf *VAR_5,
    uint64_t VAR_6)
{
 struct inpcb *VAR_7;
 struct tcpcb *VAR_8;
 unsigned int *VAR_9;

 FUNC_0();

 VAR_9 = FUNC_3(FUNC_5(*VAR_4))->t_tfo_pending;
 *VAR_4 = FUNC_6(VAR_3, *VAR_4, VAR_5);
 if (*VAR_4 == ((void*)0)) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_9, 1);
 } else {
  FUNC_4(*VAR_4);
  VAR_7 = FUNC_5(*VAR_4);
  VAR_8 = FUNC_3(VAR_7);
  VAR_8->t_flags |= VAR_0;
  VAR_8->t_tfo_cookie.server = VAR_6;
  VAR_8->snd_max = VAR_8->iss;
  VAR_8->snd_nxt = VAR_8->iss;
  VAR_8->t_tfo_pending = VAR_9;
  FUNC_1(VAR_2);
 }
}
