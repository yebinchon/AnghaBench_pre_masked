
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, struct sockaddr *VAR_3, void *VAR_4)
{
        struct in_addr VAR_5;

 VAR_5 = ((struct sockaddr_in *)VAR_3)->sin_addr;
 if (VAR_3->sa_family != VAR_0 || VAR_5.s_addr == VAR_1)
         return;
 if (FUNC_0(VAR_2))
  return;
}
