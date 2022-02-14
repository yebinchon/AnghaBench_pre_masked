
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_server {char const* error; int errnum; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,int) ;
 char const* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_5 (struct rpc_server *VAR_0, const char *VAR_1, int VAR_2) {
  if (VAR_1) {
    if (VAR_0->error) {
      FUNC_4 (VAR_0->error, FUNC_3 (VAR_0->error) + 1);
    }

    VAR_0->error = FUNC_2 (VAR_1);
    VAR_0->errnum = VAR_2;
    FUNC_0 (FUNC_3 (VAR_1) + 1);

    FUNC_1 (VAR_1, VAR_2);
  }
}
