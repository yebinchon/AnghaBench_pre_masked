
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef float byte ;
struct TYPE_18__ {int maxTextureSize; scalar_t__ textureCompression; } ;
struct TYPE_17__ {scalar_t__ integer; } ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {float value; scalar_t__ integer; } ;
struct TYPE_14__ {float value; scalar_t__ integer; } ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ integer; } ;
struct TYPE_11__ {int integer; } ;
struct TYPE_10__ {unsigned int* (* Hunk_AllocateTempMemory ) (int) ;int (* Hunk_FreeTempMemory ) (unsigned int*) ;} ;
typedef int GLint ;
typedef int GLenum ;


 scalar_t__ FUNC_0 (int,int ,int ) ;
 int FUNC_1 (unsigned int*,unsigned int*,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 float FUNC_3 (float,float,float) ;
 float FUNC_4 (float,float,float) ;
 int FUNC_5 (float*,int,int ) ;
 int FUNC_6 (unsigned int*,int,int,int) ;
 int FUNC_7 (float*,int,int) ;
 int FUNC_8 (unsigned int*,int,int,unsigned int*,int,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 TYPE_9__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_9 (int ,int,int,int,int,int ,int,int ,unsigned int*) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int ,int) ;
 TYPE_8__* VAR_25 ;
 TYPE_7__* VAR_26 ;
 TYPE_6__* VAR_27 ;
 TYPE_5__* VAR_28 ;
 TYPE_4__* VAR_29 ;
 TYPE_3__* VAR_30 ;
 TYPE_2__* VAR_31 ;
 TYPE_1__ VAR_32 ;
 unsigned int* FUNC_12 (int) ;
 unsigned int* FUNC_13 (int) ;
 int FUNC_14 (unsigned int*) ;
 int FUNC_15 (unsigned int*) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;

__attribute__((used)) static void FUNC_16( unsigned *VAR_35,
        int VAR_36, int VAR_37, int VAR_38,
        qboolean VAR_39,
        qboolean VAR_40,
       qboolean VAR_41,
        qboolean VAR_42,
        qboolean VAR_43,
        int *VAR_44,
        int *VAR_45, int *VAR_46, int *VAR_47 )
{
 int VAR_48;
 unsigned *VAR_49 = ((void*)0);
 unsigned *VAR_50 = ((void*)0);
 int VAR_51, VAR_52;
 int VAR_53, VAR_54;
 byte *VAR_55;
 GLenum VAR_56 = VAR_6;
 float VAR_57 = 0, VAR_58 = 0, VAR_59 = 0;
 int VAR_60, VAR_61;
 int VAR_62 = 0;




 for (VAR_51 = 1 ; VAR_51 < VAR_36 ; VAR_51<<=1)
  ;
 for (VAR_52 = 1 ; VAR_52 < VAR_37 ; VAR_52<<=1)
  ;
 if ( VAR_30->integer && VAR_51 > VAR_36 )
  VAR_51 >>= 1;
 if ( VAR_30->integer && VAR_52 > VAR_37 )
  VAR_52 >>= 1;

 if ( VAR_51 != VAR_36 || VAR_52 != VAR_37 ) {
  VAR_50 = VAR_32.Hunk_AllocateTempMemory( VAR_51 * VAR_52 * 4 );
  FUNC_8 (VAR_35, VAR_36, VAR_37, VAR_50, VAR_51, VAR_52);
  VAR_35 = VAR_50;
  VAR_36 = VAR_51;
  VAR_37 = VAR_52;
 }

 if (VAR_43) {
  VAR_60 = ( VAR_34 <= 0 || VAR_34 > VAR_20.maxTextureSize ) ? VAR_20.maxTextureSize : VAR_34;
  VAR_61 = VAR_60;
 } else {
  VAR_60 = VAR_36;
  VAR_61 = VAR_37;
 }



 if ( VAR_40 ) {
  VAR_51 >>= VAR_29->integer;
  VAR_52 >>= VAR_29->integer;
 }




 if (VAR_51 < 1) {
  VAR_51 = 1;
 }
 if (VAR_52 < 1) {
  VAR_52 = 1;
 }






 while ( VAR_51 > VAR_60
  || VAR_52 > VAR_61 ) {
  VAR_51 >>= 1;
  VAR_52 >>= 1;
 }

 VAR_49 = VAR_32.Hunk_AllocateTempMemory( sizeof( unsigned ) * VAR_51 * VAR_52 );





 VAR_54 = VAR_36*VAR_37;
 VAR_55 = ((byte *)VAR_35);
 VAR_48 = 3;

 if( VAR_27->integer || ( VAR_41 && VAR_28->integer ) )
 {
  for ( VAR_53 = 0; VAR_53 < VAR_54; VAR_53++ )
  {
   byte VAR_63 = FUNC_4(VAR_55[VAR_53*4], VAR_55[VAR_53*4 + 1], VAR_55[VAR_53*4 + 2]);
   VAR_55[VAR_53*4] = VAR_63;
   VAR_55[VAR_53*4 + 1] = VAR_63;
   VAR_55[VAR_53*4 + 2] = VAR_63;
  }
 }
 else if( VAR_27->value || ( VAR_41 && VAR_28->value ) )
 {
  float VAR_64 = VAR_27->value ? VAR_27->value : VAR_28->value;
  for ( VAR_53 = 0; VAR_53 < VAR_54; VAR_53++ )
  {
   float VAR_65 = FUNC_4(VAR_55[VAR_53*4], VAR_55[VAR_53*4 + 1], VAR_55[VAR_53*4 + 2]);
   VAR_55[VAR_53*4] = FUNC_3(VAR_55[VAR_53*4], VAR_65, VAR_64);
   VAR_55[VAR_53*4 + 1] = FUNC_3(VAR_55[VAR_53*4 + 1], VAR_65, VAR_64);
   VAR_55[VAR_53*4 + 2] = FUNC_3(VAR_55[VAR_53*4 + 2], VAR_65, VAR_64);
  }
 }

 if(VAR_41)
 {
  if(VAR_27->integer || VAR_28->integer)
   VAR_56 = VAR_2;
  else
   VAR_56 = VAR_6;
 }
 else
 {
  for ( VAR_53 = 0; VAR_53 < VAR_54; VAR_53++ )
  {
   if ( VAR_55[VAR_53*4+0] > VAR_57 )
   {
    VAR_57 = VAR_55[VAR_53*4+0];
   }
   if ( VAR_55[VAR_53*4+1] > VAR_58 )
   {
    VAR_58 = VAR_55[VAR_53*4+1];
   }
   if ( VAR_55[VAR_53*4+2] > VAR_59 )
   {
    VAR_59 = VAR_55[VAR_53*4+2];
   }
   if ( VAR_55[VAR_53*4 + 3] != 255 )
   {
    VAR_48 = 4;
    break;
   }
  }

  if ( VAR_48 == 3 )
  {
   if(VAR_27->integer)
   {
    if(VAR_31->integer == 16 || VAR_31->integer == 32)
     VAR_56 = VAR_3;
    else
     VAR_56 = VAR_2;
   }
   else
   {
    if ( VAR_42 && VAR_20.textureCompression == VAR_19 )
    {
     VAR_56 = VAR_0;
    }
    else if ( VAR_42 && VAR_20.textureCompression == VAR_18 )
    {
     VAR_56 = VAR_7;
    }
    else if ( VAR_31->integer == 16 )
    {
     VAR_56 = VAR_8;
    }
    else if ( VAR_31->integer == 32 )
    {
     VAR_56 = VAR_9;
    }
    else
    {
     VAR_56 = VAR_6;
    }
   }
  }
  else if ( VAR_48 == 4 )
  {
   if(VAR_27->integer)
   {
    if(VAR_31->integer == 16 || VAR_31->integer == 32)
     VAR_56 = VAR_4;
    else
     VAR_56 = VAR_5;
   }
   else
   {
    if ( VAR_31->integer == 16 )
    {
     VAR_56 = VAR_11;
    }
    else if ( VAR_31->integer == 32 )
    {
     VAR_56 = VAR_12;
    }
    else
    {
     VAR_56 = VAR_10;
    }
   }
  }
 }

 *VAR_45 = VAR_51;
 *VAR_46 = VAR_52;
 *VAR_44 = VAR_56;
 *VAR_47 = 1;


 if ( ( VAR_51 == VAR_36 ) &&
  ( VAR_52 == VAR_37 ) ) {
  if (!VAR_39)
  {
   FUNC_9 (VAR_13, 0, VAR_56, VAR_51, VAR_52, 0, VAR_10, VAR_17, VAR_35);
   goto done;
  }
  else
  {
   while ( VAR_51 > 1 || VAR_52 > 1 ) {
    if ( VAR_62 + 1 >= VAR_38 ) break;
    FUNC_9 (VAR_13, VAR_62, VAR_56, VAR_51, VAR_52, 0, VAR_10, VAR_17, VAR_35);
    VAR_35 += VAR_51 * VAR_52;
    VAR_51 /= 2;
    VAR_52 /= 2;
    if ( VAR_51 < 1 ) {
     VAR_51 = 1;
    }
    if ( VAR_52 < 1 ) {
     VAR_52 = 1;
    }
    ++VAR_62;
   }
  }
  FUNC_1 (VAR_49, VAR_35, VAR_51*VAR_52*4);
 }
 else
 {

  while ( VAR_36 > VAR_51 || VAR_37 > VAR_52 ) {
   FUNC_7( (byte *)VAR_35, VAR_36, VAR_37 );
   VAR_36 >>= 1;
   VAR_37 >>= 1;
   if ( VAR_36 < 1 ) {
    VAR_36 = 1;
   }
   if ( VAR_37 < 1 ) {
    VAR_37 = 1;
   }
  }
  FUNC_1( VAR_49, VAR_35, VAR_36 * VAR_37 * 4 );
 }

 FUNC_6 (VAR_49, VAR_51, VAR_52, !VAR_39 );

 FUNC_9 (VAR_13, VAR_62, VAR_56, VAR_51, VAR_52, 0, VAR_10, VAR_17, VAR_49 );

 if (VAR_39)
 {
  while (VAR_51 > 1 || VAR_52 > 1)
  {
   FUNC_7( (byte *)VAR_49, VAR_51, VAR_52 );
   VAR_51 >>= 1;
   VAR_52 >>= 1;
   if (VAR_51 < 1)
    VAR_51 = 1;
   if (VAR_52 < 1)
    VAR_52 = 1;
   VAR_62++;

   if ( VAR_25->integer ) {
    FUNC_5( (byte *)VAR_49, VAR_51 * VAR_52, VAR_24[VAR_62] );
   }

   FUNC_9 (VAR_13, VAR_62, VAR_56, VAR_51, VAR_52, 0, VAR_10, VAR_17, VAR_49 );
  }
  *VAR_47 = VAR_62 + 1;
 }
done:

 if (VAR_39)
 {
  if ( VAR_33 )
   FUNC_11( VAR_13, VAR_15,
     (GLint)FUNC_0( 1, VAR_23, VAR_26->integer ) );

  FUNC_10(VAR_13, VAR_16, VAR_22);
  FUNC_10(VAR_13, VAR_14, VAR_21);
 }
 else
 {
  if ( VAR_33 )
   FUNC_11( VAR_13, VAR_15, 1 );

  FUNC_10(VAR_13, VAR_16, VAR_1 );
  FUNC_10(VAR_13, VAR_14, VAR_1 );
 }

 FUNC_2();

 if ( VAR_49 != 0 )
  VAR_32.Hunk_FreeTempMemory( VAR_49 );
 if ( VAR_50 != 0 )
  VAR_32.Hunk_FreeTempMemory( VAR_50 );
}
