
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pickup_name; scalar_t__ classname; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 (int ,char const*) ;
 TYPE_1__* VAR_0 ;

gitem_t *FUNC_1( const char *VAR_1 ) {
 gitem_t *VAR_2;

 for ( VAR_2 = VAR_0 + 1 ; VAR_2->classname ; VAR_2++ ) {
  if ( !FUNC_0( VAR_2->pickup_name, VAR_1 ) )
   return VAR_2;
 }

 return ((void*)0);
}
