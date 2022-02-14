
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int currentOrigin; } ;
struct TYPE_7__ {int trDelta; scalar_t__ trDuration; scalar_t__ trTime; int trType; int trBase; } ;
struct TYPE_8__ {TYPE_2__ pos; } ;
struct TYPE_9__ {TYPE_1__ r; TYPE_3__ s; } ;
typedef TYPE_4__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( gentity_t *VAR_1, vec3_t VAR_2 ) {
 FUNC_1( VAR_2, VAR_1->s.pos.trBase );
 VAR_1->s.pos.trType = VAR_0;
 VAR_1->s.pos.trTime = 0;
 VAR_1->s.pos.trDuration = 0;
 FUNC_0( VAR_1->s.pos.trDelta );

 FUNC_1( VAR_2, VAR_1->r.currentOrigin );
}
