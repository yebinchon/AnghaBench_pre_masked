
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int integer; } ;
struct TYPE_4__ {int redStatus; int blueStatus; int flagStatus; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_1__ VAR_5 ;

void FUNC_2( void ) {
 FUNC_1(&VAR_5, 0, sizeof VAR_5);

 switch( VAR_4.integer ) {
 case 128:
  VAR_5.redStatus = -1;
  FUNC_0( VAR_3, VAR_0 );
   VAR_5.blueStatus = -1;
  FUNC_0( VAR_1, VAR_0 );
  break;






 default:
  break;
 }
}
