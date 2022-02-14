
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int no_tab_scroll; } ;
struct TYPE_6__ {int dash; } ;
struct TYPE_5__ {int current; } ;
typedef TYPE_1__ GScroll ;
typedef int GModule ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (GScroll * VAR_3, GModule VAR_4)
{
  if (FUNC_2 (VAR_4) == -1) {
    FUNC_1 (VAR_4);
    return;
  }


  if (!VAR_1.no_tab_scroll)
    VAR_2.dash = FUNC_2 (VAR_4) * VAR_0;


  FUNC_0 ();
  VAR_3->current = VAR_4;
  FUNC_3 ();
}
