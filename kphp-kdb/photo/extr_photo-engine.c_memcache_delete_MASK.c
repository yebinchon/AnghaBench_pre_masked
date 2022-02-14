
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (char*,char const*) ;
 size_t VAR_2 ;
 char** VAR_3 ;
 int FUNC_5 (char*,char*,int*,int*,int*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (int *,char*,int) ;

int FUNC_8 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  VAR_0;

  FUNC_4 ("memcache_delete: key='%s'\n", VAR_5);

  char *VAR_7;
  int VAR_8;

  FUNC_3 (VAR_5, VAR_6, &VAR_7, &VAR_8);

  if (VAR_8 >= 5 && !FUNC_6 (VAR_7, VAR_3[VAR_2], 5)) {
    int VAR_9, VAR_10, VAR_11;
    if (FUNC_5 (VAR_7 + 5, "%d,%d%n", &VAR_9, &VAR_10, &VAR_11) == 2 && !VAR_7[VAR_11 + 5]) {
      if (FUNC_2 (VAR_9, VAR_10)) {
        FUNC_7 (&VAR_4->Out, "DELETED\r\n", 9);
      } else {
        FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
      }
    } else {
      FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    }

    FUNC_0(VAR_1, 0);
  }

  if (VAR_8 >= 5 && !FUNC_6 (VAR_7, "album", 5)) {
    int VAR_12, VAR_13, VAR_14;
    if (FUNC_5 (VAR_7 + 5, "%d,%d%n", &VAR_12, &VAR_13, &VAR_14) == 2 && !VAR_7[VAR_14 + 5]) {
      if (FUNC_1 (VAR_12, VAR_13)) {
        FUNC_7 (&VAR_4->Out, "DELETED\r\n", 9);
      } else {
        FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
      }
    } else {
      FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    }

    FUNC_0(VAR_1, 0);
  }

  FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
  FUNC_0(VAR_1, 0);
}
