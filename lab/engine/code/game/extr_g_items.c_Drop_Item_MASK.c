
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int* vec3_t ;
typedef int gitem_t ;
struct TYPE_8__ {int trBase; } ;
struct TYPE_9__ {int trBase; } ;
struct TYPE_10__ {TYPE_1__ pos; TYPE_2__ apos; } ;
struct TYPE_11__ {TYPE_3__ s; } ;
typedef TYPE_4__ gentity_t ;


 int FUNC_0 (int*,int*,int *,int *) ;
 TYPE_4__* FUNC_1 (int *,int ,int*) ;
 size_t VAR_0 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int*,int,int*) ;
 size_t VAR_1 ;
 int FUNC_4 () ;

gentity_t *FUNC_5( gentity_t *VAR_2, gitem_t *VAR_3, float VAR_4 ) {
 vec3_t VAR_5;
 vec3_t VAR_6;

 FUNC_2( VAR_2->s.apos.trBase, VAR_6 );
 VAR_6[VAR_1] += VAR_4;
 VAR_6[VAR_0] = 0;

 FUNC_0( VAR_6, VAR_5, ((void*)0), ((void*)0) );
 FUNC_3( VAR_5, 150, VAR_5 );
 VAR_5[2] += 200 + FUNC_4() * 50;

 return FUNC_1( VAR_3, VAR_2->s.pos.trBase, VAR_5 );
}
