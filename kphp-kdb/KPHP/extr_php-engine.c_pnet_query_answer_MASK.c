
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {scalar_t__ generation; int * type; } ;
struct conn_query {scalar_t__ req_generation; scalar_t__ extra; struct connection* requester; } ;
struct TYPE_5__ {int ans; } ;
typedef TYPE_1__ net_ansgen_t ;
struct TYPE_8__ {void* extra; } ;
struct TYPE_7__ {void* extra; } ;
struct TYPE_6__ {void* extra; } ;


 TYPE_4__* FUNC_0 (struct connection*) ;
 TYPE_3__* FUNC_1 (struct connection*) ;
 TYPE_2__* FUNC_2 (struct connection*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (void*,int ) ;

void FUNC_5 (struct conn_query *VAR_3) {
  struct connection *VAR_4 = VAR_3->requester;
  if (VAR_4 != ((void*)0) && VAR_4->generation == VAR_3->req_generation) {
    void *VAR_5 = ((void*)0);
    if (VAR_4->type == &VAR_1) {
      VAR_5 = FUNC_2 (VAR_4)->extra;
    } else if (VAR_4->type == &VAR_2) {
      VAR_5 = FUNC_1 (VAR_4)->extra;
    } else if (VAR_4->type == &VAR_0) {
      VAR_5 = FUNC_0 (VAR_4)->extra;
    } else {
      FUNC_3 ("unexpected type of connection\n" && 0);
    }
    FUNC_4 (VAR_5, ((net_ansgen_t *)(VAR_3->extra))->ans);
  }
}
