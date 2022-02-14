
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_entry_ptr ;
struct TYPE_3__ {int apic_id; int apic_version; int cpu_flags; int cpu_signature; int feature_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1( proc_entry_ptr VAR_3 )
{


    ++VAR_2;

    FUNC_0( "\t\t%2d", VAR_3->apic_id );
    FUNC_0( "\t 0x%2x", VAR_3->apic_version );

    FUNC_0( "\t %s, %s",
            (VAR_3->cpu_flags & VAR_0) ? "BSP" : "AP",
            (VAR_3->cpu_flags & VAR_1) ? "usable" : "unusable" );

    FUNC_0( "\t %d\t %d\t %d",
            (VAR_3->cpu_signature >> 8) & 0x0f,
            (VAR_3->cpu_signature >> 4) & 0x0f,
            VAR_3->cpu_signature & 0x0f );

    FUNC_0( "\t 0x%04x\n", VAR_3->feature_flags );
}
