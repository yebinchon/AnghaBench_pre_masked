
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_5__ {scalar_t__ mode; int req_id; struct connection* conn; } ;
typedef TYPE_1__ php_worker ;
struct TYPE_6__ {int data_len; scalar_t__ data; } ;
typedef TYPE_2__ php_query_rpc_answer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct connection*,int ,int ,int*,int) ;
 int FUNC_3 (int,char*,int,int ) ;

void FUNC_4 (php_worker *VAR_4, php_query_rpc_answer *VAR_5) {
  if (VAR_4->mode == VAR_3) {
    struct connection *VAR_6 = VAR_4->conn;
    int *VAR_7 = (int *)VAR_5->data;
    int VAR_8 = VAR_5->data_len;

    FUNC_3 (2, "going to send %d bytes as an answer [req_id = %016llx]\n", VAR_8, VAR_4->req_id);
    FUNC_2 (VAR_6, VAR_7[2] == 0 ? VAR_1 : VAR_0, VAR_4->req_id, VAR_7, VAR_8);
  }
  FUNC_1 (VAR_2);
  FUNC_0 (VAR_2);
}
