
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_12__ {int currentOrigin; } ;
struct TYPE_16__ {TYPE_6__* parent; TYPE_3__ r; TYPE_2__* enemy; } ;
typedef TYPE_7__ gentity_t ;
struct TYPE_15__ {TYPE_5__* client; } ;
struct TYPE_13__ {scalar_t__* grapplePoint; } ;
struct TYPE_14__ {TYPE_4__ ps; } ;
struct TYPE_10__ {double* mins; double* maxs; scalar_t__* currentOrigin; } ;
struct TYPE_11__ {TYPE_1__ r; } ;


 int FUNC_0 (TYPE_7__*,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__*) ;

void FUNC_3 (gentity_t *VAR_0)
{
 if (VAR_0->enemy) {
  vec3_t VAR_1, VAR_2;

  FUNC_2(VAR_0->r.currentOrigin, VAR_2);
  VAR_1[0] = VAR_0->enemy->r.currentOrigin[0] + (VAR_0->enemy->r.mins[0] + VAR_0->enemy->r.maxs[0]) * 0.5;
  VAR_1[1] = VAR_0->enemy->r.currentOrigin[1] + (VAR_0->enemy->r.mins[1] + VAR_0->enemy->r.maxs[1]) * 0.5;
  VAR_1[2] = VAR_0->enemy->r.currentOrigin[2] + (VAR_0->enemy->r.mins[2] + VAR_0->enemy->r.maxs[2]) * 0.5;
  FUNC_1( VAR_1, VAR_2 );

  FUNC_0( VAR_0, VAR_1 );
 }

 FUNC_2( VAR_0->r.currentOrigin, VAR_0->parent->client->ps.grapplePoint);
}
