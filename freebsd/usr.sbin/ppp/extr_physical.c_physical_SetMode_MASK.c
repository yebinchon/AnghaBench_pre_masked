
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct physical {int type; TYPE_1__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct physical *VAR_4, int VAR_5)
{
  if ((VAR_4->type & (VAR_3|VAR_2) ||
       VAR_5 & (VAR_3|VAR_2)) &&
      (!(VAR_4->type & VAR_3) || !(VAR_5 & VAR_1))) {

    FUNC_0(VAR_0, "%s: Cannot change mode %s to %s\n", VAR_4->link.name,
               FUNC_1(VAR_4->type), FUNC_1(VAR_5));
    return 0;
  }
  VAR_4->type = VAR_5;
  return 1;
}
