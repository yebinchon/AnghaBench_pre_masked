
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct sockaddr_nl {int dummy; } ;
struct nl_sock {int s_flags; int s_fd; } ;
struct msghdr {void* msg_name; int msg_namelen; int msg_iovlen; unsigned char* msg_control; int msg_controllen; int msg_flags; struct iovec* msg_iov; } ;
struct iovec {int iov_len; unsigned char* iov_base; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; } ;


 int FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_5 (int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 () ;
 unsigned char* FUNC_8 (int) ;
 int FUNC_9 (struct ucred*,int ,int) ;
 int FUNC_10 (scalar_t__) ;
 void* FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (int ,struct msghdr*,int) ;

int FUNC_13(struct nl_sock *VAR_11, struct sockaddr_nl *VAR_12,
     unsigned char **VAR_13, struct ucred **VAR_14)
{
 int VAR_15;
 int VAR_16 = 0;
 static int VAR_17 = 0;
 struct iovec VAR_18;
 struct msghdr VAR_19 = {
  .msg_name = (void *) VAR_12,
  .msg_namelen = sizeof(struct sockaddr_nl),
  .msg_iov = &VAR_18,
  .msg_iovlen = 1,
  .msg_control = ((void*)0),
  .msg_controllen = 0,
  .msg_flags = 0,
 };
 struct cmsghdr *VAR_20;

 if (VAR_11->s_flags & VAR_6)
  VAR_16 |= VAR_3;

 if (VAR_17 == 0)
  VAR_17 = FUNC_7() * 4;

 VAR_18.iov_len = VAR_17;
 VAR_18.iov_base = *VAR_13 = FUNC_8(VAR_18.iov_len);

 if (VAR_11->s_flags & VAR_7) {
  VAR_19.msg_controllen = FUNC_3(sizeof(struct ucred));
  VAR_19.msg_control = FUNC_5(1, VAR_19.msg_controllen);
 }
retry:

 VAR_15 = FUNC_12(VAR_11->s_fd, &VAR_19, VAR_16);
 if (!VAR_15)
  goto abort;
 else if (VAR_15 < 0) {
  if (VAR_10 == VAR_1) {
   FUNC_4(3, "recvmsg() returned EINTR, retrying\n");
   goto retry;
  } else if (VAR_10 == VAR_0) {
   FUNC_4(3, "recvmsg() returned EAGAIN, aborting\n");
   goto abort;
  } else {
   FUNC_6(VAR_19.msg_control);
   FUNC_6(*VAR_13);
   return -FUNC_10(VAR_10);
  }
 }

 if (VAR_18.iov_len < VAR_15 ||
     VAR_19.msg_flags & VAR_4) {


  VAR_18.iov_len *= 2;
  VAR_18.iov_base = *VAR_13 = FUNC_11(*VAR_13, VAR_18.iov_len);
  goto retry;
 } else if (VAR_19.msg_flags & VAR_2) {
  VAR_19.msg_controllen *= 2;
  VAR_19.msg_control = FUNC_11(VAR_19.msg_control, VAR_19.msg_controllen);
  goto retry;
 } else if (VAR_16 != 0) {

  VAR_16 = 0;
  goto retry;
 }

 if (VAR_19.msg_namelen != sizeof(struct sockaddr_nl)) {
  FUNC_6(VAR_19.msg_control);
  FUNC_6(*VAR_13);
  return -VAR_5;
 }

 for (VAR_20 = FUNC_1(&VAR_19); VAR_20; VAR_20 = FUNC_2(&VAR_19, VAR_20)) {
  if (VAR_20->cmsg_level == VAR_9 &&
      VAR_20->cmsg_type == VAR_8) {
   *VAR_14 = FUNC_5(1, sizeof(struct ucred));
   FUNC_9(*VAR_14, FUNC_0(VAR_20), sizeof(struct ucred));
   break;
  }
 }

 FUNC_6(VAR_19.msg_control);
 return VAR_15;

abort:
 FUNC_6(VAR_19.msg_control);
 FUNC_6(*VAR_13);
 return 0;
}
