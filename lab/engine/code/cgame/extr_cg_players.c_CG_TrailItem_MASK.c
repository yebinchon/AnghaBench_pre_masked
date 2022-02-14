
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
struct TYPE_6__ {int* origin; int hModel; scalar_t__** axis; } ;
typedef TYPE_1__ refEntity_t ;
typedef int qhandle_t ;
typedef int ent ;
struct TYPE_7__ {int lerpOrigin; int lerpAngles; } ;
typedef TYPE_2__ centity_t ;


 int FUNC_0 (scalar_t__*,scalar_t__**) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,int,scalar_t__*,int*) ;
 size_t VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5( centity_t *VAR_3, qhandle_t VAR_4 ) {
 refEntity_t VAR_5;
 vec3_t VAR_6;
 vec3_t VAR_7[3];

 FUNC_1( VAR_3->lerpAngles, VAR_6 );
 VAR_6[VAR_0] = 0;
 VAR_6[VAR_1] = 0;
 FUNC_0( VAR_6, VAR_7 );

 FUNC_3( &VAR_5, 0, sizeof( VAR_5 ) );
 FUNC_2( VAR_3->lerpOrigin, -16, VAR_7[0], VAR_5.origin );
 VAR_5.origin[2] += 16;
 VAR_6[VAR_2] += 90;
 FUNC_0( VAR_6, VAR_5.axis );

 VAR_5.hModel = VAR_4;
 FUNC_4( &VAR_5 );
}
