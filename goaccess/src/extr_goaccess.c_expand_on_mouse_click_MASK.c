
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mouse_support; } ;
struct TYPE_4__ {int bstate; int y; } ;
typedef TYPE_1__ MEVENT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2 (void)
{
  int VAR_3;
  MEVENT VAR_4;

  VAR_3 = FUNC_1 (&VAR_4);
  if (!VAR_2.mouse_support || VAR_3 != VAR_1)
    return;

  if (VAR_4.bstate & VAR_0)
    FUNC_0 (VAR_4.y);
}
