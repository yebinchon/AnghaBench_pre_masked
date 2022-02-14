
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int eventParm; } ;
struct TYPE_6__ {int currentOrigin; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ,int ) ;

void FUNC_1( gentity_t *VAR_1, int VAR_2, int VAR_3 ) {
 gentity_t *VAR_4;

 VAR_4 = FUNC_0( VAR_1->r.currentOrigin, VAR_0 );
 VAR_4->s.eventParm = VAR_3;
}
