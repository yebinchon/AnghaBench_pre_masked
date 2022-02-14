
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* rpc_t ;
typedef int rpc_status ;
typedef TYPE_2__* iwdp_iwi_t ;
typedef int ht_t ;
struct TYPE_6__ {int connection_id; int app_id_to_true; } ;
struct TYPE_5__ {int (* send_forwardGetListing ) (TYPE_1__*,int ,char const*) ;int state; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,int ,char const*) ;

rpc_status FUNC_5(rpc_t VAR_1, const char *VAR_2) {
  iwdp_iwi_t VAR_3 = (iwdp_iwi_t)VAR_1->state;
  ht_t VAR_4 = VAR_3->app_id_to_true;
  if (FUNC_1(VAR_4, VAR_2)) {
    return VAR_0;
  }
  FUNC_2(VAR_4, FUNC_3(VAR_2), FUNC_0(1));
  return VAR_1->send_forwardGetListing(VAR_1, VAR_3->connection_id, VAR_2);
}
