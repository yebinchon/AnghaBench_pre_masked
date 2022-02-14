
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int usercmd_t ;
struct TYPE_8__ {int number; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_2__ sharedEntity_t ;
struct TYPE_10__ {int deltaMessage; int lastUsercmd; scalar_t__ lastSnapshotTime; TYPE_2__* gentity; int state; int name; } ;
typedef TYPE_3__ client_t ;
struct TYPE_11__ {TYPE_3__* clients; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,char,int) ;
 TYPE_4__ VAR_3 ;

void FUNC_6( client_t *VAR_4, usercmd_t *VAR_5 ) {
 int VAR_6;
 sharedEntity_t *VAR_7;

 FUNC_0( "Going from CS_PRIMED to CS_ACTIVE for %s\n", VAR_4->name );
 VAR_4->state = VAR_0;



 FUNC_2( VAR_4 );


 VAR_6 = VAR_4 - VAR_3.clients;
 VAR_7 = FUNC_1( VAR_6 );
 VAR_7->s.number = VAR_6;
 VAR_4->gentity = VAR_7;

 VAR_4->deltaMessage = -1;
 VAR_4->lastSnapshotTime = 0;

 if(VAR_5)
  FUNC_4(&VAR_4->lastUsercmd, VAR_5, sizeof(VAR_4->lastUsercmd));
 else
  FUNC_5(&VAR_4->lastUsercmd, '\0', sizeof(VAR_4->lastUsercmd));


 FUNC_3( VAR_2, VAR_1, VAR_4 - VAR_3.clients );
}
