
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xpid ;
struct TYPE_2__ {int utime; int pid; int port; int ip; } ;
struct rpcs_data {int * extra; TYPE_1__ remote_pid; } ;
struct connection {int status; int pending_queries; int In; int fd; } ;
typedef int rpc_query_data ;
typedef int php_worker ;
typedef int npid_t ;


 int VAR_0 ;
 struct rpcs_data* FUNC_0 (struct connection*) ;


 int VAR_1 ;


 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int * FUNC_4 (int ,struct connection*,int *,int *,int ,long long) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,char*,int) ;
 int * FUNC_7 (int*,int,long long,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_8 (struct connection*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct connection*,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int,char*,long long,...) ;

int FUNC_11 (struct connection *VAR_10, int VAR_11, int VAR_12) {
  struct rpcs_data *VAR_13 = FUNC_0(VAR_10);

  FUNC_10 (1, "rpcs_execute: fd=%d, op=%d, len=%d\n", VAR_10->fd, VAR_11, VAR_12);


  static char VAR_14[126214400];

  if (VAR_8 && VAR_9 < VAR_4) {
    return VAR_1;
  }
  npid_t VAR_15;

  switch (VAR_11) {
  case 128:
    FUNC_3();
    break;
  case 129:
  case 131:
  case 130:
    if (VAR_12 > 126214400) {
      return VAR_1;
    }

    FUNC_1 (FUNC_6 (&VAR_10->In, VAR_14, VAR_12) == VAR_12);
    FUNC_1 (VAR_12 % (int)sizeof (int) == 0);
    VAR_12 /= (int)sizeof (int);
    if (VAR_12 < 6) {
      return VAR_1;
    }

    int *VAR_16 = (int *)VAR_14;
    VAR_16 += 3;
    VAR_12 -= 4;

    if (VAR_11 == 129) {
      if (VAR_12 < 4) {
        return VAR_1;
      }
      FUNC_1 (sizeof (VAR_15) == 12);
      VAR_15 = *(npid_t *)VAR_16;
      VAR_16 += 3;
      VAR_12 -= 3;
      int VAR_17 = *VAR_16++;
      VAR_12--;
      FUNC_2 (VAR_15, VAR_4 + VAR_17);
      return 0;
      break;
    }

    long long VAR_18 = *(long long *)VAR_16;
    VAR_16 += 2;
    VAR_12 -= 2;

    FUNC_10 (2, "got RPC_INVOKE_KPHP_REQ [req_id = %016llx]\n", VAR_18);
    FUNC_9 (VAR_10, VAR_7);


    rpc_query_data *VAR_19 = FUNC_7 (VAR_16, VAR_12, VAR_18, VAR_13->remote_pid.ip, VAR_13->remote_pid.port, VAR_13->remote_pid.pid, VAR_13->remote_pid.utime);

    php_worker *VAR_20 = FUNC_4 (VAR_6 ? VAR_3 : VAR_5, VAR_10, ((void*)0), VAR_19, VAR_7, VAR_18);
    VAR_13->extra = VAR_20;

    int VAR_21 = FUNC_5 (VAR_20);
    if (VAR_21 == 1) {
      FUNC_8 (VAR_10);
    } else {
      FUNC_1 (VAR_10->pending_queries >= 0 && VAR_10->status == VAR_2);
    }

    return 0;
    break;
  }

  return VAR_1;

}
