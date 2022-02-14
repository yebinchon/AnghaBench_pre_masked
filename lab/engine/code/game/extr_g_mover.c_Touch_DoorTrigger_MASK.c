
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int trace_t ;
struct TYPE_13__ {TYPE_4__* parent; TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_14__ {scalar_t__ moverState; } ;
struct TYPE_11__ {scalar_t__ sessionTeam; } ;
struct TYPE_12__ {TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,TYPE_3__*) ;

void FUNC_2( gentity_t *VAR_3, gentity_t *VAR_4, trace_t *VAR_5 ) {
 if ( VAR_4->client && VAR_4->client->sess.sessionTeam == VAR_2 ) {

  if ( VAR_3->parent->moverState != VAR_0 &&
   VAR_3->parent->moverState != VAR_1) {
   FUNC_0( VAR_3, VAR_4, VAR_5 );
  }
 }
 else if ( VAR_3->parent->moverState != VAR_0 ) {
  FUNC_1( VAR_3->parent, VAR_3, VAR_4 );
 }
}
