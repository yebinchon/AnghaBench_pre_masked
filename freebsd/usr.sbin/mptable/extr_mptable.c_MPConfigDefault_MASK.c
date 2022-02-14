
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1( int VAR_4 )
{
    FUNC_0( "  MP default config type: %d\n\n", VAR_4 );
    switch ( VAR_4 ) {
    case 1:
 FUNC_0( "   bus: ISA, APIC: 82489DX\n" );
 break;
    case 2:
 FUNC_0( "   bus: EISA, APIC: 82489DX\n" );
 break;
    case 3:
 FUNC_0( "   bus: EISA, APIC: 82489DX\n" );
 break;
    case 4:
 FUNC_0( "   bus: MCA, APIC: 82489DX\n" );
 break;
    case 5:
 FUNC_0( "   bus: ISA+PCI, APIC: Integrated\n" );
 break;
    case 6:
 FUNC_0( "   bus: EISA+PCI, APIC: Integrated\n" );
 break;
    case 7:
 FUNC_0( "   bus: MCA+PCI, APIC: Integrated\n" );
 break;
    default:
 FUNC_0( "   future type\n" );
 break;
    }

    switch ( VAR_4 ) {
    case 1:
    case 2:
    case 3:
    case 4:
 VAR_1 = 1;
 break;
    case 5:
    case 6:
    case 7:
 VAR_1 = 2;
 break;
    default:
 FUNC_0( "   future type\n" );
 break;
    }

    VAR_2 = 2;
    VAR_0 = 1;
    VAR_3 = 16;
}
