
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct in6_addrpolicy {int use; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct in6_addrpolicy VAR_0 ;
 struct in6_addrpolicy* FUNC_2 (struct sockaddr_in6*) ;

__attribute__((used)) static struct in6_addrpolicy *
FUNC_3(struct sockaddr_in6 *VAR_1)
{
 struct in6_addrpolicy *VAR_2 = ((void*)0);

 FUNC_0();
 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2 == ((void*)0))
  VAR_2 = &VAR_0;
 else
  VAR_2->use++;
 FUNC_1();

 return (VAR_2);
}
