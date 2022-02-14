
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int expanded; int current; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_7 (int VAR_5)
{

  if (VAR_5 < VAR_1 || VAR_5 == VAR_0 - 1)
    return;

  if (FUNC_6 (&VAR_3, VAR_2, VAR_5))
    return;

  FUNC_5 (&VAR_3);
  VAR_3.expanded = 1;

  FUNC_3 (&VAR_4, VAR_3.current);
  FUNC_2 (VAR_2);
  FUNC_1 (VAR_3.current);
  FUNC_0 ();

  FUNC_4 ();
}
