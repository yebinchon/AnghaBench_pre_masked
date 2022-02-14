
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
typedef int Uint8 ;
struct TYPE_6__ {float value; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int* buttons; unsigned int oldhats; int* oldaaxes; unsigned int oldaxes; } ;
typedef int Sint16 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ,int,int,int ,int *) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int*,int*) ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int) ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__ VAR_14 ;

__attribute__((used)) static void FUNC_13( void )
{
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 int VAR_17 = 0;
 int VAR_18 = 0;

 if (VAR_5)
 {
  FUNC_2();
  return;
 }

 if (!VAR_13)
  return;

 FUNC_11();


 VAR_17 = FUNC_8(VAR_13);
 if (VAR_17 > 0)
 {
  int VAR_19 = 0;
  int VAR_20 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
  {
   int VAR_21 = 0;
   int VAR_22 = 0;
   FUNC_4(VAR_13, VAR_18, &VAR_21, &VAR_22);
   VAR_19 += VAR_21;
   VAR_20 += VAR_22;
  }
  if (VAR_19 || VAR_20)
  {


   if (FUNC_12(VAR_19) > 1)
    VAR_19 *= 2;
   if (FUNC_12(VAR_20) > 1)
    VAR_20 *= 2;
   FUNC_1( VAR_7, VAR_4, VAR_19, VAR_20, 0, ((void*)0) );
  }
 }


 VAR_17 = FUNC_9(VAR_13);
 if (VAR_17 > 0)
 {
  if (VAR_17 > FUNC_0(VAR_14.buttons))
   VAR_17 = FUNC_0(VAR_14.buttons);
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
  {
   qboolean VAR_23 = (FUNC_5(VAR_13, VAR_18) != 0);
   if (VAR_23 != VAR_14.buttons[VAR_18])
   {
    FUNC_1( VAR_7, VAR_3, VAR_0 + VAR_18, VAR_23, 0, ((void*)0) );
    VAR_14.buttons[VAR_18] = VAR_23;
   }
  }
 }


 VAR_17 = FUNC_10(VAR_13);
 if (VAR_17 > 0)
 {
  if (VAR_17 > 4) VAR_17 = 4;
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
  {
   ((Uint8 *)&VAR_16)[VAR_18] = FUNC_6(VAR_13, VAR_18);
  }
 }


 if (VAR_16 != VAR_14.oldhats)
 {
  for( VAR_18 = 0; VAR_18 < 4; VAR_18++ ) {
   if( ((Uint8 *)&VAR_16)[VAR_18] != ((Uint8 *)&VAR_14.oldhats)[VAR_18] ) {

    switch( ((Uint8 *)&VAR_14.oldhats)[VAR_18] ) {
     case 128:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_11, 0, ((void*)0) );
      break;
     case 131:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_11, 0, ((void*)0) );
      break;
     case 135:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_11, 0, ((void*)0) );
      break;
     case 134:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_11, 0, ((void*)0) );
      break;
     case 129:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_11, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_11, 0, ((void*)0) );
      break;
     case 130:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_11, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_11, 0, ((void*)0) );
      break;
     case 132:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_11, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_11, 0, ((void*)0) );
      break;
     case 133:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_11, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_11, 0, ((void*)0) );
      break;
     default:
      break;
    }

    switch( ((Uint8 *)&VAR_16)[VAR_18] ) {
     case 128:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_12, 0, ((void*)0) );
      break;
     case 131:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_12, 0, ((void*)0) );
      break;
     case 135:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_12, 0, ((void*)0) );
      break;
     case 134:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_12, 0, ((void*)0) );
      break;
     case 129:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_12, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_12, 0, ((void*)0) );
      break;
     case 130:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_12, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 1], VAR_12, 0, ((void*)0) );
      break;
     case 132:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 0], VAR_12, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_12, 0, ((void*)0) );
      break;
     case 133:
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 2], VAR_12, 0, ((void*)0) );
      FUNC_1( VAR_7, VAR_3, VAR_6[4*VAR_18 + 3], VAR_12, 0, ((void*)0) );
      break;
     default:
      break;
    }
   }
  }
 }


 VAR_14.oldhats = VAR_16;


 VAR_17 = FUNC_7(VAR_13);
 if (VAR_17 > 0)
 {
  if (VAR_9->integer)
  {
   if (VAR_17 > VAR_1) VAR_17 = VAR_1;
   for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   {
    Sint16 VAR_24 = FUNC_3(VAR_13, VAR_18);
    float VAR_25 = ( (float) FUNC_12(VAR_24) ) / 32767.0f;

    if( VAR_25 < VAR_8->value ) VAR_24 = 0;

    if ( VAR_24 != VAR_14.oldaaxes[VAR_18] )
    {
     FUNC_1( VAR_7, VAR_2, VAR_18, VAR_24, 0, ((void*)0) );
     VAR_14.oldaaxes[VAR_18] = VAR_24;
    }
   }
  }
  else
  {
   if (VAR_17 > 16) VAR_17 = 16;
   for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++)
   {
    Sint16 VAR_26 = FUNC_3(VAR_13, VAR_18);
    float VAR_27 = ( (float) VAR_26 ) / 32767.0f;
    if( VAR_27 < -VAR_8->value ) {
     VAR_15 |= ( 1 << ( VAR_18 * 2 ) );
    } else if( VAR_27 > VAR_8->value ) {
     VAR_15 |= ( 1 << ( ( VAR_18 * 2 ) + 1 ) );
    }
   }
  }
 }


 if (VAR_15 != VAR_14.oldaxes)
 {
  for( VAR_18 = 0; VAR_18 < 16; VAR_18++ ) {
   if( ( VAR_15 & ( 1 << VAR_18 ) ) && !( VAR_14.oldaxes & ( 1 << VAR_18 ) ) ) {
    FUNC_1( VAR_7, VAR_3, VAR_10[VAR_18], VAR_12, 0, ((void*)0) );
   }

   if( !( VAR_15 & ( 1 << VAR_18 ) ) && ( VAR_14.oldaxes & ( 1 << VAR_18 ) ) ) {
    FUNC_1( VAR_7, VAR_3, VAR_10[VAR_18], VAR_11, 0, ((void*)0) );
   }
  }
 }


 VAR_14.oldaxes = VAR_15;
}
