
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_prefix {int dummy; } ;
struct in6_addrlifetime {scalar_t__ ia6t_vltime; scalar_t__ ia6t_expire; scalar_t__ ia6t_pltime; scalar_t__ ia6t_preferred; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct nd_prefix *VAR_2, struct in6_addrlifetime *VAR_3)
{

 if (VAR_3->ia6t_vltime == VAR_0)
  VAR_3->ia6t_expire = 0;
 else {
  VAR_3->ia6t_expire = VAR_1;
  VAR_3->ia6t_expire += VAR_3->ia6t_vltime;
 }


 if (VAR_3->ia6t_pltime == VAR_0)
  VAR_3->ia6t_preferred = 0;
 else {
  VAR_3->ia6t_preferred = VAR_1;
  VAR_3->ia6t_preferred += VAR_3->ia6t_pltime;
 }
}
