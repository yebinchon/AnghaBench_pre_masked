
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in_addr,int ,int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_4, struct sockaddr *VAR_5, void *VAR_6)
{
 struct in_addr VAR_7;

 VAR_7 = ((struct sockaddr_in *)VAR_5)->sin_addr;
 if (VAR_5->sa_family != VAR_0 || VAR_7.s_addr == VAR_1)
  return;

 FUNC_0(VAR_7, VAR_2[VAR_4], VAR_3);
}
