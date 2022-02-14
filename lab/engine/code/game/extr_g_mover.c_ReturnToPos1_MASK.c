
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int loopSound; } ;
struct TYPE_8__ {scalar_t__ sound2to1; int soundLoop; TYPE_1__ s; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_9__ {int time; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 TYPE_3__ VAR_2 ;

void FUNC_2( gentity_t *VAR_3 ) {
 FUNC_1( VAR_3, VAR_1, VAR_2.time );


 VAR_3->s.loopSound = VAR_3->soundLoop;


 if ( VAR_3->sound2to1 ) {
  FUNC_0( VAR_3, VAR_0, VAR_3->sound2to1 );
 }
}
