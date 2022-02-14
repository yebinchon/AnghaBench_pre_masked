
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bind_port; int bind_host; } ;
typedef TYPE_1__ server_config ;


 int FUNC_0 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(server_config *VAR_1, int VAR_2, char **VAR_3) {
  int VAR_4;

  while (-1 != (VAR_4 = FUNC_0(VAR_2, VAR_3, "b:hp:"))) {
    switch (VAR_4) {
      case 'b':
        VAR_1->bind_host = VAR_0;
        break;

      case 'p':
        if (1 != FUNC_2(VAR_0, "%hu", &VAR_1->bind_port)) {
          FUNC_1("bad port number: %s", VAR_0);
          FUNC_3();
        }
        break;

      default:
        FUNC_3();
    }
  }
}
