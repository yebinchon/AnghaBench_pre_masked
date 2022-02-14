
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ trType; } ;
struct TYPE_8__ {scalar_t__ trType; } ;
struct TYPE_10__ {TYPE_2__ apos; TYPE_1__ pos; } ;
struct TYPE_11__ {int flags; TYPE_3__ s; } ;
typedef TYPE_4__ gentity_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;

void FUNC_2( gentity_t *VAR_2 ) {


 if ( VAR_2->flags & VAR_0 ) {
  return;
 }


 if ( VAR_2->s.pos.trType != VAR_1 || VAR_2->s.apos.trType != VAR_1 ) {
  FUNC_0( VAR_2 );
 }


 FUNC_1( VAR_2 );
}
