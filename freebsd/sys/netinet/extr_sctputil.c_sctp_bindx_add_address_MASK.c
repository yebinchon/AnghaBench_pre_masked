
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct socket {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct sctp_inpcb {int sctp_flags; scalar_t__ sctp_lport; } ;
typedef scalar_t__ sctp_assoc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sctp_inpcb*) ;
 scalar_t__ FUNC_2 (struct sctp_inpcb*) ;
 int FUNC_3 (struct sctp_inpcb*,int *,int *,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_5 (struct sctp_inpcb*,struct sockaddr*,int ,int ,int *) ;
 int FUNC_6 (struct socket*,struct sockaddr*,int *,void*) ;
 struct sctp_inpcb* FUNC_7 (struct sockaddr*,int,int ,int ) ;

void
FUNC_8(struct socket *VAR_9, struct sctp_inpcb *VAR_10,
    struct sockaddr *VAR_11, sctp_assoc_t VAR_12,
    uint32_t VAR_13, int *VAR_14, void *VAR_15)
{
 struct sockaddr *VAR_16;





 if (VAR_10->sctp_flags & VAR_6) {
  FUNC_3(VAR_10, ((void*)0), ((void*)0), VAR_5, VAR_3);
  *VAR_14 = VAR_3;
  return;
 }
 VAR_16 = VAR_11;
 if (VAR_10->sctp_flags & VAR_8) {
  if (VAR_15 == ((void*)0)) {

   FUNC_3(VAR_10, ((void*)0), ((void*)0), VAR_5, VAR_3);
   *VAR_14 = VAR_3;
   return;
  }
  *VAR_14 = FUNC_6(VAR_9, VAR_16, ((void*)0), VAR_15);
  return;
 }





 if (VAR_12 == 0) {

  struct sctp_inpcb *VAR_17;
  struct sockaddr_in *VAR_18 = (struct sockaddr_in *)VAR_16;


  if ((VAR_18->sin_port != 0) &&
      (VAR_18->sin_port != VAR_10->sctp_lport)) {
   FUNC_3(VAR_10, ((void*)0), ((void*)0), VAR_5, VAR_3);
   *VAR_14 = VAR_3;
   return;
  } else {

   VAR_18->sin_port = VAR_10->sctp_lport;
  }

  VAR_17 = FUNC_7(VAR_16, 1, 0, VAR_13);
  if (VAR_17 != ((void*)0)) {





   FUNC_1(VAR_17);
  }
  if (VAR_17 == VAR_10) {

   return;
  } else if (VAR_17 == ((void*)0)) {
   ((struct sockaddr_in *)VAR_16)->sin_port = 0;
   *VAR_14 = FUNC_5(VAR_10, VAR_16,
       VAR_4,
       VAR_13, ((void*)0));
  } else {
   *VAR_14 = VAR_2;
  }
  if (*VAR_14)
   return;
 } else {



 }
}
