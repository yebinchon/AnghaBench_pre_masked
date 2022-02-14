
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tentry_info {int masklen; scalar_t__ subtype; scalar_t__ paddr; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int a4; int a6; } ;
struct chashentry {TYPE_1__ a; scalar_t__ type; } ;
typedef int in_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,struct in6_addr*) ;
 int VAR_2 ;
 int FUNC_1 (struct in6_addr*,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct tentry_info *VAR_3, struct chashentry *VAR_4)
{
 int VAR_5;





 VAR_5 = VAR_3->masklen;

 if (VAR_3->subtype == VAR_0) {
 } else {

  return (VAR_2);
 }

 return (0);
}
