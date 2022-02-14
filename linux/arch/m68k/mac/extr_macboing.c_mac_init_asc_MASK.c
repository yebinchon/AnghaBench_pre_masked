
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ident; } ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int* VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_0( void )
{
 int VAR_8;
 switch ( VAR_7->ident )
 {
  case 136:



   VAR_1 = ( void* )0x50010000;
   break;




  case 134:
  case 135:
   VAR_6 = VAR_5;
   VAR_2 = 22150;
   break;
  case 137:
  case 130:
   VAR_6 = VAR_4;
   break;
  case 133:
  case 132:
  case 131:
  case 129:
  case 128:



   VAR_6 = ((void*)0);
   break;
  default:



   VAR_6 = ((void*)0);
   break;
 }





 for ( VAR_8 = 0; VAR_8 < 0x400; VAR_8++ )
 {
  VAR_3[ VAR_8 ] = VAR_8 / 4;
  VAR_3[ VAR_8 + 0x400 ] = 0xFF - VAR_8 / 4;
 }
 VAR_0 = 1;
}
