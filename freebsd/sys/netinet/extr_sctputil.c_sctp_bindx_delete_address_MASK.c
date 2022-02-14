
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct sctp_inpcb {int sctp_flags; } ;
typedef scalar_t__ sctp_assoc_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sctp_inpcb*) ;
 int FUNC_2 (struct sctp_inpcb*,int *,int *,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct sockaddr_in*,struct sockaddr_in6*) ;
 int FUNC_4 (struct sctp_inpcb*,struct sockaddr*,int ,int ,int *) ;

void
FUNC_5(struct sctp_inpcb *VAR_7,
    struct sockaddr *VAR_8, sctp_assoc_t VAR_9,
    uint32_t VAR_10, int *VAR_11)
{
 struct sockaddr *VAR_12;





 if (VAR_7->sctp_flags & VAR_5) {
  FUNC_2(VAR_7, ((void*)0), ((void*)0), VAR_4, VAR_2);
  *VAR_11 = VAR_2;
  return;
 }
 VAR_12 = VAR_8;
 if (VAR_9 == 0) {

  *VAR_11 = FUNC_4(VAR_7, VAR_12,
      VAR_3,
      VAR_10, ((void*)0));
 } else {



 }
}
