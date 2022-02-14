
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct llentry {scalar_t__ ln_state; struct mbuf* la_hold; } ;


 int FUNC_0 (struct llentry*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct llentry*,struct sockaddr*) ;
 int FUNC_2 (struct llentry*,int ) ;

void
FUNC_3(struct llentry *VAR_2, struct mbuf **VAR_3,
    struct sockaddr_in6 *VAR_4)
{

 FUNC_0(VAR_2);

 *VAR_3 = VAR_2->la_hold;
 VAR_2->la_hold = ((void*)0);
 FUNC_1(VAR_2, (struct sockaddr *)VAR_4);

 if (VAR_2->ln_state == VAR_1) {
  FUNC_2(VAR_2, VAR_0);
 }
}
