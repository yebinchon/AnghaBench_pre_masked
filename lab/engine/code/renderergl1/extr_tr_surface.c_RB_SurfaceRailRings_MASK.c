
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_6__ {int origin; int oldorigin; } ;
typedef TYPE_2__ refEntity_t ;
struct TYPE_8__ {TYPE_1__* currentEntity; } ;
struct TYPE_7__ {int value; } ;
struct TYPE_5__ {TYPE_2__ e; } ;


 int FUNC_0 (int,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static void FUNC_6( void ) {
 refEntity_t *VAR_2;
 int VAR_3;
 int VAR_4;
 vec3_t VAR_5;
 vec3_t VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9;

 VAR_2 = &VAR_0.currentEntity->e;

 FUNC_2( VAR_2->oldorigin, VAR_8 );
 FUNC_2( VAR_2->origin, VAR_9 );


 FUNC_5( VAR_9, VAR_8, VAR_5 );
 VAR_4 = FUNC_3( VAR_5 );
 FUNC_1( VAR_5, VAR_6, VAR_7 );
 VAR_3 = ( VAR_4 ) / VAR_1->value;
 if ( VAR_3 <= 0 ) {
  VAR_3 = 1;
 }

 FUNC_4( VAR_5, VAR_1->value, VAR_5 );

 FUNC_0( VAR_3, VAR_8, VAR_5, VAR_6, VAR_7 );
}
