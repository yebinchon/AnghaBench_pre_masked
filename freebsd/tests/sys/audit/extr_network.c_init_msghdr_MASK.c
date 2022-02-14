
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int dummy; } ;
struct msghdr {int msg_iovlen; struct iovec* msg_iov; scalar_t__ msg_namelen; struct sockaddr_un* msg_name; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ socklen_t ;


 int FUNC_0 (struct msghdr*,int) ;

__attribute__((used)) static void
FUNC_1(struct msghdr *VAR_0, struct iovec *VAR_1, struct sockaddr_un *VAR_2)
{
 socklen_t VAR_3;

 FUNC_0(VAR_0, sizeof(*VAR_0));
 VAR_3 = (socklen_t)sizeof(struct sockaddr_un);
 VAR_0->msg_name = VAR_2;
 VAR_0->msg_namelen = VAR_3;
 VAR_0->msg_iov = VAR_1;
 VAR_0->msg_iovlen = 1;
}
