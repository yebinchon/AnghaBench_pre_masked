
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ weapon_t ;
struct TYPE_4__ {scalar_t__ giType; scalar_t__ giTag; scalar_t__ classname; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

gitem_t *FUNC_1( weapon_t VAR_3 ) {
 gitem_t *VAR_4;

 for ( VAR_4 = VAR_2 + 1 ; VAR_4->classname ; VAR_4++) {
  if ( VAR_4->giType == VAR_1 && VAR_4->giTag == VAR_3 ) {
   return VAR_4;
  }
 }

 FUNC_0( VAR_0, "Couldn't find item for weapon %i", VAR_3);
 return ((void*)0);
}
