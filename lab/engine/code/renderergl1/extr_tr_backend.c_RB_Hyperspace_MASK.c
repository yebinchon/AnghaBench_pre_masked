
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time; } ;
struct TYPE_4__ {scalar_t__ isHyperspace; TYPE_1__ refdef; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (float,float,float,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2( void ) {
 float VAR_3;

 if ( !VAR_1.isHyperspace ) {

 }

 VAR_3 = ( VAR_1.refdef.time & 255 ) / 255.0f;
 FUNC_1( VAR_3, VAR_3, VAR_3, 1 );
 FUNC_0( VAR_0 );

 VAR_1.isHyperspace = VAR_2;
}
