
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const byte ;
struct TYPE_2__ {int fileSize; int moviOffset; int moviSize; int maxRecordSize; int numIndices; int idxF; int numVideoFrames; int f; int fileOpen; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int const* VAR_2 ;

void FUNC_5( const byte *VAR_3, int VAR_4 )
{
  int VAR_5 = VAR_0.fileSize - VAR_0.moviOffset - 8;
  int VAR_6 = 8 + VAR_4;
  int VAR_7 = FUNC_1(VAR_4, 2);
  byte VAR_8[ 4 ] = { 0 };

  if( !VAR_0.fileOpen )
    return;


  if( FUNC_0( 8 + VAR_4 + 2 ) )
    return;

  VAR_1 = 0;
  FUNC_4( "00dc" );
  FUNC_3( VAR_4 );

  FUNC_2( VAR_2, 8, VAR_0.f );
  FUNC_2( VAR_3, VAR_4, VAR_0.f );
  FUNC_2( VAR_8, VAR_7, VAR_0.f );
  VAR_0.fileSize += ( VAR_6 + VAR_7 );

  VAR_0.numVideoFrames++;
  VAR_0.moviSize += ( VAR_6 + VAR_7 );

  if( VAR_4 > VAR_0.maxRecordSize )
    VAR_0.maxRecordSize = VAR_4;


  VAR_1 = 0;
  FUNC_4( "00dc" );
  FUNC_3( 0x00000010 );
  FUNC_3( VAR_5 );
  FUNC_3( VAR_4 );
  FUNC_2( VAR_2, 16, VAR_0.idxF );

  VAR_0.numIndices++;
}
