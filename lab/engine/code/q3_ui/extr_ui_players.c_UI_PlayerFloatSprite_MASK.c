
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {int* origin; int radius; scalar_t__ renderfx; int customShader; int reType; } ;
typedef TYPE_1__ refEntity_t ;
typedef int qhandle_t ;
typedef int playerInfo_t ;
typedef int ent ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3( playerInfo_t *VAR_1, vec3_t VAR_2, qhandle_t VAR_3 ) {
 refEntity_t VAR_4;

 FUNC_1( &VAR_4, 0, sizeof( VAR_4 ) );
 FUNC_0( VAR_2, VAR_4.origin );
 VAR_4.origin[2] += 48;
 VAR_4.reType = VAR_0;
 VAR_4.customShader = VAR_3;
 VAR_4.radius = 10;
 VAR_4.renderfx = 0;
 FUNC_2( &VAR_4 );
}
