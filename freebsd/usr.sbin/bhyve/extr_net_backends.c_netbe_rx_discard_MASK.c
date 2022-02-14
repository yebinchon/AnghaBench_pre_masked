
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct net_backend {int dummy; } ;
struct iovec {int iov_len; int * iov_base; } ;
typedef int ssize_t ;
typedef int dummybuf ;


 int FUNC_0 (struct net_backend*,struct iovec*,int) ;

ssize_t
FUNC_1(struct net_backend *VAR_0)
{





 static uint8_t VAR_1[65536 + 64];
 struct iovec VAR_2;

 VAR_2.iov_base = VAR_1;
 VAR_2.iov_len = sizeof(VAR_1);

 return FUNC_0(VAR_0, &VAR_2, 1);
}
