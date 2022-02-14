
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_5__ {scalar_t__ state; int lastUsercmd; } ;
typedef TYPE_1__ client_t ;
struct TYPE_6__ {int clients; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_1 (client_t *VAR_4, usercmd_t *VAR_5) {
 VAR_4->lastUsercmd = *VAR_5;

 if ( VAR_4->state != VAR_0 ) {
  return;
 }

 FUNC_0( VAR_2, VAR_1, VAR_4 - VAR_3.clients );
}
