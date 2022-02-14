
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {unsigned long glStateBits; unsigned long storedGlState; } ;
struct TYPE_3__ {int (* Error ) (int ,char*) ;} ;
typedef int GLenum ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

 unsigned long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 TYPE_2__ VAR_30 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ VAR_31 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*) ;

void FUNC_8( unsigned long VAR_32 )
{
 unsigned long VAR_33 = VAR_32 ^ VAR_30.glStateBits;

 if ( !VAR_33 )
 {
  return;
 }




 if ( VAR_33 & VAR_1 )
 {
  if ( VAR_32 & VAR_2 )
  {
   FUNC_1( VAR_13 );
  }
  else if ( VAR_32 & VAR_3)
  {
   FUNC_1( VAR_17 );
  }
  else
  {
   FUNC_1( VAR_18 );
  }
 }




 if ( VAR_33 & ( VAR_8 | VAR_6 ) )
 {
  uint32_t VAR_34 = VAR_30.glStateBits & ( VAR_8 | VAR_6 );
  uint32_t VAR_35 = VAR_32 & ( VAR_8 | VAR_6 );
  uint32_t VAR_36 = VAR_30.storedGlState & ( VAR_8 | VAR_6 );

  if (VAR_34 == 0)
  {
   FUNC_4( VAR_9 );
  }
  else if (VAR_35 == 0)
  {
   FUNC_3( VAR_9 );
  }

  if (VAR_35 != 0 && VAR_36 != VAR_35)
  {
   GLenum VAR_37 = VAR_20, VAR_38 = VAR_20;

   VAR_30.storedGlState &= ~( VAR_8 | VAR_6 );
   VAR_30.storedGlState |= VAR_35;

   switch ( VAR_32 & VAR_8 )
   {
   case 128:
    VAR_37 = VAR_29;
    break;
   case 133:
    VAR_37 = VAR_20;
    break;
   case 134:
    VAR_37 = VAR_12;
    break;
   case 131:
    VAR_37 = VAR_22;
    break;
   case 129:
    VAR_37 = VAR_25;
    break;
   case 130:
    VAR_37 = VAR_23;
    break;
   case 135:
    VAR_37 = VAR_11;
    break;
   case 132:
    VAR_37 = VAR_21;
    break;
   case 136:
    VAR_37 = VAR_26;
    break;
   default:
    VAR_31.Error( VAR_0, "GL_State: invalid src blend state bits" );
    break;
   }

   switch ( VAR_32 & VAR_6 )
   {
   case 137:
    VAR_38 = VAR_29;
    break;
   case 143:
    VAR_38 = VAR_20;
    break;
   case 138:
    VAR_38 = VAR_27;
    break;
   case 140:
    VAR_38 = VAR_24;
    break;
   case 139:
    VAR_38 = VAR_25;
    break;
   case 141:
    VAR_38 = VAR_23;
    break;
   case 144:
    VAR_38 = VAR_11;
    break;
   case 142:
    VAR_38 = VAR_21;
    break;
   default:
    VAR_31.Error( VAR_0, "GL_State: invalid dst blend state bits" );
    break;
   }

   FUNC_0( VAR_37, VAR_38 );
  }
 }




 if ( VAR_33 & VAR_4 )
 {
  if ( VAR_32 & VAR_4 )
  {
   FUNC_2( VAR_28 );
  }
  else
  {
   FUNC_2( VAR_14 );
  }
 }




 if ( VAR_33 & VAR_7 )
 {
  if ( VAR_32 & VAR_7 )
  {
   FUNC_5( VAR_16, VAR_19 );
  }
  else
  {
   FUNC_5( VAR_16, VAR_15 );
  }
 }




 if ( VAR_33 & VAR_5 )
 {
  if ( VAR_32 & VAR_5 )
  {
   FUNC_3( VAR_10 );
  }
  else
  {
   FUNC_4( VAR_10 );
  }
 }

 VAR_30.glStateBits = VAR_32;
}
