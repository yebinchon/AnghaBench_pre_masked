
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
typedef int keyNum_t ;
struct TYPE_6__ {scalar_t__ integer; } ;
struct TYPE_5__ {scalar_t__ scancode; int sym; } ;
typedef TYPE_1__ SDL_Keysym ;


 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int VAR_0 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;

 int VAR_64 ;




 scalar_t__ VAR_65 ;
 scalar_t__ VAR_66 ;
 TYPE_2__* VAR_67 ;

__attribute__((used)) static keyNum_t FUNC_2( SDL_Keysym *VAR_68, qboolean VAR_69 )
{
 keyNum_t VAR_70 = 0;

 if( VAR_68->scancode >= VAR_66 && VAR_68->scancode <= VAR_65 )
 {




  if( VAR_68->scancode == VAR_65 )
   VAR_70 = '0';
  else
   VAR_70 = '1' + VAR_68->scancode - VAR_66;
 }
 else if( VAR_68->sym >= VAR_64 && VAR_68->sym < 189 )
 {

  VAR_70 = (int)VAR_68->sym;
 }
 else
 {
  switch( VAR_68->sym )
  {
   case 142: VAR_70 = VAR_51; break;
   case 158: VAR_70 = VAR_40; break;
   case 143: VAR_70 = VAR_50; break;
   case 164: VAR_70 = VAR_39; break;
   case 160: VAR_70 = VAR_34; break;
   case 169: VAR_70 = VAR_27; break;
   case 166: VAR_70 = VAR_32; break;
   case 187: VAR_70 = VAR_8; break;
   case 163: VAR_70 = VAR_36; break;
   case 149: VAR_70 = VAR_46; break;
   case 161: VAR_70 = VAR_42; break;
   case 134: VAR_70 = VAR_54; break;
   case 165: VAR_70 = VAR_31; break;
   case 188: VAR_70 = VAR_7; break;
   case 159: VAR_70 = VAR_45; break;
   case 128: VAR_70 = VAR_61; break;
   case 186: VAR_70 = VAR_10; break;
   case 156: VAR_70 = VAR_33; break;
   case 136: VAR_70 = VAR_9; break;
   case 130: VAR_70 = VAR_59; break;
   case 185: VAR_70 = VAR_11; break;
   case 178: VAR_70 = VAR_18; break;
   case 177: VAR_70 = VAR_19; break;
   case 176: VAR_70 = VAR_20; break;
   case 175: VAR_70 = VAR_21; break;
   case 174: VAR_70 = VAR_22; break;
   case 173: VAR_70 = VAR_23; break;
   case 172: VAR_70 = VAR_24; break;
   case 171: VAR_70 = VAR_25; break;
   case 184: VAR_70 = VAR_12; break;
   case 183: VAR_70 = VAR_13; break;
   case 182: VAR_70 = VAR_14; break;
   case 181: VAR_70 = VAR_15; break;
   case 180: VAR_70 = VAR_16; break;
   case 179: VAR_70 = VAR_17; break;

   case 191: VAR_70 = VAR_1; break;
   case 153: VAR_70 = VAR_30; break;
   case 189: VAR_70 = VAR_6; break;
   case 141: VAR_70 = VAR_49; break;

   case 147:
   case 133: VAR_70 = VAR_56; break;

   case 150:
   case 137: VAR_70 = VAR_5; break;





   case 135:
   case 148: VAR_70 = VAR_57; break;


   case 138:
   case 151: VAR_70 = VAR_0; break;

   case 162: VAR_70 = VAR_29; break;
   case 168: VAR_70 = VAR_28; break;
   case 167: VAR_70 = VAR_35; break;
   case 154: VAR_70 = VAR_44; break;
   case 152: VAR_70 = VAR_41; break;
   case 155: VAR_70 = VAR_37; break;
   case 157: VAR_70 = VAR_43; break;

   case 145: VAR_70 = VAR_48; break;
   case 170: VAR_70 = VAR_26; break;
   case 139: VAR_70 = VAR_53; break;
   case 131: VAR_70 = VAR_58; break;
   case 146: VAR_70 = VAR_47; break;
   case 192: VAR_70 = VAR_47; break;
   case 140: VAR_70 = VAR_52; break;
   case 129: VAR_70 = VAR_60; break;
   case 132: VAR_70 = VAR_55; break;
   case 144: VAR_70 = VAR_38; break;
   case 190: VAR_70 = VAR_2; break;

   default:
    if( !( VAR_68->sym & VAR_63 ) && VAR_68->scancode <= 95 )
    {





     VAR_70 = VAR_62 + (int)VAR_68->scancode;
    }
    break;
  }
 }

 if( VAR_67->integer )
  FUNC_1( VAR_68, VAR_70, VAR_69 );

 if( FUNC_0( VAR_70, 0 ) )
 {

  VAR_70 = VAR_4;
 }

 return VAR_70;
}
