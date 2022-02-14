
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct physical {TYPE_1__ name; } ;
typedef int pid_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (struct physical*) ;
 int FUNC_3 (int) ;

void
FUNC_4(struct physical *VAR_2, pid_t VAR_3)
{
  if (FUNC_2(VAR_2)) {
    int VAR_4;

    if ((VAR_4 = FUNC_0(VAR_2->name.base, VAR_3)) != VAR_1)
      FUNC_1(VAR_0, "uu_lock_txfr: %s\n", FUNC_3(VAR_4));
  }
}
