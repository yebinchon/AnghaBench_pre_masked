
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pieces; scalar_t__ ended; } ;
typedef TYPE_1__ uiDrawPath ;
struct piece {int dummy; } ;


 int FUNC_0 (int ,struct piece*,int) ;
 int FUNC_1 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(uiDrawPath *VAR_0, struct piece *VAR_1)
{
 if (VAR_0->ended)
  FUNC_1("You cannot modify a uiDrawPath that has been ended. (path: %p)", VAR_0);
 FUNC_0(VAR_0->pieces, VAR_1, 1);
}
