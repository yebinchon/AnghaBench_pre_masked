
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct connection {scalar_t__ status; int * Tmp; int Out; } ;
struct conn_target {int port; int target; } ;
struct conn_query {int dummy; } ;
struct TYPE_21__ {TYPE_14__* conn; } ;
typedef TYPE_3__ php_worker ;
typedef int php_query_base_t ;
struct TYPE_22__ {int extra_type; int connection_id; int timeout; int data_len; int data; } ;
typedef TYPE_4__ php_net_query_packet_t ;
struct TYPE_23__ {TYPE_2__* func; } ;
typedef TYPE_5__ net_ansgen_t ;
struct TYPE_24__ {TYPE_1__* func; } ;
typedef TYPE_6__ mc_ansgen_t ;
struct TYPE_25__ {char* desc; int port; int query; } ;
struct TYPE_20__ {int (* set_desc ) (TYPE_5__*,int ) ;} ;
struct TYPE_19__ {int (* set_query_type ) (TYPE_6__*,int) ;} ;
struct TYPE_18__ {int (* flush_query ) (struct connection*) ;} ;
struct TYPE_17__ {int status; } ;


 int VAR_0 ;
 TYPE_16__* FUNC_0 (struct connection*) ;
 int VAR_1 ;
 struct conn_target* VAR_2 ;
 int * FUNC_1 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct conn_query* FUNC_2 (TYPE_14__*,struct connection*,TYPE_5__*,double) ;
 double FUNC_3 (int ) ;
 struct connection* FUNC_4 (struct conn_target*) ;
 int FUNC_5 (int ) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (TYPE_5__*,int *,char*) ;
 int VAR_5 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct conn_query*) ;
 double VAR_6 ;
 int FUNC_10 (char*,int ,int ) ;
 TYPE_9__ VAR_7 ;
 int FUNC_11 (TYPE_6__*,int) ;
 int FUNC_12 (TYPE_5__*,int ) ;
 int FUNC_13 (struct connection*) ;
 int FUNC_14 (int *,int ,int ) ;

void FUNC_15 (php_worker *VAR_8, php_net_query_packet_t *VAR_9) {
  VAR_7.desc = "MC";
  VAR_7.query = VAR_9->data;

  FUNC_8 (VAR_5);
  mc_ansgen_t *VAR_10 = FUNC_6();
  VAR_10->func->set_query_type (VAR_10, VAR_9->extra_type);

  net_ansgen_t *VAR_11 = (net_ansgen_t *)VAR_10;
  int VAR_12 = VAR_9->connection_id;

  if (VAR_12 < 0 || VAR_12 >= VAR_0) {
    FUNC_7 (VAR_11, (php_query_base_t *)VAR_9, "Invalid connection_id (1)");
    return;
  }

  struct conn_target *VAR_13 = &VAR_2[VAR_12];

  if (VAR_13 == ((void*)0)) {
    FUNC_7 (VAR_11, (php_query_base_t *)VAR_9, "Invalid connection_id (2)");
    return;
  }

  VAR_11->func->set_desc (VAR_11, FUNC_10 ("[%s:%d]", FUNC_5 (VAR_13->target), VAR_13->port));

  VAR_7.port = VAR_13->port;

  struct connection *VAR_14 = FUNC_4 (VAR_13);
  if (VAR_14 == ((void*)0)) {
    FUNC_7 (VAR_11, (php_query_base_t *)VAR_9, "Failed to establish connection [probably reconnect timeout is not expired]");
    return;
  }

  if (VAR_14->status != VAR_3) {
    FUNC_14 (&VAR_14->Out, VAR_9->data, VAR_9->data_len);
    FUNC_0 (VAR_14)->flush_query (VAR_14);
  } else {
    if (VAR_14->Tmp == ((void*)0)) {
      VAR_14->Tmp = FUNC_1();
    }
    FUNC_14 (VAR_14->Tmp, VAR_9->data, VAR_9->data_len);
  }

  double VAR_15 = FUNC_3 (VAR_9->timeout) + VAR_6;
  struct conn_query *VAR_16 = FUNC_2 (VAR_8->conn, VAR_14, (net_ansgen_t *)VAR_10, VAR_15);

  if (VAR_9->extra_type & VAR_1) {
    FUNC_9 (VAR_16);
  } else if (VAR_8->conn != ((void*)0)) {
    VAR_8->conn->status = VAR_4;
  }

  return;
}
