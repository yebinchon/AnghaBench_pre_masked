
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
 int FUNC_1 (int ,char*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct physical *VAR_2)
{
  if (*VAR_2->name.full == '/' && VAR_2->type != VAR_1 &&
      FUNC_0(VAR_2->name.base) == -1)
    FUNC_1(VAR_0, "%s: Can't uu_unlock %s\n", VAR_2->link.name,
               VAR_2->name.base);
}
