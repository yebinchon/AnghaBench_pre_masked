
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampleSize; int rate; int totalBytes; int format; int channels; int bits; } ;
struct TYPE_4__ {int framePeriod; int maxRecordSize; int frameRate; int numVideoFrames; int width; int height; scalar_t__ moviOffset; TYPE_1__ a; scalar_t__ audio; scalar_t__ motionJpeg; scalar_t__ chunkStackTop; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_5( void )
{
  VAR_1 = 0;
  VAR_0.chunkStackTop = 0;

  FUNC_1( "RIFF" );
  {
    FUNC_4( "AVI " );
    {
      FUNC_1( "LIST" );
      {
        FUNC_4( "hdrl" );
        FUNC_4( "avih" );
        FUNC_3( 56 );
        FUNC_3( VAR_0.framePeriod );
        FUNC_3( VAR_0.maxRecordSize *
            VAR_0.frameRate );
        FUNC_3( 0 );
        FUNC_3( 0x110 );
        FUNC_3( VAR_0.numVideoFrames );
        FUNC_3( 0 );

        if( VAR_0.audio )
          FUNC_3( 2 );
        else
          FUNC_3( 1 );

        FUNC_3( VAR_0.maxRecordSize );
        FUNC_3( VAR_0.width );
        FUNC_3( VAR_0.height );
        FUNC_3( 0 );
        FUNC_3( 0 );
        FUNC_3( 0 );
        FUNC_3( 0 );

        FUNC_1( "LIST" );
        {
          FUNC_4( "strl" );
          FUNC_4( "strh" );
          FUNC_3( 56 );
          FUNC_4( "vids" );

          if( VAR_0.motionJpeg )
            FUNC_4( "MJPG" );
          else
            FUNC_3( 0 );

          FUNC_3( 0 );
          FUNC_3( 0 );
          FUNC_3( 0 );

          FUNC_3( 1 );
          FUNC_3( VAR_0.frameRate );
          FUNC_3( 0 );
          FUNC_3( VAR_0.numVideoFrames );

          FUNC_3( VAR_0.maxRecordSize );
          FUNC_3( -1 );
          FUNC_3( 0 );
          FUNC_2( 0 );
          FUNC_2( 0 );
          FUNC_2( VAR_0.width );
          FUNC_2( VAR_0.height );

          FUNC_4( "strf" );
          FUNC_3( 40 );
          FUNC_3( 40 );
          FUNC_3( VAR_0.width );
          FUNC_3( VAR_0.height );
          FUNC_2( 1 );
          FUNC_2( 24 );

          if( VAR_0.motionJpeg )
          {
            FUNC_4( "MJPG" );
            FUNC_3( VAR_0.width *
                VAR_0.height );
          }
          else
          {
            FUNC_3( 0 );
            FUNC_3( VAR_0.width *
                VAR_0.height * 3 );
          }

          FUNC_3( 0 );
          FUNC_3( 0 );
          FUNC_3( 0 );
          FUNC_3( 0 );
        }
        FUNC_0( );

        if( VAR_0.audio )
        {
          FUNC_1( "LIST" );
          {
            FUNC_4( "strl" );
            FUNC_4( "strh" );
            FUNC_3( 56 );
            FUNC_4( "auds" );
            FUNC_3( 0 );
            FUNC_3( 0 );
            FUNC_3( 0 );
            FUNC_3( 0 );

            FUNC_3( VAR_0.a.sampleSize );
            FUNC_3( VAR_0.a.sampleSize *
                VAR_0.a.rate );
            FUNC_3( 0 );
            FUNC_3( VAR_0.a.totalBytes /
                VAR_0.a.sampleSize );

            FUNC_3( 0 );
            FUNC_3( -1 );
            FUNC_3( VAR_0.a.sampleSize );
            FUNC_2( 0 );
            FUNC_2( 0 );
            FUNC_2( 0 );
            FUNC_2( 0 );

            FUNC_4( "strf" );
            FUNC_3( 18 );
            FUNC_2( VAR_0.a.format );
            FUNC_2( VAR_0.a.channels );
            FUNC_3( VAR_0.a.rate );
            FUNC_3( VAR_0.a.sampleSize *
                VAR_0.a.rate );
            FUNC_2( VAR_0.a.sampleSize );
            FUNC_2( VAR_0.a.bits );
            FUNC_2( 0 );
          }
          FUNC_0( );
        }
      }
      FUNC_0( );

      VAR_0.moviOffset = VAR_1;

      FUNC_1( "LIST" );
      {
        FUNC_4( "movi" );
      }
    }
  }
}
