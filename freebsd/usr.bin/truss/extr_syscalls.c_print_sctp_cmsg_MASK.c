
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sndrcvinfo {int dummy; } ;
struct sctp_sndinfo {int dummy; } ;
struct sctp_rcvinfo {int dummy; } ;
struct sctp_prinfo {int dummy; } ;
struct sctp_nxtinfo {int dummy; } ;
struct sctp_initmsg {int dummy; } ;
struct sctp_extrcvinfo {int dummy; } ;
struct sctp_authinfo {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct cmsghdr {int cmsg_type; int cmsg_len; } ;
typedef int socklen_t ;
typedef int FILE ;


 void* FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct cmsghdr*) ;
 int FUNC_3 (int *,struct sctp_authinfo*) ;
 int FUNC_4 (int *,struct sctp_extrcvinfo*) ;
 int FUNC_5 (int *,struct sctp_initmsg*) ;
 int FUNC_6 (int *,struct in_addr*) ;
 int FUNC_7 (int *,struct in6_addr*) ;
 int FUNC_8 (int *,struct sctp_nxtinfo*) ;
 int FUNC_9 (int *,struct sctp_prinfo*) ;
 int FUNC_10 (int *,struct sctp_rcvinfo*) ;
 int FUNC_11 (int *,struct sctp_sndinfo*) ;
 int FUNC_12 (int *,int,struct sctp_sndrcvinfo*) ;

__attribute__((used)) static void
FUNC_13(FILE *VAR_0, bool VAR_1, struct cmsghdr *VAR_2)
{
 void *VAR_3;
 socklen_t VAR_4;

 VAR_4 = VAR_2->cmsg_len;
 VAR_3 = FUNC_0(VAR_2);
 switch (VAR_2->cmsg_type) {
 case 133:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_initmsg)))
   FUNC_5(VAR_0, (struct sctp_initmsg *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 128:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_sndrcvinfo)))
   FUNC_12(VAR_0, VAR_1,
       (struct sctp_sndrcvinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 129:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_sndinfo)))
   FUNC_11(VAR_0, (struct sctp_sndinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 130:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_rcvinfo)))
   FUNC_10(VAR_0, (struct sctp_rcvinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 132:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_nxtinfo)))
   FUNC_8(VAR_0, (struct sctp_nxtinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 131:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_prinfo)))
   FUNC_9(VAR_0, (struct sctp_prinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 137:
  if (VAR_4 == FUNC_1(sizeof(struct sctp_authinfo)))
   FUNC_3(VAR_0, (struct sctp_authinfo *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 136:
  if (VAR_4 == FUNC_1(sizeof(struct in_addr)))
   FUNC_6(VAR_0, (struct in_addr *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 case 135:
  if (VAR_4 == FUNC_1(sizeof(struct in6_addr)))
   FUNC_7(VAR_0, (struct in6_addr *)VAR_3);
  else
   FUNC_2(VAR_0, VAR_2);
  break;
 default:
  FUNC_2(VAR_0, VAR_2);
 }
}
