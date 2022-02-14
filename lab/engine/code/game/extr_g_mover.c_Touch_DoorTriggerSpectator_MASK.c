
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int trace_t ;
struct TYPE_8__ {int* absmin; int* absmax; } ;
struct TYPE_11__ {int count; TYPE_3__* client; TYPE_1__ r; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_9__ {int origin; } ;
struct TYPE_10__ {TYPE_2__ ps; } ;


 int FUNC_0 (TYPE_4__*,float*,int ) ;
 int FUNC_1 (int ,float*) ;
 scalar_t__ FUNC_2 (float) ;
 int FUNC_3 (double,int ,int ) ;

__attribute__((used)) static void FUNC_4( gentity_t *VAR_0, gentity_t *VAR_1, trace_t *VAR_2 ) {
 int VAR_3;
 float VAR_4, VAR_5;
 vec3_t VAR_6;

 VAR_3 = VAR_0->count;

 VAR_4 = VAR_0->r.absmin[VAR_3] + 100;
 VAR_5 = VAR_0->r.absmax[VAR_3] - 100;

 FUNC_1(VAR_1->client->ps.origin, VAR_6);

 if (VAR_6[VAR_3] < VAR_4 || VAR_6[VAR_3] > VAR_5) return;

 if (FUNC_2(VAR_6[VAR_3] - VAR_5) < FUNC_2(VAR_6[VAR_3] - VAR_4)) {
  VAR_6[VAR_3] = VAR_4 - 10;
 } else {
  VAR_6[VAR_3] = VAR_5 + 10;
 }

 FUNC_0(VAR_1, VAR_6, FUNC_3(10000000.0, 0, 0));
}
