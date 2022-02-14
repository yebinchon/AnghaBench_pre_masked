
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct in_addr {int dummy; } ;
struct TYPE_2__ {struct in_addr addr4; } ;
struct llentry {int lle_refcnt; int lle_timer; int lle_free; TYPE_1__ r_l3addr; int la_expire; } ;
struct in_llentry {struct llentry base; } ;


 int FUNC_0 (struct llentry*) ;
 int FUNC_1 (struct llentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;
 int VAR_3 ;
 struct in_llentry* FUNC_3 (int,int ,int) ;
 int VAR_4 ;

__attribute__((used)) static struct llentry *
FUNC_4(struct in_addr VAR_5, u_int VAR_6)
{
 struct in_llentry *VAR_7;

 VAR_7 = FUNC_3(sizeof(struct in_llentry), VAR_0, VAR_1 | VAR_2);
 if (VAR_7 == ((void*)0))
  return ((void*)0);





 VAR_7->base.la_expire = VAR_4;
 VAR_7->base.r_l3addr.addr4 = VAR_5;
 VAR_7->base.lle_refcnt = 1;
 VAR_7->base.lle_free = VAR_3;
 FUNC_0(&VAR_7->base);
 FUNC_1(&VAR_7->base);
 FUNC_2(&VAR_7->base.lle_timer, 1);

 return (&VAR_7->base);
}
