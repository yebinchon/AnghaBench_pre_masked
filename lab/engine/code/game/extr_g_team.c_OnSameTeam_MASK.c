
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_9__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_10__ {scalar_t__ integer; } ;
struct TYPE_7__ {scalar_t__ sessionTeam; } ;
struct TYPE_8__ {TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

qboolean FUNC_0( gentity_t *VAR_4, gentity_t *VAR_5 ) {
 if ( !VAR_4->client || !VAR_5->client ) {
  return VAR_2;
 }

 if ( VAR_1.integer < VAR_0 ) {
  return VAR_2;
 }

 if ( VAR_4->client->sess.sessionTeam == VAR_5->client->sess.sessionTeam ) {
  return VAR_3;
 }

 return VAR_2;
}
