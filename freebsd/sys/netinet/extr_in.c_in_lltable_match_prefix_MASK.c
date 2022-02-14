
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct in_addr {scalar_t__ s_addr; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ addr4; } ;
struct llentry {int la_flags; TYPE_2__ r_l3addr; } ;


 scalar_t__ FUNC_0 (struct in_addr,struct in_addr,struct in_addr) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct sockaddr *VAR_2,
    const struct sockaddr *VAR_3, u_int VAR_4, struct llentry *VAR_5)
{
 struct in_addr VAR_6, VAR_7, VAR_8;

 VAR_6 = ((const struct sockaddr_in *)VAR_2)->sin_addr;
 VAR_7 = ((const struct sockaddr_in *)VAR_3)->sin_addr;
 VAR_8.s_addr = FUNC_1(VAR_5->r_l3addr.addr4.s_addr);

 if (FUNC_0(VAR_8, VAR_6, VAR_7) == 0)
  return (0);

 if (VAR_5->la_flags & VAR_0) {
  if (VAR_6.s_addr == VAR_8.s_addr && (VAR_4 & VAR_1) != 0)
   return (1);
  return (0);
 }


 if ((VAR_4 & VAR_1) || !(VAR_5->la_flags & VAR_1))
  return (1);

 return (0);
}
