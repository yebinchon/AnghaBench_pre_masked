
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {int fd; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int,struct iovec*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct net_backend *VAR_2, struct iovec *VAR_3, int VAR_4)
{
 ssize_t VAR_5;


 FUNC_0(VAR_2->fd != -1);

 VAR_5 = FUNC_1(VAR_2->fd, VAR_3, VAR_4);

 if (VAR_5 < 0 && VAR_1 == VAR_0) {
  return (0);
 }

 return (VAR_5);
}
