
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_10__ {TYPE_2__* client; int takedamage; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_8__ {scalar_t__* stats; } ;
struct TYPE_9__ {TYPE_1__ ps; } ;


 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

qboolean FUNC_1( gentity_t *VAR_3, gentity_t *VAR_4 ) {
 if( !VAR_3->takedamage ) {
  return VAR_1;
 }

 if ( VAR_3 == VAR_4 ) {
  return VAR_1;
 }

 if( !VAR_3->client ) {
  return VAR_1;
 }

 if( !VAR_4->client ) {
  return VAR_1;
 }

 if( VAR_3->client->ps.stats[VAR_0] <= 0 ) {
  return VAR_1;
 }

 if ( FUNC_0( VAR_3, VAR_4 ) ) {
  return VAR_1;
 }

 return VAR_2;
}
