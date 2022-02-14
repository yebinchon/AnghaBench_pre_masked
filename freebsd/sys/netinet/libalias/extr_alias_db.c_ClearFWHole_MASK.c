
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libalias {int fireWallField; int fireWallFD; } ;
struct ip_fw {int dummy; } ;
struct TYPE_4__ {TYPE_1__* tcp; } ;
struct alias_link {scalar_t__ link_type; TYPE_2__ data; struct libalias* la; } ;
struct TYPE_3__ {int fwhole; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct libalias*,int ,int) ;
 int FUNC_1 (struct ip_fw*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_3(struct alias_link *VAR_3)
{
 struct libalias *VAR_4;

 VAR_4 = VAR_3->la;
 if (VAR_3->link_type == VAR_2) {
  int VAR_5 = VAR_3->data.tcp->fwhole;

  struct ip_fw VAR_6;

  if (VAR_5 < 0)
   return;

  FUNC_1(&VAR_6, 0, sizeof VAR_6);
  while (!FUNC_2(VAR_4->fireWallFD, VAR_0, VAR_1,
      &VAR_5, sizeof VAR_5));
  FUNC_0(VAR_4, VAR_4->fireWallField, VAR_5);
  VAR_3->data.tcp->fwhole = -1;
 }
}
