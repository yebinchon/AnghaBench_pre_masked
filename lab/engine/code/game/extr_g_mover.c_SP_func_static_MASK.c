
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int currentOrigin; } ;
struct TYPE_8__ {int trBase; } ;
struct TYPE_9__ {int origin; TYPE_1__ pos; } ;
struct TYPE_11__ {TYPE_3__ r; TYPE_2__ s; int model; } ;
typedef TYPE_4__ gentity_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;

void FUNC_3( gentity_t *VAR_0 ) {
 FUNC_2( VAR_0, VAR_0->model );
 FUNC_0( VAR_0 );
 FUNC_1( VAR_0->s.origin, VAR_0->s.pos.trBase );
 FUNC_1( VAR_0->s.origin, VAR_0->r.currentOrigin );
}
