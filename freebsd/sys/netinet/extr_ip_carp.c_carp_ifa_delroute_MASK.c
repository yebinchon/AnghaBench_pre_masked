
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct TYPE_8__ {int ia_addr; } ;
struct TYPE_7__ {int ia_addr; } ;
struct TYPE_6__ {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (struct ifaddr*,struct sockaddr*) ;
 TYPE_3__* FUNC_1 (struct ifaddr*) ;
 TYPE_2__* FUNC_2 (struct ifaddr*) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(struct ifaddr *VAR_1)
{

 switch (VAR_1->ifa_addr->sa_family) {
 }
}
