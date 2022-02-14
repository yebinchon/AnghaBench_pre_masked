
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct connection* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct connection*,int) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int *,int,int *) ;
 int VAR_5 ;

int FUNC_8 (char *VAR_6) {
  FUNC_6 (&VAR_3);
  int VAR_7 = FUNC_7 (&VAR_3, VAR_6, &VAR_0[5 + VAR_2], VAR_1 - 6 - VAR_2, &VAR_5);
  if (VAR_7 < 0) {
    FUNC_4 ("tl_serialize_rpc_function_call fail. Errors:\n");
    FUNC_3 ();
    return VAR_7;
  } else {
    struct connection *VAR_8 = FUNC_1 (VAR_4);
    if (VAR_8 == ((void*)0)) {
      FUNC_2 ("get_target_connection returns NULL.\n");
      FUNC_0 (1);
    }
    FUNC_5 (VAR_8, VAR_7);
  }
  return 0;
}
