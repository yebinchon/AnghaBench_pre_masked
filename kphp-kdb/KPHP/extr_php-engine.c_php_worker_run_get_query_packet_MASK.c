
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_11__ ;


struct TYPE_22__ {TYPE_15__* conn; } ;
typedef TYPE_4__ php_worker ;
struct TYPE_20__ {int ans; } ;
struct TYPE_23__ {scalar_t__ protocol; int data_len; TYPE_2__ base; scalar_t__ data; } ;
typedef TYPE_5__ php_net_query_packet_t ;
struct TYPE_24__ {TYPE_1__* func; } ;
typedef TYPE_6__ net_get_ansgen_t ;
struct TYPE_25__ {TYPE_3__* func; int ans; } ;
typedef TYPE_7__ net_ansgen_t ;
struct TYPE_21__ {int (* free ) (TYPE_7__*) ;} ;
struct TYPE_19__ {double (* try_wait ) (TYPE_6__*,double) ;int (* set_id ) (TYPE_6__*,long long) ;} ;
struct TYPE_18__ {int status; } ;
struct TYPE_17__ {char* desc; double timeout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_15__*,int *,TYPE_7__*,double) ;
 long long VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_2 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 double VAR_6 ;
 TYPE_11__ VAR_7 ;
 int FUNC_5 (TYPE_6__*,long long) ;
 double FUNC_6 (TYPE_6__*,double) ;
 int FUNC_7 (TYPE_7__*) ;

void FUNC_8 (php_worker *VAR_8, php_net_query_packet_t *VAR_9) {
  FUNC_4 (VAR_5);

  if (VAR_9->protocol == VAR_3) {
    VAR_7.desc = "RPC GET";
  } else if (VAR_9->protocol == VAR_4) {
    VAR_7.desc = "RPC GET ID";
  }

  net_get_ansgen_t *VAR_10 = FUNC_2();
  net_ansgen_t *VAR_11 = (net_ansgen_t *)VAR_10;


  FUNC_0 (VAR_9->data_len == sizeof (long long));
  long long VAR_12 = *(long long *)VAR_9->data;

  VAR_10->func->set_id (VAR_10, VAR_12);

  double VAR_13 = VAR_10->func->try_wait (VAR_10, VAR_6);
  if (VAR_13 <= 1) {
    VAR_9->base.ans = VAR_11->ans;
    VAR_11->func->free (VAR_11);
    FUNC_3 (VAR_5);
    return;
  }

  VAR_7.timeout = VAR_13 - VAR_6;
  FUNC_1 (VAR_8->conn, &VAR_2, VAR_11, VAR_13);
  VAR_1 = VAR_12;


  if (VAR_8->conn != ((void*)0)) {
    VAR_8->conn->status = VAR_0;
  }
}
