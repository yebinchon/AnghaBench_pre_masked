
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct __kernel_sockaddr_storage {int dummy; } ;


 int FUNC_0 (struct sockaddr*) ;

int FUNC_1(struct __kernel_sockaddr_storage *VAR_0)
{
 int VAR_1 = FUNC_0((struct sockaddr *) VAR_0);

 return VAR_1 <= sizeof(*VAR_0) ? VAR_1 : 0;
}
