
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct msghdr {int msg_namelen; int msg_iovlen; scalar_t__ msg_controllen; int * msg_control; scalar_t__ msg_flags; struct iovec* msg_iov; void* msg_name; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct in6_pktinfo {int ipi6_ifindex; int ipi6_addr; } ;
struct cmsghdr {int cmsg_type; int cmsg_level; int cmsg_len; } ;
typedef int cmsgbuf ;
typedef void* caddr_t ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int *,int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,struct msghdr*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,char*,int ) ;

__attribute__((used)) static int
FUNC_9(struct sockaddr_in6 *VAR_5, int VAR_6)
{
 struct msghdr VAR_7;
 struct cmsghdr *VAR_8;
 struct iovec VAR_9[2];
 struct in6_pktinfo *VAR_10;
 u_char VAR_11[256];
 int VAR_12;
 struct sockaddr_in6 VAR_13;


 VAR_13 = *VAR_5;
 VAR_5 = &VAR_13;

 if (FUNC_3(&VAR_5->sin6_addr) ||
     FUNC_4(&VAR_5->sin6_addr))
  VAR_12 = VAR_5->sin6_scope_id;
 else
  VAR_12 = 0;

 VAR_7.msg_name = (caddr_t)VAR_5;
 VAR_7.msg_namelen = sizeof(*VAR_5);
 VAR_9[0].iov_base = (caddr_t)VAR_3;
 VAR_9[0].iov_len = VAR_6;
 VAR_7.msg_iov = VAR_9;
 VAR_7.msg_iovlen = 1;
 VAR_7.msg_flags = 0;
 if (!VAR_12) {
  VAR_7.msg_control = ((void*)0);
  VAR_7.msg_controllen = 0;
 } else {
  FUNC_5(VAR_11, 0, sizeof(VAR_11));
  VAR_8 = (struct cmsghdr *)(void *)VAR_11;
  VAR_7.msg_control = (caddr_t)VAR_8;
  VAR_7.msg_controllen = FUNC_2(sizeof(struct in6_pktinfo));

  VAR_8->cmsg_len = FUNC_1(sizeof(struct in6_pktinfo));
  VAR_8->cmsg_level = VAR_0;
  VAR_8->cmsg_type = VAR_1;
  VAR_10 = (struct in6_pktinfo *)(void *)FUNC_0(VAR_8);
  FUNC_5(&VAR_10->ipi6_addr, 0, sizeof(VAR_10->ipi6_addr));
  VAR_10->ipi6_ifindex = VAR_12;
 }

 if (FUNC_6(VAR_4, &VAR_7, 0 ) < 0) {
  FUNC_8(1, "sendmsg: %s\n", FUNC_7(VAR_2));
  return VAR_2;
 }

 return 0;
}
