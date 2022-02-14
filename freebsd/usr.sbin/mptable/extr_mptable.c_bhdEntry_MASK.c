
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* bhd_entry_ptr ;
struct TYPE_3__ {int bus_id; int bus_info; int parent_bus; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1( bhd_entry_ptr VAR_0 )
{

    FUNC_0( "--\nBus Hierarchy\n" );
    FUNC_0( " bus ID: %d", VAR_0->bus_id );
    FUNC_0( " bus info: 0x%02x", VAR_0->bus_info );
    FUNC_0( " parent bus ID: %d\n", VAR_0->parent_bus );
}
