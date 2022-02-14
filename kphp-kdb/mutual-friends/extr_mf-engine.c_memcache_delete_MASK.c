
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (char const*,int,char**,int*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,char*,int*,int*) ;
 int VAR_2 ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int) ;

int FUNC_7 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  VAR_0;

  if (VAR_3 > 1) {
    FUNC_3 (VAR_2, "memcache_delete: key='%s'\n", VAR_5);
  }

  char *VAR_7;
  int VAR_8;

  FUNC_2 (VAR_5, VAR_6, &VAR_7, &VAR_8);


  if (VAR_8 >= 9 && !FUNC_5 (VAR_7, "exception", 9)) {
    int VAR_9, VAR_10;
    if (FUNC_4 (VAR_7, "exception%d_%d", &VAR_9, &VAR_10) == 2 && FUNC_1 (VAR_9, VAR_10)) {
      FUNC_6 (&VAR_4->Out, "DELETED\r\n", 9);
      FUNC_0(VAR_1, 0);
    }

    FUNC_6 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    FUNC_0(VAR_1, 0);
  }

  FUNC_0(VAR_1, 0);
}
