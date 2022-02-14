
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ia6t_vltime; scalar_t__ ia6t_pltime; void* ia6t_preferred; void* ia6t_expire; } ;
struct in6_ifaddr {int ia6_flags; TYPE_1__ ia6_lifetime; void* ia6_updatetime; } ;
struct in6_aliasreq {int ifra_flags; TYPE_1__ ifra_lifetime; } ;
struct ifnet {int dummy; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_2__* FUNC_0 (struct ifnet*) ;
 int FUNC_1 (struct ifnet*,struct in6_ifaddr*,struct in6_aliasreq*,int) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 void* VAR_5 ;

__attribute__((used)) static int
FUNC_3(struct ifnet *VAR_6, struct in6_aliasreq *VAR_7,
    struct in6_ifaddr *VAR_8, int VAR_9, int VAR_10)
{
 int VAR_11;


 VAR_8->ia6_updatetime = VAR_5;






 VAR_8->ia6_lifetime = VAR_7->ifra_lifetime;
 if (VAR_8->ia6_lifetime.ia6t_vltime != VAR_4) {
  VAR_8->ia6_lifetime.ia6t_expire =
      VAR_5 + VAR_8->ia6_lifetime.ia6t_vltime;
 } else
  VAR_8->ia6_lifetime.ia6t_expire = 0;
 if (VAR_8->ia6_lifetime.ia6t_pltime != VAR_4) {
  VAR_8->ia6_lifetime.ia6t_preferred =
      VAR_5 + VAR_8->ia6_lifetime.ia6t_pltime;
 } else
  VAR_8->ia6_lifetime.ia6t_preferred = 0;





 if ((VAR_7->ifra_flags & VAR_0) != 0) {
  VAR_8->ia6_lifetime.ia6t_pltime = 0;
  VAR_8->ia6_lifetime.ia6t_preferred = VAR_5;
 }




 VAR_8->ia6_flags = VAR_7->ifra_flags;






 VAR_8->ia6_flags &= ~VAR_1;





 if (FUNC_2(VAR_6) &&
     (VAR_9 || (FUNC_0(VAR_6)->flags & VAR_3)))
  VAR_8->ia6_flags |= VAR_2;


 VAR_11 = FUNC_1(VAR_6, VAR_8, VAR_7, VAR_9);

 return (VAR_11);
}
