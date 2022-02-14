
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sadb_msghdr {TYPE_1__* msg; } ;
struct sadb_msg {int dummy; } ;
struct mbuf {int dummy; } ;
struct keycb {int kp_promisc; } ;
struct TYPE_2__ {int sadb_msg_satype; scalar_t__ sadb_msg_errno; int sadb_msg_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct socket*,struct mbuf*,int ) ;
 int FUNC_4 (struct socket*,struct mbuf*,int ) ;
 int FUNC_5 (struct mbuf*,int ) ;
 int FUNC_6 (struct mbuf*) ;
 scalar_t__ FUNC_7 (struct socket*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_2, struct mbuf *VAR_3, const struct sadb_msghdr *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2 != ((void*)0), ("null socket"));
 FUNC_0(VAR_3 != ((void*)0), ("null mbuf"));
 FUNC_0(VAR_4 != ((void*)0), ("null msghdr"));
 FUNC_0(VAR_4->msg != ((void*)0), ("null msg"));

 VAR_5 = FUNC_2(VAR_4->msg->sadb_msg_len);

 if (VAR_5 < sizeof(struct sadb_msg)) {

  return FUNC_3(VAR_2, VAR_3, VAR_0);




 } else if (VAR_5 == sizeof(struct sadb_msg)) {

  struct keycb *VAR_6;

  if ((VAR_6 = (struct keycb *)FUNC_7(VAR_2)) == ((void*)0))
   return FUNC_3(VAR_2, VAR_3, VAR_0);
  VAR_4->msg->sadb_msg_errno = 0;
  switch (VAR_4->msg->sadb_msg_satype) {
  case 0:
  case 1:
   VAR_6->kp_promisc = VAR_4->msg->sadb_msg_satype;
   break;
  default:
   return FUNC_3(VAR_2, VAR_3, VAR_0);
  }


  VAR_4->msg->sadb_msg_errno = 0;
  return FUNC_4(VAR_2, VAR_3, VAR_1);
 } else {


  FUNC_5(VAR_3, FUNC_1(sizeof(struct sadb_msg)));


  return FUNC_4(VAR_2, VAR_3, VAR_1);
 }
}
