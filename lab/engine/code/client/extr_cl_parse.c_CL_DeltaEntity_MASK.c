
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int msg_t ;
struct TYPE_8__ {int number; } ;
typedef TYPE_1__ entityState_t ;
struct TYPE_9__ {int numEntities; } ;
typedef TYPE_2__ clSnapshot_t ;
struct TYPE_10__ {int parseEntitiesNum; TYPE_1__* parseEntities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_1__*,int) ;
 TYPE_3__ VAR_2 ;

void FUNC_1 (msg_t *VAR_3, clSnapshot_t *VAR_4, int VAR_5, entityState_t *VAR_6,
      qboolean VAR_7) {
 entityState_t *VAR_8;



 VAR_8 = &VAR_2.parseEntities[VAR_2.parseEntitiesNum & (VAR_1-1)];

 if ( VAR_7 ) {
  *VAR_8 = *VAR_6;
 } else {
  FUNC_0( VAR_3, VAR_6, VAR_8, VAR_5 );
 }

 if ( VAR_8->number == (VAR_0-1) ) {
  return;
 }
 VAR_2.parseEntitiesNum++;
 VAR_4->numEntities++;
}
