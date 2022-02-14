
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hts_data {int * extra; } ;
struct connection {int dummy; } ;
typedef int php_worker ;


 struct hts_data* FUNC_0 (struct connection*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,char*) ;

int FUNC_4 (struct connection *VAR_0, int VAR_1) {
  struct hts_data *VAR_2 = FUNC_0(VAR_0);

  php_worker *VAR_3 = VAR_2->extra;
  if (VAR_3 != ((void*)0)) {
    FUNC_3 (VAR_3, 1, "http connection close");
    int VAR_4 = FUNC_2 (VAR_3);
    VAR_2->extra = ((void*)0);
    FUNC_1 ("worker is unfinished after closing connection" && VAR_4 == 1);
  }
  return 0;
}
