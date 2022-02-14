
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int current; } ;
struct TYPE_8__ {int * processed; } ;
struct TYPE_7__ {int processed; } ;


 TYPE_1__* VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8 (void)
{

  VAR_1.current = FUNC_2 ();

  FUNC_6 ();

  FUNC_4 ();






  VAR_0 = FUNC_1 ();

  FUNC_5 ();
  FUNC_7 (VAR_0);


  VAR_2 = FUNC_3 ();
  VAR_2->processed = &VAR_0->processed;
}
