
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_multi {int dummy; } ;
struct in_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct epoch_tracker {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct epoch_tracker) ;
 int FUNC_2 (struct epoch_tracker) ;
 struct in_multi* FUNC_3 (struct ifnet*,struct in_addr const) ;

struct in_multi *
FUNC_4(struct ifnet *VAR_0, const struct in_addr VAR_1)
{
 struct epoch_tracker VAR_2;
 struct in_multi *VAR_3;

 FUNC_0();
 FUNC_1(VAR_2);

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_2);

 return (VAR_3);
}
