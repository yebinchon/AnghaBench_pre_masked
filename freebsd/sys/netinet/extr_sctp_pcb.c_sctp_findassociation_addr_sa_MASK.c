
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct sctp_tcb {int dummy; } ;
struct sctp_nets {int dummy; } ;
struct sctp_inpcb {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sctp_tcb* FUNC_2 (struct sctp_inpcb**,struct sockaddr*,struct sctp_nets**,struct sockaddr*,int *) ;
 struct sctp_inpcb* FUNC_3 (struct sockaddr*,int ,int,int ) ;
 struct sctp_tcb* FUNC_4 (struct sctp_inpcb**,struct sockaddr*,struct sockaddr*,struct sctp_nets**,int ) ;

struct sctp_tcb *
FUNC_5(struct sockaddr *VAR_0, struct sockaddr *VAR_1,
    struct sctp_inpcb **VAR_2, struct sctp_nets **VAR_3, int VAR_4,
    uint32_t VAR_5)
{
 struct sctp_inpcb *VAR_6 = ((void*)0);
 struct sctp_tcb *VAR_7;

 FUNC_0();
 if (VAR_4) {
  if (VAR_2 != ((void*)0)) {
   VAR_7 = FUNC_4(VAR_2, VAR_0, VAR_1, VAR_3,
       VAR_5);
  } else {
   VAR_7 = FUNC_4(&VAR_6, VAR_0, VAR_1, VAR_3,
       VAR_5);
  }
  if (VAR_7 != ((void*)0)) {
   FUNC_1();
   return (VAR_7);
  }
 }
 VAR_6 = FUNC_3(VAR_1, 0, 1, VAR_5);
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_6;
 }
 FUNC_1();
 if (VAR_6 == ((void*)0)) {
  return (((void*)0));
 }






 if (VAR_2 != ((void*)0)) {
  VAR_7 = FUNC_2(VAR_2, VAR_0, VAR_3, VAR_1,
      ((void*)0));
 } else {
  VAR_7 = FUNC_2(&VAR_6, VAR_0, VAR_3, VAR_1,
      ((void*)0));
 }
 return (VAR_7);
}
