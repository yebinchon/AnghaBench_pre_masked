
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * lightGridData; } ;
typedef TYPE_2__ world_t ;
typedef int vec3_t ;
struct TYPE_8__ {int origin; } ;
struct TYPE_10__ {int lightDir; TYPE_1__ e; } ;
typedef TYPE_3__ trRefEntity_t ;
typedef int ent ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 float FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4( vec3_t VAR_2, vec3_t VAR_3, vec3_t VAR_4, world_t *VAR_5 )
{
 trRefEntity_t VAR_6;

 if ( VAR_5->lightGridData == ((void*)0) )
   return VAR_0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 FUNC_3( VAR_2, VAR_6.e.origin );
 FUNC_2( &VAR_6, VAR_5 );

 if (FUNC_1(VAR_6.lightDir, VAR_4) > 0.2f)
  FUNC_3(VAR_6.lightDir, VAR_3);
 else
  FUNC_3(VAR_4, VAR_3);

 return VAR_1;
}
