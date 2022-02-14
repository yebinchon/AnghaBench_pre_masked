
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int shutdown_requested; int startup_sync_barrier; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_1)
{
    VAR_0.shutdown_requested = 1;
    if (!FUNC_1(&VAR_0.startup_sync_barrier)) {

        FUNC_0(0);
    }
    FUNC_2();
}
