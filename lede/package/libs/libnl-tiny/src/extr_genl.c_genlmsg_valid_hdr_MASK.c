
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlmsghdr {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct genlmsghdr*) ;
 struct genlmsghdr* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct nlmsghdr*,int ) ;

int FUNC_4(struct nlmsghdr *VAR_1, int VAR_2)
{
 struct genlmsghdr *VAR_3;

 if (!FUNC_3(VAR_1, VAR_0))
  return 0;

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_1(VAR_3) < FUNC_0(VAR_2))
  return 0;

 return 1;
}
