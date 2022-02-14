
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_backend {int fd; } ;
struct iovec {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,struct iovec*,int) ;

__attribute__((used)) static ssize_t
FUNC_1(struct net_backend *VAR_0, struct iovec *VAR_1, int VAR_2)
{
 return (FUNC_0(VAR_0->fd, VAR_1, VAR_2));
}
