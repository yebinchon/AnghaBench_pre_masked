
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sa_family; } ;
union sockaddr_union {TYPE_1__ sa; } ;
struct secasvar {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct secasvar* FUNC_0 (union sockaddr_union*,union sockaddr_union*,int ) ;
 int FUNC_1 (struct secasvar**) ;

__attribute__((used)) static int
FUNC_2(union sockaddr_union *VAR_2, union sockaddr_union *VAR_3)
{
 struct secasvar *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3, VAR_1);
 if (VAR_4 == ((void*)0))
  return (0);
 FUNC_1(&VAR_4);

 if (VAR_2->sa.sa_family == VAR_0)
  return (sizeof(struct in_addr) << 4);
 else
  return (sizeof(struct in6_addr) << 4);
}
