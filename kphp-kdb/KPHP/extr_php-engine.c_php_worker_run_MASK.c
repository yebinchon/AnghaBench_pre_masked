
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int script_result ;
struct TYPE_8__ {int paused; TYPE_7__* conn; int req_id; scalar_t__ terminate_flag; void* state; int mode; int error_message; } ;
typedef TYPE_1__ php_worker ;
struct TYPE_10__ {int status; int ev; } ;
struct TYPE_9__ {int is_wait_net; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_7__*,char*,int) ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int *) ;
 void* VAR_4 ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (TYPE_1__*,int,int ) ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_14 (int,char*,int ) ;

void FUNC_15 (php_worker *VAR_7) {
  int VAR_8 = 1;
  while (VAR_8) {
    if (VAR_7->terminate_flag) {
      FUNC_9 (VAR_3, VAR_7->error_message);
    }

    FUNC_2();

    switch (FUNC_7 (VAR_3)) {
      case 128: {
        FUNC_14 (2, "before php_script_iterate [req_id = %016llx] (before swap context)\n", VAR_7->req_id);
        VAR_2.is_wait_net = 0;
        FUNC_8 (VAR_3);
        FUNC_14 (2, "after php_script_iterate [req_id = %016llx] (after swap context)\n", VAR_7->req_id);
        break;
      }
      case 130: {
        FUNC_14 (2, "got query [req_id = %016llx]\n", VAR_7->req_id);
        FUNC_10 (VAR_7);
        break;
      }
      case 129: {
        FUNC_14 (2, "paused due to query [req_id = %016llx]\n", VAR_7->req_id);
        VAR_8 = 0;
        VAR_7->paused = 1;
        VAR_2.is_wait_net = 1;
        break;
      }
      case 132: {
        FUNC_14 (2, "php script [req_id = %016llx]: ERROR (probably timeout)\n", VAR_7->req_id);
        FUNC_4 (VAR_3);

        if (VAR_7->conn != ((void*)0)) {
          if (VAR_7->mode == VAR_1) {
            FUNC_3 (VAR_7->conn, "ERROR", 5);
          } else if (VAR_7->mode == VAR_6) {
            if (!VAR_5) {
              FUNC_13 (VAR_7, -504, FUNC_5 (VAR_3));
            }
          }
        }

        VAR_7->state = VAR_4;
        VAR_8 = 0;
        break;
      }
      case 131: {
        FUNC_14 (2, "php script [req_id = %016llx]: OK (still can return RPC_ERROR)\n", VAR_7->req_id);
        script_result *VAR_9 = FUNC_6 (VAR_3);

        FUNC_11 (VAR_7, VAR_9);

        FUNC_4 (VAR_3);


        VAR_7->state = VAR_4;
        VAR_8 = 0;
        break;
      }
      default:
        FUNC_0 ("php_worker_run: unexpected state" && 0);
    }


    if (!VAR_7->terminate_flag) {
      int VAR_10 = FUNC_1 (0);
      if (VAR_10 > 0) {
        FUNC_14 (2, "paused for some net activity [req_id = %016llx]\n", VAR_7->req_id);
        VAR_8 = 0;
        FUNC_12 (VAR_7->conn->ev, 1);
        VAR_7->conn->status = VAR_0;
        VAR_7->paused = 1;
      }
    }
  }
}
