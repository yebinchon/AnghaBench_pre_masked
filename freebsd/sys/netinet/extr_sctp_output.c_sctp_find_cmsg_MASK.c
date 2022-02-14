
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sndrcvinfo {int sinfo_keynumber_valid; int sinfo_keynumber; int sinfo_flags; int sinfo_timetolive; int sinfo_assoc_id; int sinfo_context; int sinfo_ppid; int sinfo_stream; } ;
struct sctp_sndinfo {int snd_assoc_id; int snd_context; int snd_ppid; int snd_flags; int snd_sid; } ;
struct sctp_prinfo {int pr_policy; int pr_value; } ;
struct sctp_authinfo {int auth_keynumber; } ;
struct mbuf {int dummy; } ;
struct cmsghdr {int cmsg_len; scalar_t__ cmsg_level; int cmsg_type; } ;
typedef int cmh ;
typedef int caddr_t ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_1 (struct mbuf*) ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_2 (struct mbuf*,int,int,int ) ;
 int FUNC_3 (struct sctp_sndrcvinfo*,int ,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, void *VAR_5, struct mbuf *VAR_6, size_t VAR_7)
{
 struct cmsghdr VAR_8;
 struct sctp_sndinfo VAR_9;
 struct sctp_prinfo VAR_10;
 struct sctp_authinfo VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 int VAR_17;





 VAR_17 = 0;
 VAR_12 = FUNC_1(VAR_6);
 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16 += FUNC_0(VAR_8.cmsg_len)) {
  VAR_13 = VAR_12 - VAR_16;
  if (VAR_13 < (int)FUNC_0(sizeof(VAR_8))) {

   return (VAR_17);
  }
  FUNC_2(VAR_6, VAR_16, sizeof(VAR_8), (caddr_t)&VAR_8);
  if (VAR_8.cmsg_len < FUNC_0(sizeof(VAR_8))) {

   return (VAR_17);
  }
  if ((VAR_8.cmsg_len > VAR_0) || ((int)VAR_8.cmsg_len > VAR_13)) {

   return (VAR_17);
  }
  VAR_14 = (int)VAR_8.cmsg_len - FUNC_0(sizeof(VAR_8));
  VAR_15 = VAR_16 + FUNC_0(sizeof(VAR_8));
  if ((VAR_8.cmsg_level == VAR_1) &&
      ((VAR_4 == VAR_8.cmsg_type) ||
      ((VAR_4 == VAR_3) &&
      ((VAR_8.cmsg_type == 128) ||
      (VAR_8.cmsg_type == 129) ||
      (VAR_8.cmsg_type == 130))))) {
   if (VAR_4 == VAR_8.cmsg_type) {
    if (VAR_7 > VAR_0) {
     return (VAR_17);
    }
    if (VAR_14 < (int)VAR_7) {
     return (VAR_17);
    }

    FUNC_2(VAR_6, VAR_15, (int)VAR_7, (caddr_t)VAR_5);
    return (1);
   } else {
    struct sctp_sndrcvinfo *VAR_18;

    VAR_18 = (struct sctp_sndrcvinfo *)VAR_5;
    if (VAR_17 == 0) {
     if (VAR_7 < sizeof(struct sctp_sndrcvinfo)) {
      return (VAR_17);
     }
     FUNC_3(VAR_18, 0, sizeof(struct sctp_sndrcvinfo));
    }
    switch (VAR_8.cmsg_type) {
    case 128:
     if (VAR_14 < (int)sizeof(struct sctp_sndinfo)) {
      return (VAR_17);
     }
     FUNC_2(VAR_6, VAR_15, sizeof(struct sctp_sndinfo), (caddr_t)&VAR_9);
     VAR_18->sinfo_stream = VAR_9.snd_sid;
     VAR_18->sinfo_flags = VAR_9.snd_flags;
     VAR_18->sinfo_ppid = VAR_9.snd_ppid;
     VAR_18->sinfo_context = VAR_9.snd_context;
     VAR_18->sinfo_assoc_id = VAR_9.snd_assoc_id;
     break;
    case 129:
     if (VAR_14 < (int)sizeof(struct sctp_prinfo)) {
      return (VAR_17);
     }
     FUNC_2(VAR_6, VAR_15, sizeof(struct sctp_prinfo), (caddr_t)&VAR_10);
     if (VAR_10.pr_policy != VAR_2) {
      VAR_18->sinfo_timetolive = VAR_10.pr_value;
     } else {
      VAR_18->sinfo_timetolive = 0;
     }
     VAR_18->sinfo_flags |= VAR_10.pr_policy;
     break;
    case 130:
     if (VAR_14 < (int)sizeof(struct sctp_authinfo)) {
      return (VAR_17);
     }
     FUNC_2(VAR_6, VAR_15, sizeof(struct sctp_authinfo), (caddr_t)&VAR_11);
     VAR_18->sinfo_keynumber_valid = 1;
     VAR_18->sinfo_keynumber = VAR_11.auth_keynumber;
     break;
    default:
     return (VAR_17);
    }
    VAR_17 = 1;
   }
  }
 }
 return (VAR_17);
}
