
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int (* spawn ) (TYPE_2__*) ;scalar_t__ name; } ;
typedef TYPE_1__ spawn_t ;
typedef int qboolean ;
typedef int gitem_t ;
struct TYPE_8__ {int classname; } ;
typedef TYPE_2__ gentity_t ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;

qboolean FUNC_5( gentity_t *VAR_3 ) {
 spawn_t *VAR_4;
 gitem_t *VAR_5;

 if ( !VAR_3->classname ) {
  FUNC_1 ("G_CallSpawn: NULL classname\n");
  return VAR_0;
 }


 VAR_5 = FUNC_0( VAR_3->classname );
 if ( VAR_5 ) {
  FUNC_2( VAR_3, VAR_5 );
  return VAR_1;
 }


 for ( VAR_4=VAR_2 ; VAR_4->name ; VAR_4++ ) {
  if ( !FUNC_3(VAR_4->name, VAR_3->classname) ) {

   VAR_4->spawn(VAR_3);
   return VAR_1;
  }
 }
 FUNC_1 ("%s doesn't have a spawn function\n", VAR_3->classname);
 return VAR_0;
}
