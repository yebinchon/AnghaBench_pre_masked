
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* nextMark; TYPE_1__* prevMark; } ;
typedef TYPE_2__ markPoly_t ;
struct TYPE_5__ {TYPE_2__* nextMark; } ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;

void FUNC_1( markPoly_t *VAR_1 ) {
 if ( !VAR_1->prevMark || !VAR_1->nextMark ) {
  FUNC_0( "CG_FreeLocalEntity: not active" );
 }


 VAR_1->prevMark->nextMark = VAR_1->nextMark;
 VAR_1->nextMark->prevMark = VAR_1->prevMark;


 VAR_1->nextMark = VAR_0;
 VAR_0 = VAR_1;
}
