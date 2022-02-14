
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_6__ {double* mins; double* maxs; int contents; } ;
struct TYPE_7__ {char* classname; scalar_t__* pos1; TYPE_1__ r; struct TYPE_7__* parent; int touch; } ;
typedef TYPE_2__ gentity_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__*,double*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3( gentity_t *VAR_2 ) {
 gentity_t *VAR_3;
 vec3_t VAR_4, VAR_5;



 VAR_3 = FUNC_0();
 VAR_3->classname = "plat_trigger";
 VAR_3->touch = VAR_1;
 VAR_3->r.contents = VAR_0;
 VAR_3->parent = VAR_2;

 VAR_4[0] = VAR_2->pos1[0] + VAR_2->r.mins[0] + 33;
 VAR_4[1] = VAR_2->pos1[1] + VAR_2->r.mins[1] + 33;
 VAR_4[2] = VAR_2->pos1[2] + VAR_2->r.mins[2];

 VAR_5[0] = VAR_2->pos1[0] + VAR_2->r.maxs[0] - 33;
 VAR_5[1] = VAR_2->pos1[1] + VAR_2->r.maxs[1] - 33;
 VAR_5[2] = VAR_2->pos1[2] + VAR_2->r.maxs[2] + 8;

 if ( VAR_5[0] <= VAR_4[0] ) {
  VAR_4[0] = VAR_2->pos1[0] + (VAR_2->r.mins[0] + VAR_2->r.maxs[0]) *0.5;
  VAR_5[0] = VAR_4[0] + 1;
 }
 if ( VAR_5[1] <= VAR_4[1] ) {
  VAR_4[1] = VAR_2->pos1[1] + (VAR_2->r.mins[1] + VAR_2->r.maxs[1]) *0.5;
  VAR_5[1] = VAR_4[1] + 1;
 }

 FUNC_1 (VAR_4, VAR_3->r.mins);
 FUNC_1 (VAR_5, VAR_3->r.maxs);

 FUNC_2 (VAR_3);
}
