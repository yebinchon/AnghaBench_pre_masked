
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int count; TYPE_4__* pt; } ;
typedef TYPE_1__ lwPointList ;
struct TYPE_6__ {struct TYPE_6__* vm; struct TYPE_6__* pol; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2( lwPointList *VAR_0 ){
 int VAR_1;

 if ( VAR_0 ) {
  if ( VAR_0->pt ) {
   for ( VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++ ) {
    if ( VAR_0->pt[ VAR_1 ].pol ) {
     FUNC_0( VAR_0->pt[ VAR_1 ].pol );
    }
    if ( VAR_0->pt[ VAR_1 ].vm ) {
     FUNC_0( VAR_0->pt[ VAR_1 ].vm );
    }
   }
   FUNC_0( VAR_0->pt );
  }
  FUNC_1( VAR_0, 0, sizeof( lwPointList ) );
 }
}
