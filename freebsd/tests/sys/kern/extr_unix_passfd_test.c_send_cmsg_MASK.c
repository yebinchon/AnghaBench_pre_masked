
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {size_t msg_controllen; int msg_iovlen; struct iovec* msg_iov; void* msg_control; } ;
struct iovec {char* iov_base; int iov_len; } ;
typedef int ssize_t ;
typedef int msghdr ;
typedef int ch ;


 int FUNC_0 (int,char*,int,...) ;
 int FUNC_1 (struct msghdr*,int) ;
 int VAR_0 ;
 int FUNC_2 (int,struct msghdr*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(int VAR_1, void *VAR_2, size_t VAR_3)
{
 struct iovec VAR_4;
 struct msghdr VAR_5;
 ssize_t VAR_6;
 char VAR_7;

 VAR_7 = 0;
 FUNC_1(&VAR_5, sizeof(VAR_5));

 VAR_4.iov_base = &VAR_7;
 VAR_4.iov_len = sizeof(VAR_7);
 VAR_5.msg_control = VAR_2;
 VAR_5.msg_controllen = VAR_3;
 VAR_5.msg_iov = &VAR_4;
 VAR_5.msg_iovlen = 1;

 VAR_6 = FUNC_2(VAR_1, &VAR_5, 0);
 FUNC_0(VAR_6 != -1,
     "sendmsg failed: %s", FUNC_3(VAR_0));
 FUNC_0(VAR_6 == sizeof(VAR_7),
     "sendmsg: %zd bytes sent; expected %zu", VAR_6, sizeof(VAR_7));
}
