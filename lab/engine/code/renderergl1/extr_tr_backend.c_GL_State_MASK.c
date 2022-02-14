
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long glStateBits; } ;
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
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_32 ;
 int FUNC_1 (int ,float) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_33 ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,char*) ;

void FUNC_10( unsigned long VAR_34 )
{
 unsigned long VAR_35 = VAR_34 ^ VAR_32.glStateBits;

 if ( !VAR_35 )
 {
  return;
 }




 if ( VAR_35 & VAR_2 )
 {
  if ( VAR_34 & VAR_2 )
  {
   FUNC_3( VAR_13 );
  }
  else
  {
   FUNC_3( VAR_19 );
  }
 }




 if ( VAR_35 & ( VAR_7 | VAR_5 ) )
 {
  GLenum VAR_36 = VAR_22, VAR_37 = VAR_22;

  if ( VAR_34 & ( VAR_7 | VAR_5 ) )
  {
   switch ( VAR_34 & VAR_7 )
   {
   case 128:
    VAR_36 = VAR_31;
    break;
   case 133:
    VAR_36 = VAR_22;
    break;
   case 134:
    VAR_36 = VAR_12;
    break;
   case 131:
    VAR_36 = VAR_24;
    break;
   case 129:
    VAR_36 = VAR_27;
    break;
   case 130:
    VAR_36 = VAR_25;
    break;
   case 135:
    VAR_36 = VAR_11;
    break;
   case 132:
    VAR_36 = VAR_23;
    break;
   case 136:
    VAR_36 = VAR_28;
    break;
   default:
    VAR_33.Error( VAR_0, "GL_State: invalid src blend state bits" );
    break;
   }

   switch ( VAR_34 & VAR_5 )
   {
   case 137:
    VAR_37 = VAR_31;
    break;
   case 143:
    VAR_37 = VAR_22;
    break;
   case 138:
    VAR_37 = VAR_29;
    break;
   case 140:
    VAR_37 = VAR_26;
    break;
   case 139:
    VAR_37 = VAR_27;
    break;
   case 141:
    VAR_37 = VAR_25;
    break;
   case 144:
    VAR_37 = VAR_11;
    break;
   case 142:
    VAR_37 = VAR_23;
    break;
   default:
    VAR_33.Error( VAR_0, "GL_State: invalid dst blend state bits" );
    break;
   }

   FUNC_6( VAR_9 );
   FUNC_2( VAR_36, VAR_37 );
  }
  else
  {
   FUNC_5( VAR_9 );
  }
 }




 if ( VAR_35 & VAR_3 )
 {
  if ( VAR_34 & VAR_3 )
  {
   FUNC_4( VAR_30 );
  }
  else
  {
   FUNC_4( VAR_14 );
  }
 }




 if ( VAR_35 & VAR_6 )
 {
  if ( VAR_34 & VAR_6 )
  {
   FUNC_7( VAR_16, VAR_21 );
  }
  else
  {
   FUNC_7( VAR_16, VAR_15 );
  }
 }




 if ( VAR_35 & VAR_4 )
 {
  if ( VAR_34 & VAR_4 )
  {
   FUNC_5( VAR_10 );
  }
  else
  {
   FUNC_6( VAR_10 );
  }
 }




 if ( VAR_35 & VAR_1 )
 {
  switch ( VAR_34 & VAR_1 )
  {
  case 0:
   FUNC_5( VAR_8 );
   break;
  case 146:
   FUNC_6( VAR_8 );
   FUNC_1( VAR_18, 0.0f );
   break;
  case 145:
   FUNC_6( VAR_8 );
   FUNC_1( VAR_20, 0.5f );
   break;
  case 147:
   FUNC_6( VAR_8 );
   FUNC_1( VAR_17, 0.5f );
   break;
  default:
   FUNC_0( 0 );
   break;
  }
 }

 VAR_32.glStateBits = VAR_34;
}
