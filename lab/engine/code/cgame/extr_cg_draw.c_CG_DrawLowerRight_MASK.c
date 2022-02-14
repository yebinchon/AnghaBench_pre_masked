
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {scalar_t__ gametype; } ;


 int FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float,int ,int ) ;
 scalar_t__ VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3( void ) {
 float VAR_7;

 VAR_7 = 480 - VAR_1;

  if ( VAR_4.gametype >= VAR_0 ) {
  if ( VAR_3.integer == 2 ) {
   VAR_7 = FUNC_2( VAR_7, VAR_6, VAR_5 );
  } else {
   VAR_7 -= VAR_2;
  }
 }
 VAR_7 = FUNC_1( VAR_7 );
 FUNC_0( VAR_7 );
}
