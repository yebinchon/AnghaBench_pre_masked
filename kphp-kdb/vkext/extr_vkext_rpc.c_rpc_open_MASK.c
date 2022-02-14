
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {int status; scalar_t__ retry_interval; scalar_t__ failed; scalar_t__ last_received_time; } ;


 int FUNC_0 (struct rpc_server*,char**,int*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct rpc_server*) ;



 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4 (struct rpc_server *VAR_2, char **VAR_3, int *VAR_4) {
  switch (VAR_2->status) {
    case 129:
      if (FUNC_0 (VAR_2, VAR_3, VAR_4) > 0) {
        return 1;
      } else {
        break;
      }

    case 130:
      FUNC_3 ();
      if (VAR_1 - VAR_2->last_received_time > VAR_0) {
        if (FUNC_2 (VAR_2) > 0) {
          return 1;
        } else if (FUNC_0 (VAR_2, VAR_3, VAR_4) > 0) {
          return 1;
        } else {
          break;
        }
      } else {
        return 1;
      }


    case 128:
      FUNC_3 ();
      if (VAR_2->retry_interval >= 0 && VAR_1 >= VAR_2->failed + VAR_2->retry_interval) {
        if (FUNC_0 (VAR_2, VAR_3, VAR_4) > 0) {
          return 1;
        }
      } else {
        if (VAR_3) {
          *VAR_3 = FUNC_1 ("server failed some time ago. Fail timeout not exceeded.");
          *VAR_4 = 0;
        }
        break;
      }
      break;
  }
  return -1;
}
