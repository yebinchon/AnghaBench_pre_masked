
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef TYPE_1__* sas_entry_ptr ;
struct TYPE_3__ {int bus_id; int address_type; scalar_t__ address_length; scalar_t__ address_base; } ;





 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1( sas_entry_ptr VAR_0 )
{

    FUNC_0( "--\nSystem Address Space\n");
    FUNC_0( " bus ID: %d", VAR_0->bus_id );
    FUNC_0( " address type: " );
    switch ( VAR_0->address_type ) {
    case 130:
 FUNC_0( "I/O address\n" );
 break;
    case 129:
 FUNC_0( "memory address\n" );
 break;
    case 128:
 FUNC_0( "prefetch address\n" );
 break;
    default:
 FUNC_0( "UNKNOWN type\n" );
 break;
    }

    FUNC_0( " address base: 0x%jx\n", (uintmax_t)VAR_0->address_base );
    FUNC_0( " address range: 0x%jx\n", (uintmax_t)VAR_0->address_length );
}
