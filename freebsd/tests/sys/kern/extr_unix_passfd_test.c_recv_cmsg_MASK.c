
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {char* msg_control; size_t msg_controllen; int msg_iovlen; int msg_flags; struct iovec* msg_iov; } ;
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
FUNC_4(int VAR_1, char *VAR_2, size_t VAR_3, int VAR_4)
{
 struct iovec VAR_5;
 struct msghdr VAR_6;
 ssize_t VAR_7;
 char VAR_8;

 VAR_8 = 0;
 FUNC_1(&VAR_6, sizeof(VAR_6));

 VAR_5.iov_base = &VAR_8;
 VAR_5.iov_len = sizeof(VAR_8);
 VAR_6.msg_control = VAR_2;
 VAR_6.msg_controllen = VAR_3;
 VAR_6.msg_iov = &VAR_5;
 VAR_6.msg_iovlen = 1;

 VAR_7 = FUNC_2(VAR_1, &VAR_6, 0);
 FUNC_0(VAR_7 != -1,
     "recvmsg failed: %s", FUNC_3(VAR_0));
 FUNC_0(VAR_7 == sizeof(VAR_8),
     "recvmsg: %zd bytes received; expected %zu", VAR_7, sizeof(VAR_8));
 FUNC_0((VAR_6.msg_flags & VAR_4) == VAR_4,
     "recvmsg: got flags %#x; expected %#x", VAR_6.msg_flags, VAR_4);
}
