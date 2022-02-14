
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ allsolid; } ;
struct TYPE_9__ {TYPE_1__ trace; int * size; int start; } ;
typedef TYPE_2__ traceWork_t ;
struct TYPE_10__ {int** bounds; int count; int maxcount; int* list; int overflowed; scalar_t__ lastLeaf; int storeLeafs; } ;
typedef TYPE_3__ leafList_t ;
struct TYPE_11__ {int * leafs; int checkcount; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int*) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;

void FUNC_3( traceWork_t *VAR_4 ) {
 int VAR_5[VAR_1];
 int VAR_6;
 leafList_t VAR_7;


 FUNC_2( VAR_4->start, VAR_4->size[0], VAR_7.bounds[0] );
 FUNC_2( VAR_4->start, VAR_4->size[1], VAR_7.bounds[1] );

 for (VAR_6=0 ; VAR_6<3 ; VAR_6++) {
  VAR_7.bounds[0][VAR_6] -= 1;
  VAR_7.bounds[1][VAR_6] += 1;
 }

 VAR_7.count = 0;
 VAR_7.maxcount = VAR_1;
 VAR_7.list = VAR_5;
 VAR_7.storeLeafs = VAR_0;
 VAR_7.lastLeaf = 0;
 VAR_7.overflowed = VAR_3;

 VAR_2.checkcount++;

 FUNC_0( &VAR_7, 0 );


 VAR_2.checkcount++;


 for (VAR_6=0 ; VAR_6 < VAR_7.count ; VAR_6++) {
  FUNC_1( VAR_4, &VAR_2.leafs[VAR_5[VAR_6]] );
  if ( VAR_4->trace.allsolid ) {
   break;
  }
 }
}
