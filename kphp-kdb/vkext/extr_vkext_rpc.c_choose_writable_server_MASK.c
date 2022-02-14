
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct rpc_server_collection {int num; struct rpc_server** servers; } ;
struct rpc_server {scalar_t__ status; int sfd; } ;
struct TYPE_6__ {int events; int revents; int fd; } ;


 int FUNC_0 (int (*) (TYPE_1__*,int,int)) ;
 int FUNC_1 (int (*) (TYPE_1__*,int,int)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int (*) (TYPE_1__*,int,int)) ;
 int VAR_5 ;
 int FUNC_3 (double) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct rpc_server*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (struct rpc_server*,int ,int ) ;
 TYPE_1__* VAR_7 ;
 size_t* VAR_8 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct rpc_server *FUNC_10 (struct rpc_server_collection *VAR_9, double VAR_10) {
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 1;
  while (VAR_12 || VAR_13) {
    int VAR_14 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_9->num; VAR_11++) if (VAR_9->servers[VAR_11] && VAR_9->servers[VAR_11]->status == VAR_6) {
      VAR_7[VAR_14].fd = VAR_9->servers[VAR_11]->sfd;
      VAR_7[VAR_14].events = VAR_3 | VAR_0 | VAR_1 | VAR_2 | VAR_4;
      VAR_8[VAR_14] = VAR_11;
      VAR_14 ++;
    }
    if (!VAR_14) { return 0; }
    VAR_12 = FUNC_3 (VAR_10);
    VAR_13 = 0;

    FUNC_0 (FUNC_5);
    FUNC_2 (FUNC_5);
    int VAR_15 = FUNC_5 (VAR_7, VAR_14, VAR_12);
    FUNC_1 (FUNC_5);
    if (VAR_15 < 0) {
      FUNC_6 (FUNC_9 (VAR_5), VAR_5);
      return 0;
    }
    if (VAR_15 == 0) {
      return 0;
    }

    int VAR_16 = 0;
    struct rpc_server *VAR_17 = 0;
    for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++) {
      if (VAR_7[VAR_11].revents & (VAR_0 | VAR_1 | VAR_2 | VAR_4)) {
        if (VAR_7[VAR_11].revents & VAR_4) {
          while (FUNC_8 (VAR_9->servers[VAR_8[VAR_11]], 0, 0) > 0);
        }
        FUNC_7 (VAR_9->servers[VAR_8[VAR_11]]);
      } else if (VAR_7[VAR_11].revents & VAR_3) {
        if (!(FUNC_4 () % (VAR_16 + 1))) {
          VAR_17 = VAR_9->servers[VAR_8[VAR_11]];
        }
        VAR_16 ++;
      }
    }
    if (VAR_17) { return VAR_17; }
  }
  return 0;
}
