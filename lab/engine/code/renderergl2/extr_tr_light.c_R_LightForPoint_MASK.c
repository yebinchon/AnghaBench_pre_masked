
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {int origin; } ;
struct TYPE_8__ {int lightDir; int directedLight; int ambientLight; TYPE_1__ e; } ;
typedef TYPE_2__ trRefEntity_t ;
typedef int ent ;
struct TYPE_10__ {int * lightGridData; } ;
struct TYPE_9__ {TYPE_5__* world; } ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,TYPE_5__*) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;

int FUNC_3( vec3_t VAR_3, vec3_t VAR_4, vec3_t VAR_5, vec3_t VAR_6 )
{
 trRefEntity_t VAR_7;

 if ( VAR_2.world->lightGridData == ((void*)0) )
   return VAR_0;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 FUNC_2( VAR_3, VAR_7.e.origin );
 FUNC_1( &VAR_7, VAR_2.world );
 FUNC_2(VAR_7.ambientLight, VAR_4);
 FUNC_2(VAR_7.directedLight, VAR_5);
 FUNC_2(VAR_7.lightDir, VAR_6);

 return VAR_1;
}
