
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ warmupTime; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int,int,int ,int,int) ;

void FUNC_1( int VAR_7, int VAR_8 )
{
 if( VAR_6.warmupTime != 0 )
 {

  return;
 }

 FUNC_0( VAR_7, -1, VAR_0, 1, 1 );
 FUNC_0( VAR_7, -1, VAR_5, VAR_8, 1 );

 switch( VAR_8 )
 {
 case 5:
  FUNC_0( VAR_7, -1, VAR_2, 1, 1 );
  break;
 case 25:
  FUNC_0( VAR_7, -1, VAR_1, 1, 1 );
  break;
 case 50:
  FUNC_0( VAR_7, -1, VAR_3, 1, 1 );
  break;
 case 100:
  FUNC_0( VAR_7, -1, VAR_4, 1, 1 );
  break;
 default:
  break;
 }
}
