
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_5__ {int compileFlags; TYPE_1__** nodes; int onnode; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_4__ {scalar_t__ planenum; scalar_t__ opaque; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

qboolean FUNC_1( portal_t *VAR_4 ){

 if ( !VAR_4->onnode ) {
  return VAR_2;
 }


 if ( VAR_4->nodes[ 0 ]->planenum != VAR_1 ||
   VAR_4->nodes[ 1 ]->planenum != VAR_1 ) {
  FUNC_0( "Portal_EntityFlood: not a leaf" );
 }


 if ( VAR_4->compileFlags & VAR_0 ) {
  return VAR_2;
 }


 if ( VAR_4->nodes[ 0 ]->opaque == VAR_2 && VAR_4->nodes[ 1 ]->opaque == VAR_2 ) {
  return VAR_3;
 }


 return VAR_2;
}
