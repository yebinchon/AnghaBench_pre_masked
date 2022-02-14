
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpcs_data {int * extra; } ;
struct connection {int dummy; } ;
typedef int php_worker ;


 struct rpcs_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,char*) ;
 int FUNC_5 () ;

int FUNC_6 (struct connection *VAR_1, int VAR_2) {
  struct rpcs_data *VAR_3 = FUNC_0(VAR_1);

  php_worker *VAR_4 = VAR_3->extra;
  if (VAR_4 != ((void*)0)) {
    FUNC_4 (VAR_4, 1, "rpc connection close");
    int VAR_5 = FUNC_3 (VAR_4);
    VAR_3->extra = ((void*)0);
    FUNC_1 ("worker is unfinished after closing connection" && VAR_5 == 1);

    if (!FUNC_2()) {
      VAR_0 = 1;
      FUNC_5();
    }
  }

  return 0;
}
