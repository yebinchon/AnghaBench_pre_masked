
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct sctp_sndrcvinfo {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int sndrcvninfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct sockaddr_in*,struct sockaddr_in6*) ;
 scalar_t__ FUNC_2 (int ,void*,struct mbuf*,int) ;
 int FUNC_3 (struct socket*,struct sockaddr*,struct uio*,struct mbuf*,struct mbuf*,int,struct sctp_sndrcvinfo*,struct thread*) ;

int
FUNC_4(struct socket *VAR_2,
    struct sockaddr *VAR_3,
    struct uio *VAR_4,
    struct mbuf *VAR_5,
    struct mbuf *VAR_6,
    int VAR_7,
    struct thread *VAR_8
)
{
 int VAR_9, VAR_10 = 0;
 struct sctp_sndrcvinfo VAR_11;
 struct sockaddr *VAR_12;




 if (VAR_6) {

  if (FUNC_2(VAR_1, (void *)&VAR_11, VAR_6,
      sizeof(VAR_11))) {

   VAR_10 = 1;
  }
 }
 VAR_12 = VAR_3;
 VAR_9 = FUNC_3(VAR_2, VAR_12, VAR_4, VAR_5,
     VAR_6,
     VAR_7,
     VAR_10 ? &VAR_11 : ((void*)0)
     ,VAR_8
     );
 return (VAR_9);
}
