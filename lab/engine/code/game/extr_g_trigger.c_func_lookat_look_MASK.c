
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {double member_0; double member_1; double member_2; } ;
typedef TYPE_2__ vec3_t ;
struct TYPE_14__ {int endpos; } ;
typedef TYPE_3__ trace_t ;
struct TYPE_15__ {TYPE_1__* client; int id; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_16__ {scalar_t__ pm_type; } ;
struct TYPE_12__ {TYPE_9__ ps; } ;


 int FUNC_0 (TYPE_4__*,int ,TYPE_2__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,TYPE_2__,TYPE_9__*) ;

void FUNC_2(gentity_t *VAR_1, gentity_t *VAR_2, const trace_t *VAR_3) {
 vec3_t VAR_4 = {0.0, 0.0, 0.0};

 if (!VAR_2->client) return;
 if (VAR_2->client->ps.pm_type == VAR_0) return;

 if (VAR_3) {
  FUNC_0(VAR_1, VAR_3->endpos, VAR_4);
 }
 FUNC_1( VAR_1->id, VAR_3 != ((void*)0), VAR_4, &VAR_2->client->ps );
}
