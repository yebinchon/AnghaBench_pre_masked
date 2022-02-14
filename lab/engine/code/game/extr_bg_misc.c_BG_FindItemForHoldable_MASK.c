
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ holdable_t ;
struct TYPE_4__ {scalar_t__ giType; scalar_t__ giTag; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

gitem_t *FUNC_1( holdable_t VAR_4 ) {
 int VAR_5;

 for ( VAR_5 = 0 ; VAR_5 < VAR_3 ; VAR_5++ ) {
  if ( VAR_2[VAR_5].giType == VAR_1 && VAR_2[VAR_5].giTag == VAR_4 ) {
   return &VAR_2[VAR_5];
  }
 }

 FUNC_0( VAR_0, "HoldableItem not found" );

 return ((void*)0);
}
