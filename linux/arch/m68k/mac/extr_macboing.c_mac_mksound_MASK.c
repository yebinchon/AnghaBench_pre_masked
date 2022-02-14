
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int __u32 ;
struct TYPE_4__ {scalar_t__ expires; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 TYPE_1__ VAR_10 ;
 int FUNC_6 (unsigned int,unsigned int,int) ;

void FUNC_7( unsigned int VAR_11, unsigned int VAR_12 )
{
 __u32 VAR_13 = ( VAR_11 << 5 ) / 468;
 unsigned long VAR_14;
 int VAR_15;

 if ( &FUNC_6 == ((void*)0) )
 {

  return;
 }

 if ( !VAR_7 )
  FUNC_4();

 if ( &FUNC_6 )
 {
  FUNC_6( VAR_11, VAR_12, 128 );
  return;
 }

 if ( VAR_11 < 20 || VAR_11 > 20000 || VAR_12 == 0 )
 {
  FUNC_5( 0 );
  return;
 }

 FUNC_3(VAR_14);

 FUNC_1( &VAR_10 );

 for ( VAR_15 = 0; VAR_15 < 0x800; VAR_15++ )
  VAR_8[ VAR_15 ] = 0;
 for ( VAR_15 = 0; VAR_15 < 0x800; VAR_15++ )
  VAR_8[ VAR_15 ] = VAR_9[ VAR_15 ];

 for ( VAR_15 = 0; VAR_15 < 8; VAR_15++ )
  *( __u32* )( ( __u32 )VAR_8 + VAR_0 + 0x814 + 8 * VAR_15 ) = VAR_13;

 VAR_8[ 0x807 ] = 0;
 VAR_8[ VAR_5 ] = 128;
 VAR_8[ 0x805 ] = 0;
 VAR_8[ 0x80F ] = 0;
 VAR_8[ VAR_3 ] = VAR_4;
 VAR_8[ VAR_1 ] = VAR_2;

 VAR_10.expires = VAR_6 + VAR_12;
 FUNC_0( &VAR_10 );

 FUNC_2(VAR_14);
}
