
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (struct sockaddr_in*,struct sockaddr_in6*) ;

void
FUNC_1(struct sockaddr *VAR_0)
{
 struct sockaddr_in *VAR_1;
 struct sockaddr_in6 VAR_2;





 VAR_2 = *(struct sockaddr_in6 *)VAR_0;
 VAR_1 = (struct sockaddr_in *)VAR_0;
 FUNC_0(VAR_1, &VAR_2);
}
