
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* full; int base; } ;
struct TYPE_3__ {int name; } ;
struct physical {scalar_t__ type; TYPE_2__ name; TYPE_1__ link; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int ,char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct physical *VAR_4)
{
  int VAR_5;

  if (*VAR_4->name.full == '/' && VAR_4->type != VAR_1 &&
      (VAR_5 = FUNC_0(VAR_4->name.base)) != VAR_3) {
    if (VAR_5 == VAR_2)
      FUNC_1(VAR_0, "%s: %s is in use\n", VAR_4->link.name, VAR_4->name.full);
    else
      FUNC_1(VAR_0, "%s: %s is in use: uu_lock: %s\n",
                 VAR_4->link.name, VAR_4->name.full, FUNC_2(VAR_5));
    return 0;
  }

  return 1;
}
