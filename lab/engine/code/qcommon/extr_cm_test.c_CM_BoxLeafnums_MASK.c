
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int count; int maxcount; int* list; int lastLeaf; int overflowed; int storeLeafs; int * bounds; } ;
typedef TYPE_1__ leafList_t ;
struct TYPE_5__ {int checkcount; } ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int const,int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

int FUNC_2( const vec3_t VAR_3, const vec3_t VAR_4, int *VAR_5, int VAR_6, int *VAR_7) {
 leafList_t VAR_8;

 VAR_1.checkcount++;

 FUNC_1( VAR_3, VAR_8.bounds[0] );
 FUNC_1( VAR_4, VAR_8.bounds[1] );
 VAR_8.count = 0;
 VAR_8.maxcount = VAR_6;
 VAR_8.list = VAR_5;
 VAR_8.storeLeafs = VAR_0;
 VAR_8.lastLeaf = 0;
 VAR_8.overflowed = VAR_2;

 FUNC_0( &VAR_8, 0 );

 *VAR_7 = VAR_8.lastLeaf;
 return VAR_8.count;
}
