
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vec3_t ;
struct TYPE_12__ {double fraction; int entityNum; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_11__ {int number; } ;
struct TYPE_10__ {int contents; float* currentOrigin; float* currentAngles; int bmodel; } ;
struct TYPE_13__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_4__ sharedEntity_t ;
typedef int clipHandle_t ;


 int FUNC_0 (TYPE_3__*,float*,float*,float*,float*,int ,int,float*,float*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int) ;
 float* VAR_0 ;

void FUNC_4( trace_t *VAR_1, const vec3_t VAR_2, const vec3_t VAR_3, const vec3_t VAR_4, const vec3_t VAR_5, int VAR_6, int VAR_7, int VAR_8 ) {
 sharedEntity_t *VAR_9;
 clipHandle_t VAR_10;
 float *VAR_11, *VAR_12;

 VAR_9 = FUNC_3( VAR_6 );

 FUNC_1(VAR_1, 0, sizeof(trace_t));



 if ( ! ( VAR_7 & VAR_9->r.contents ) ) {
  VAR_1->fraction = 1.0;
  return;
 }


 VAR_10 = FUNC_2 (VAR_9);

 VAR_11 = VAR_9->r.currentOrigin;
 VAR_12 = VAR_9->r.currentAngles;

 if ( !VAR_9->r.bmodel ) {
  VAR_12 = VAR_0;
 }

 FUNC_0 ( VAR_1, (float *)VAR_2, (float *)VAR_5,
  (float *)VAR_3, (float *)VAR_4, VAR_10, VAR_7,
  VAR_11, VAR_12, VAR_8);

 if ( VAR_1->fraction < 1 ) {
  VAR_1->entityNum = VAR_9->s.number;
 }
}
