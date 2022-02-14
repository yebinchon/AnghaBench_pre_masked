
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ classname; } ;
typedef TYPE_1__ gitem_t ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__,char const*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_2 (char const*,int*) ;

gitem_t *FUNC_3( const char *VAR_2 ) {
 gitem_t *VAR_3;
 int VAR_4;

 for ( VAR_3 = VAR_1 + 1 ; VAR_3->classname ; VAR_3++ ) {
  if ( !FUNC_1( VAR_3->classname, VAR_2 ) )
   return VAR_3;
 }

 if ( FUNC_2( VAR_2, &VAR_4 ) ) {
  FUNC_0( );
  return &VAR_1[VAR_0 + VAR_4];
 }

 return ((void*)0);
}
