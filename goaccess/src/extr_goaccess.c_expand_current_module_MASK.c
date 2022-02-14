
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int expanded; scalar_t__ current; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6 (void)
{
  if (VAR_2.expanded && VAR_2.current == VAR_0) {
    FUNC_4 ();
    return;
  }


  if (VAR_2.expanded)
    return;

  FUNC_5 (&VAR_2);
  VAR_2.expanded = 1;

  FUNC_3 (&VAR_3, VAR_2.current);
  FUNC_2 (VAR_1);
  FUNC_1 (VAR_2.current);
  FUNC_0 ();
}
