
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ state; int name; } ;
typedef TYPE_1__ client_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( client_t *VAR_1 ) {
 if ( VAR_1->state == VAR_0 )
  return;

 FUNC_0( "clientDownload: %s Done\n", VAR_1->name);

 FUNC_1(VAR_1);
}
