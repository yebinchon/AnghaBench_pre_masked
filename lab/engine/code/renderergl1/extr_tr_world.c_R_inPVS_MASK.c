
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_4__ {int cluster; } ;
typedef TYPE_1__ mnode_t ;
typedef int byte ;
struct TYPE_5__ {int* (* CM_ClusterPVS ) (int) ;} ;


 TYPE_1__* FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int* FUNC_1 (int) ;

qboolean FUNC_2( const vec3_t VAR_3, const vec3_t VAR_4 ) {
 mnode_t *VAR_5;
 byte *VAR_6;

 VAR_5 = FUNC_0( VAR_3 );
 VAR_6 = VAR_2.CM_ClusterPVS( VAR_5->cluster );
 VAR_5 = FUNC_0( VAR_4 );

 if ( !(VAR_6[VAR_5->cluster>>3] & (1<<(VAR_5->cluster&7))) ) {
  return VAR_0;
 }
 return VAR_1;
}
