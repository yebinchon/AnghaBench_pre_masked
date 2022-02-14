
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int sin6_addr; } ;
struct TYPE_4__ {int sin6_addr; } ;
struct in6_addrpolicy {scalar_t__ label; scalar_t__ use; TYPE_1__ addrmask; TYPE_2__ addr; } ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;


 int FUNC_1 (struct in6_addrpolicy*) ;
 int FUNC_2 (struct in6_addrpolicy*) ;
 scalar_t__ FUNC_3 (int *,int *) ;

int
FUNC_4(u_long VAR_3, caddr_t VAR_4)
{
 struct in6_addrpolicy VAR_5;

 if (VAR_3 != 129 && VAR_3 != 128)
  return (VAR_2);

 VAR_5 = *(struct in6_addrpolicy *)VAR_4;

 if (VAR_5 == VAR_0)
  return (VAR_1);

 if (FUNC_3(&VAR_5, ((void*)0)) < 0)
  return (VAR_1);

 FUNC_0(&VAR_5, &VAR_5);
 VAR_5 = 0;

 switch (VAR_3) {
 case 129:
  return (FUNC_1(&VAR_5));
 case 128:
  return (FUNC_2(&VAR_5));
 }

 return (0);
}
