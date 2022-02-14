
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef char keyNum_t ;
struct TYPE_23__ {int down; } ;
struct TYPE_20__ {int data1; int data2; int event; } ;
struct TYPE_19__ {int y; } ;
struct TYPE_18__ {int const button; } ;
struct TYPE_17__ {int xrel; int yrel; } ;
struct TYPE_16__ {char* text; } ;
struct TYPE_15__ {int keysym; int repeat; } ;
struct TYPE_22__ {int type; TYPE_6__ window; TYPE_5__ wheel; TYPE_4__ button; TYPE_3__ motion; TYPE_2__ text; TYPE_1__ key; } ;
struct TYPE_21__ {int vidWidth; int vidHeight; int isFullscreen; } ;
struct TYPE_14__ {TYPE_7__ glconfig; } ;
struct TYPE_13__ {int integer; } ;
typedef TYPE_8__ SDL_Event ;


 int FUNC_0 (char) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,unsigned int) ;
 int FUNC_3 (int ,int ,int,int ,int ,int *) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int) ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 char FUNC_8 (int *,int ) ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_9 () ;







 int VAR_12 ;






 scalar_t__ FUNC_10 (TYPE_8__*) ;
 int FUNC_11 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_12 () ;
 TYPE_11__ VAR_16 ;
 int VAR_17 ;
 TYPE_10__* VAR_18 ;
 TYPE_9__* VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_13( void )
{
 SDL_Event VAR_24;
 keyNum_t VAR_25 = 0;
 static keyNum_t VAR_26 = 0;

 if( !FUNC_11( VAR_12 ) )
   return;

 while( FUNC_10( &VAR_24 ) )
 {
  switch( VAR_24.type )
  {
   case 142:
    if ( VAR_24.key.repeat && FUNC_9( ) == 0 )
     break;

    if( ( VAR_25 = FUNC_8( &VAR_24.key.keysym, VAR_22 ) ) )
     FUNC_3( VAR_17, VAR_14, VAR_25, VAR_22, 0, ((void*)0) );

    if( VAR_25 == VAR_2 )
     FUNC_3( VAR_17, VAR_13, FUNC_0('h'), 0, 0, ((void*)0) );
    else if( VAR_19[VAR_4].down && VAR_25 >= 'a' && VAR_25 <= 'z' )
     FUNC_3( VAR_17, VAR_13, FUNC_0(VAR_25), 0, 0, ((void*)0) );

    VAR_26 = VAR_25;
    break;

   case 141:
    if( ( VAR_25 = FUNC_8( &VAR_24.key.keysym, VAR_21 ) ) )
     FUNC_3( VAR_17, VAR_14, VAR_25, VAR_21, 0, ((void*)0) );

    VAR_26 = 0;
    break;

   case 135:
    if( VAR_26 != VAR_3 )
    {
     char *VAR_27 = VAR_24.text.text;


     while( *VAR_27 )
     {
      int VAR_28 = 0;

      if( ( *VAR_27 & 0x80 ) == 0 )
       VAR_28 = *VAR_27++;
      else if( ( *VAR_27 & 0xE0 ) == 0xC0 )
      {
       VAR_28 |= ( *VAR_27++ & 0x1F ) << 6;
       VAR_28 |= ( *VAR_27++ & 0x3F );
      }
      else if( ( *VAR_27 & 0xF0 ) == 0xE0 )
      {
       VAR_28 |= ( *VAR_27++ & 0x0F ) << 12;
       VAR_28 |= ( *VAR_27++ & 0x3F ) << 6;
       VAR_28 |= ( *VAR_27++ & 0x3F );
      }
      else if( ( *VAR_27 & 0xF8 ) == 0xF0 )
      {
       VAR_28 |= ( *VAR_27++ & 0x07 ) << 18;
       VAR_28 |= ( *VAR_27++ & 0x3F ) << 12;
       VAR_28 |= ( *VAR_27++ & 0x3F ) << 6;
       VAR_28 |= ( *VAR_27++ & 0x3F );
      }
      else
      {
       FUNC_2( "Unrecognised UTF-8 lead byte: 0x%x\n", (unsigned int)*VAR_27 );
       VAR_27++;
      }

      if( VAR_28 != 0 )
      {
       if( FUNC_7( 0, VAR_28 ) )
       {
        FUNC_3( VAR_17, VAR_14, VAR_3, VAR_22, 0, ((void*)0) );
        FUNC_3( VAR_17, VAR_14, VAR_3, VAR_21, 0, ((void*)0) );
       }
       else
        FUNC_3( VAR_17, VAR_13, VAR_28, 0, 0, ((void*)0) );
      }
          }
        }
    break;

   case 138:
    if( VAR_20 )
    {
     if( !VAR_24.motion.xrel && !VAR_24.motion.yrel )
      break;
     FUNC_3( VAR_17, VAR_15, VAR_24.motion.xrel, VAR_24.motion.yrel, 0, ((void*)0) );
    }
    break;

   case 140:
   case 139:
    {
     int VAR_29;
     switch( VAR_24.button.button )
     {
      case 149: VAR_29 = VAR_5; break;
      case 148: VAR_29 = VAR_7; break;
      case 147: VAR_29 = VAR_6; break;
      case 146: VAR_29 = VAR_8; break;
      case 145: VAR_29 = VAR_9; break;
      default: VAR_29 = VAR_1 + ( VAR_24.button.button - 145 + 1 ) % 16; break;
     }
     FUNC_3( VAR_17, VAR_14, VAR_29,
      ( VAR_24.type == 140 ? VAR_22 : VAR_21 ), 0, ((void*)0) );
    }
    break;

   case 137:
    if( VAR_24.wheel.y > 0 )
    {
     FUNC_3( VAR_17, VAR_14, VAR_11, VAR_22, 0, ((void*)0) );
     FUNC_3( VAR_17, VAR_14, VAR_11, VAR_21, 0, ((void*)0) );
    }
    else if( VAR_24.wheel.y < 0 )
    {
     FUNC_3( VAR_17, VAR_14, VAR_10, VAR_22, 0, ((void*)0) );
     FUNC_3( VAR_17, VAR_14, VAR_10, VAR_21, 0, ((void*)0) );
    }
    break;

   case 144:
   case 143:
    if (VAR_18->integer)
     FUNC_6();
    break;

   case 136:
    FUNC_1(VAR_0, "quit Closed window\n");
    break;

   case 134:
    switch( VAR_24.window.event )
    {
     case 129:
      {
       int VAR_30, VAR_31;

       VAR_30 = VAR_24.window.data1;
       VAR_31 = VAR_24.window.data2;


       if( VAR_16.glconfig.isFullscreen )
       {
        break;
       }


       if( VAR_16.glconfig.vidWidth == VAR_30 && VAR_16.glconfig.vidHeight == VAR_31 )
       {
        break;
       }

       FUNC_5( "r_customwidth", VAR_30 );
       FUNC_5( "r_customheight", VAR_31 );
       FUNC_4( "r_mode", "-1" );




       VAR_23 = FUNC_12( ) + 1000;
      }
      break;

     case 130: FUNC_5( "com_minimized", 1 ); break;
     case 128:
     case 131: FUNC_5( "com_minimized", 0 ); break;
     case 132: FUNC_5( "com_unfocused", 1 ); break;
     case 133: FUNC_5( "com_unfocused", 0 ); break;
    }
    break;

   default:
    break;
  }
 }
}
