
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;
struct mbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (struct socket*,int,struct mbuf*,struct sockaddr*,struct mbuf*,struct thread*) ;

__attribute__((used)) static int
FUNC_2(struct socket *VAR_3, int VAR_4, struct mbuf *VAR_5,
    struct sockaddr *VAR_6, struct mbuf *VAR_7, struct thread *VAR_8)
{
 int VAR_9;

 if (VAR_6) {
  if (VAR_6->sa_len != sizeof(struct sockaddr_in6)) {
   VAR_9 = VAR_2;
   goto bad;
  }
  if (VAR_6->sa_family != VAR_0) {
   VAR_9 = VAR_1;
   goto bad;
  }
 }

 return (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8));

bad:
 if (VAR_7)
  FUNC_0(VAR_7);
 FUNC_0(VAR_5);
 return (VAR_9);
}
