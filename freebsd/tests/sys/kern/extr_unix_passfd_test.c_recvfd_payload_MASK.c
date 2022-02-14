
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {char* msg_control; size_t msg_controllen; int msg_iovlen; struct iovec* msg_iov; } ;
struct iovec {size_t iov_len; void* iov_base; } ;
struct cmsghdr {scalar_t__ cmsg_level; scalar_t__ cmsg_type; scalar_t__ cmsg_len; } ;
typedef int ssize_t ;
typedef int msghdr ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_3 (struct msghdr*) ;
 scalar_t__ FUNC_4 (int) ;
 struct cmsghdr* FUNC_5 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct msghdr*,int) ;
 int VAR_3 ;
 int FUNC_7 (int) ;
 char* FUNC_8 (size_t) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int,struct msghdr*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(int VAR_4, int *VAR_5, void *VAR_6, size_t VAR_7,
    size_t VAR_8)
{
 struct cmsghdr *VAR_9;
 struct msghdr VAR_10;
 struct iovec VAR_11;
 char *VAR_12;
 ssize_t VAR_13;
 bool VAR_14;

 FUNC_6(&VAR_10, sizeof(VAR_10));
 VAR_12 = FUNC_8(VAR_8);
 FUNC_0(VAR_12 != ((void*)0));

 VAR_10.msg_control = VAR_12;
 VAR_10.msg_controllen = VAR_8;

 VAR_11.iov_base = VAR_6;
 VAR_11.iov_len = VAR_7;

 VAR_10.msg_iov = &VAR_11;
 VAR_10.msg_iovlen = 1;

 VAR_13 = FUNC_10(VAR_4, &VAR_10, 0);
 FUNC_1(VAR_13 != -1, "recvmsg failed: %s", FUNC_11(VAR_3));
 FUNC_1((size_t)VAR_13 == VAR_7,
     "recvmsg: %zd bytes received; expected %zd", VAR_13, VAR_7);

 VAR_9 = FUNC_3(&VAR_10);
 FUNC_1(VAR_9 != ((void*)0),
     "recvmsg: did not receive control message");
 VAR_14 = 0;
 *VAR_5 = -1;
 for (; VAR_9 != ((void*)0); VAR_9 = FUNC_5(&VAR_10, VAR_9)) {
  if (VAR_9->cmsg_level == VAR_2 &&
      VAR_9->cmsg_type == VAR_1 &&
      VAR_9->cmsg_len == FUNC_4(sizeof(int))) {
   FUNC_9(VAR_5, FUNC_2(VAR_9), sizeof(int));
   FUNC_0(*VAR_5 != -1);
  } else if (VAR_9->cmsg_level == VAR_2 &&
      VAR_9->cmsg_type == VAR_0)
   VAR_14 = 1;
 }
 FUNC_1(*VAR_5 != -1,
     "recvmsg: did not receive single-fd message");
 FUNC_1(!FUNC_7(VAR_4) || VAR_14,
     "recvmsg: expected credentials were not received");
}
