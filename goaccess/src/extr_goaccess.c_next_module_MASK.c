
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int no_tab_scroll; } ;
struct TYPE_3__ {int current; int dash; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_2 (void)
{
  int VAR_3 = -1;

  if ((VAR_3 = FUNC_1 (VAR_2.current)) == -1)
    return 1;

  VAR_2.current = VAR_3;
  if (!VAR_1.no_tab_scroll)
    VAR_2.dash = FUNC_0 (VAR_2.current) * VAR_0;

  return 0;
}
