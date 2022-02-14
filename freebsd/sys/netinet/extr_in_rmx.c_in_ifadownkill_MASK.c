
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_ifa; int rt_flags; } ;
struct in_ifadown_arg {scalar_t__ ifa; scalar_t__ del; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const struct rtentry *VAR_1, void *VAR_2)
{
 struct in_ifadown_arg *VAR_3 = VAR_2;

 if (VAR_1->rt_ifa != VAR_3->ifa)
  return (0);

 if ((VAR_1->rt_flags & VAR_0) != 0 && VAR_3->del == 0)
  return (0);

 return (1);
}
