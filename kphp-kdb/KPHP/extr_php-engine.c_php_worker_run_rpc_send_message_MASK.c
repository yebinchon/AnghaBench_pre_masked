
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {scalar_t__ mode; struct connection* conn; } ;
typedef TYPE_1__ php_worker ;
struct TYPE_6__ {int data_len; int auth_key_id; int session_id; scalar_t__ data; } ;
typedef TYPE_2__ php_query_rpc_message ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct connection*,int ,int ,int*,int) ;
 int FUNC_3 (int,char*,int,int ,int ) ;

void FUNC_4 (php_worker *VAR_3, php_query_rpc_message *VAR_4) {
  if (VAR_3->mode == VAR_2) {
    struct connection *VAR_5 = VAR_3->conn;
    int *VAR_6 = (int *)VAR_4->data;
    int VAR_7 = VAR_4->data_len;

    FUNC_3 (2, "going to send %d bytes to session [%016llx:%016llx]\n", VAR_7, VAR_4->auth_key_id, VAR_4->session_id);
    FUNC_2 (VAR_5, VAR_0, VAR_4->auth_key_id, VAR_6, VAR_7);
  }
  FUNC_1 (VAR_1);
  FUNC_0 (VAR_1);
}
