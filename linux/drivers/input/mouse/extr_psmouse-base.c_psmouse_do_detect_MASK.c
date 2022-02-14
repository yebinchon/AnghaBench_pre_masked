
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* serio; } ;
struct psmouse {TYPE_3__ ps2dev; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct psmouse*) ;

__attribute__((used)) static bool FUNC_1(int (*VAR_1)(struct psmouse *, bool),
         struct psmouse *VAR_2, bool VAR_3,
         bool VAR_4)
{
 if (VAR_2->ps2dev.serio->id.type == VAR_0 &&
     !VAR_3) {
  return 0;
 }

 if (VAR_4)
  FUNC_0(VAR_2);

 return VAR_1(VAR_2, VAR_4) == 0;
}
