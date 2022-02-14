
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_short ;
struct libalias {int dummy; } ;
struct in_addr {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tcp; } ;
struct alias_link {scalar_t__ link_type; TYPE_2__ data; struct libalias* la; } ;
struct TYPE_3__ {scalar_t__ fwhole; } ;


 struct alias_link* FUNC_0 (struct libalias*,struct in_addr,struct in_addr,struct in_addr,int ,int ,int,int) ;
 int FUNC_1 (struct alias_link*) ;
 int FUNC_2 (struct libalias*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct alias_link*) ;

__attribute__((used)) static struct alias_link *
FUNC_4(struct alias_link *VAR_1,
    struct in_addr VAR_2,
    struct in_addr VAR_3,
    struct in_addr VAR_4,
    u_short VAR_5,
    u_short VAR_6,
    int VAR_7,
    int VAR_8)
{

 struct alias_link *VAR_9;
 struct libalias *VAR_10 = VAR_1->la;

 FUNC_2(VAR_10);
 VAR_9 = FUNC_0(VAR_10, VAR_2, VAR_3, VAR_4,
     VAR_5, VAR_6, VAR_7,
     VAR_8);

 if (VAR_9 != ((void*)0) &&
     VAR_1->link_type == VAR_0 &&
     VAR_1->data.tcp->fwhole > 0) {
  FUNC_3(VAR_9);
 }

 FUNC_1(VAR_1);
 return (VAR_9);
}
