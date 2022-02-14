
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int idle_timeout; int bind_port; int bind_host; } ;
typedef TYPE_1__ server_config ;
typedef int config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int,char**) ;
 char* VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;

int FUNC_5(int VAR_4, char **VAR_5) {
  server_config VAR_6;
  int VAR_7;

  VAR_3 = VAR_5[0];
  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.bind_host = VAR_0;
  VAR_6.bind_port = VAR_1;
  VAR_6.idle_timeout = VAR_2;
  FUNC_2(&VAR_6, VAR_4, VAR_5);

  VAR_7 = FUNC_3(&VAR_6, FUNC_4());
  if (VAR_7) {
    FUNC_0(1);
  }

  return 0;
}
