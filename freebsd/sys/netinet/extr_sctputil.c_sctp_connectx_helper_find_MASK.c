
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; unsigned int sa_len; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_inpcb {int dummy; } ;
typedef scalar_t__ caddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sctp_inpcb*) ;
 int FUNC_2 (struct sctp_inpcb*) ;
 int FUNC_3 (struct sctp_tcb*) ;
 struct sctp_tcb* FUNC_4 (struct sctp_inpcb**,struct sockaddr*,int *,int *,int *) ;

int
FUNC_5(struct sctp_inpcb *VAR_2, struct sockaddr *VAR_3,
    unsigned int VAR_4,
    unsigned int *VAR_5, unsigned int *VAR_6,
    unsigned int VAR_7)
{
 struct sockaddr *VAR_8;
 struct sctp_tcb *VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12;

 VAR_11 = 0;
 VAR_8 = VAR_3;
 *VAR_6 = *VAR_5 = 0;

 if (VAR_4 == 0) {
  return (VAR_1);
 }
 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  if (VAR_11 + sizeof(struct sockaddr) > VAR_7) {
   return (VAR_1);
  }
  switch (VAR_8->sa_family) {
  default:
   return (VAR_1);
  }
  if ((VAR_11 + VAR_10) > VAR_7) {
   return (VAR_1);
  }
  FUNC_2(VAR_2);
  VAR_9 = FUNC_4(&VAR_2, VAR_8, ((void*)0), ((void*)0), ((void*)0));
  if (VAR_9 != ((void*)0)) {
   FUNC_3(VAR_9);
   return (VAR_0);
  } else {
   FUNC_1(VAR_2);
  }
  VAR_11 += VAR_10;
  VAR_8 = (struct sockaddr *)((caddr_t)VAR_8 + VAR_10);
 }
 return (0);
}
