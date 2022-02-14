
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ frame; } ;
struct TYPE_4__ {TYPE_1__ testModelEntity; } ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_2__ VAR_0 ;

void FUNC_1 (void) {
 VAR_0.testModelEntity.frame--;
 if ( VAR_0.testModelEntity.frame < 0 ) {
  VAR_0.testModelEntity.frame = 0;
 }
 FUNC_0( "frame %i\n", VAR_0.testModelEntity.frame );
}
