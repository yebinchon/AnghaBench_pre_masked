
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in_addr {int s_addr; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ifnet*,struct in_addr*,struct in_addr*,int *) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(struct ifnet *VAR_1, struct in_addr VAR_2, u_char *VAR_3)
{

 if (FUNC_1(VAR_2.s_addr) != VAR_0)
  FUNC_0(VAR_1, &VAR_2, &VAR_2, VAR_3);
}
