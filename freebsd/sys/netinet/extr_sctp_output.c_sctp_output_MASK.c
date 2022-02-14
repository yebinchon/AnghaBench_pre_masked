
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sctp_inpcb {int * sctp_socket; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mbuf*,struct sctp_inpcb*,int *,int *,int ,int) ;
 int FUNC_1 (int *,struct sockaddr*,struct uio*,struct mbuf*,struct mbuf*,int,struct thread*) ;

int
FUNC_2(
    struct sctp_inpcb *VAR_2,
    struct mbuf *VAR_3,
    struct sockaddr *VAR_4,
    struct mbuf *VAR_5,
    struct thread *VAR_6,
    int VAR_7)
{
 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, ((void*)0), ((void*)0), VAR_1, VAR_0);
  return (VAR_0);
 }

 if (VAR_2->sctp_socket == ((void*)0)) {
  FUNC_0(VAR_3, VAR_2, ((void*)0), ((void*)0), VAR_1, VAR_0);
  return (VAR_0);
 }
 return (FUNC_1(VAR_2->sctp_socket,
     VAR_4,
     (struct uio *)((void*)0),
     VAR_3,
     VAR_5,
     VAR_7, VAR_6
     ));
}
