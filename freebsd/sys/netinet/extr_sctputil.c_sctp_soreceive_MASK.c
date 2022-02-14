
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uio {int dummy; } ;
struct socket {scalar_t__ so_pcb; } ;
struct sockaddr {scalar_t__ sa_len; } ;
struct sctp_sndrcvinfo {int dummy; } ;
struct sctp_inpcb {int dummy; } ;
struct sctp_extrcvinfo {int dummy; } ;
struct mbuf {int dummy; } ;
typedef int sockbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sctp_inpcb*,int *,int *,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sctp_extrcvinfo*,int ,int) ;
 struct mbuf* FUNC_2 (struct sctp_inpcb*,struct sctp_sndrcvinfo*) ;
 scalar_t__ FUNC_3 (struct sctp_inpcb*,int ) ;
 int FUNC_4 (struct socket*,struct uio*,struct mbuf**,struct sockaddr*,int,int*,struct sctp_sndrcvinfo*,int) ;
 struct sockaddr* FUNC_5 (struct sockaddr*,int ) ;

int
FUNC_6(struct socket *VAR_7,
    struct sockaddr **VAR_8,
    struct uio *VAR_9,
    struct mbuf **VAR_10,
    struct mbuf **VAR_11,
    int *VAR_12)
{
 int VAR_13, VAR_14;
 uint8_t VAR_15[256];
 struct sockaddr *VAR_16;
 struct sctp_extrcvinfo VAR_17;
 int VAR_18 = 1;
 int VAR_19;
 struct sctp_inpcb *VAR_20;

 VAR_20 = (struct sctp_inpcb *)VAR_7->so_pcb;

 if (VAR_20 == ((void*)0)) {
  FUNC_0(VAR_20, ((void*)0), ((void*)0), VAR_3, VAR_0);
  return (VAR_0);
 }
 if ((FUNC_3(VAR_20, VAR_4) &&
     FUNC_3(VAR_20, VAR_6) &&
     FUNC_3(VAR_20, VAR_5)) ||
     (VAR_11 == ((void*)0))) {

  VAR_18 = 0;
 }
 if (VAR_8) {
  VAR_16 = (struct sockaddr *)VAR_15;
  VAR_14 = sizeof(VAR_15);
  VAR_16->sa_len = 0;
 } else {
  VAR_16 = ((void*)0);
  VAR_14 = 0;
 }

 if (VAR_18) {
  FUNC_1(&VAR_17, 0, sizeof(struct sctp_extrcvinfo));
 }
 if (VAR_12 != ((void*)0)) {
  VAR_19 = *VAR_12;
 } else {
  VAR_19 = 0;
 }
 VAR_13 = FUNC_4(VAR_7, VAR_9, VAR_10, VAR_16, VAR_14, &VAR_19,
     (struct sctp_sndrcvinfo *)&VAR_17, VAR_18);
 if (VAR_12 != ((void*)0)) {
  *VAR_12 = VAR_19;
 }
 if (VAR_11 != ((void*)0)) {

  if (VAR_18 && ((VAR_19 & VAR_1) == 0)) {
   *VAR_11 = FUNC_2(VAR_20,
       (struct sctp_sndrcvinfo *)&VAR_17);
  } else {
   *VAR_11 = ((void*)0);
  }
 }
 if (VAR_8) {

  if (VAR_16 && VAR_16->sa_len) {
   *VAR_8 = FUNC_5(VAR_16, VAR_2);
  } else {
   *VAR_8 = ((void*)0);
  }
 }
 return (VAR_13);
}
