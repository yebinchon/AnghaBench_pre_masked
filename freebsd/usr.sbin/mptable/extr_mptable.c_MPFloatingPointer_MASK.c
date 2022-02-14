
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* mpfps_t ;
struct TYPE_4__ {int length; int spec_rev; int checksum; int mpfb2; scalar_t__ mpfb5; scalar_t__ mpfb4; scalar_t__ mpfb3; int signature; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4( u_int32_t VAR_1, int VAR_2, mpfps_t* VAR_3 )
{
    mpfps_t VAR_4;


    *VAR_3 = VAR_4 = FUNC_1( VAR_1, sizeof( *VAR_4 ) );


    FUNC_3( "MP Floating Pointer Structure:\n\n" );

    FUNC_3( "  location:\t\t\t" );
    switch ( VAR_2 )
    {
    case 1:
 FUNC_3( "EBDA\n" );
 break;
    case 2:
 FUNC_3( "BIOS base memory\n" );
 break;
    case 3:
 FUNC_3( "DEFAULT base memory (639K)\n" );
 break;
    case 4:
 FUNC_3( "BIOS\n" );
 break;
    case 5:
 FUNC_3( "Extended BIOS\n" );
 break;

    case 0:
 FUNC_3( "NOT found!\n" );
 FUNC_0( 1 );
    default:
 FUNC_3( "BOGUS!\n" );
 FUNC_0( 1 );
    }
    FUNC_3( "  physical address:\t\t0x%08x\n", VAR_1 );

    FUNC_3( "  signature:\t\t\t'" );
    FUNC_2( VAR_4->signature, 4 );
    FUNC_3( "'\n" );

    FUNC_3( "  length:\t\t\t%d bytes\n", VAR_4->length * 16 );
    FUNC_3( "  version:\t\t\t1.%1d\n", VAR_4->spec_rev );
    FUNC_3( "  checksum:\t\t\t0x%02x\n", VAR_4->checksum );


    if ( VAR_4->mpfb2 & 0x7f ) {
        FUNC_3( " warning, MP feature byte 2: 0x%02x\n", VAR_4->mpfb2 );
    }


    FUNC_3( "  mode:\t\t\t\t%s\n", (VAR_4->mpfb2 & VAR_0) ?
            "PIC" : "Virtual Wire" );


    if ( VAR_4->mpfb3 )
        FUNC_3( " warning, MP feature byte 3 NONZERO!\n" );
    if ( VAR_4->mpfb4 )
        FUNC_3( " warning, MP feature byte 4 NONZERO!\n" );
    if ( VAR_4->mpfb5 )
        FUNC_3( " warning, MP feature byte 5 NONZERO!\n" );
}
