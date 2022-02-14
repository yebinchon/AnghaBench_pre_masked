
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* client; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_5__ {scalar_t__ fireHeld; int hook; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1 (gentity_t *VAR_3)
{
 if (!VAR_3->client->fireHeld && !VAR_3->client->hook)
  FUNC_0 (VAR_3, VAR_1, VAR_0);

 VAR_3->client->fireHeld = VAR_2;
}
