
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int m_len; } ;
struct ip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket*,struct mbuf*,struct sockaddr_in*,struct mbuf*) ;
 int VAR_1 ;
 int FUNC_2 (struct mbuf*) ;
 struct mbuf* FUNC_3 (struct mbuf*,int) ;

__attribute__((used)) static int
FUNC_4(struct socket *VAR_2, int VAR_3, struct mbuf *VAR_4, struct sockaddr *VAR_5,
    struct mbuf *VAR_6, struct thread *VAR_7)
{


 if (VAR_4->m_len < sizeof (struct ip) &&
     (VAR_4 = FUNC_3(VAR_4, sizeof (struct ip))) == ((void*)0)) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_4);
  return VAR_0;
 }


 return FUNC_1(VAR_2, VAR_4, (struct sockaddr_in *)VAR_5, VAR_6);
}
