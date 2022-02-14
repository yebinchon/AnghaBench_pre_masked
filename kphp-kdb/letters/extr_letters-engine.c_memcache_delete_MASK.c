
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (long long) ;
 scalar_t__ FUNC_2 (long long) ;
 int FUNC_3 (char const*,int,char**,int*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (char*,char*,long long*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_7 (int *,char*,int) ;

int FUNC_8 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  VAR_0;

  if (VAR_3 > 1) {
    FUNC_4 (VAR_2, "memcache_delete: key='%s'\n", VAR_5);
  }

  char *VAR_7;
  int VAR_8;

  FUNC_3 (VAR_5, VAR_6, &VAR_7, &VAR_8);

  if (VAR_8 >= 18 && !FUNC_6 (VAR_7, "letters_by_task_id", 18)) {
    long long VAR_9;

    if (FUNC_5 (VAR_7 + 18, "%lld", &VAR_9) == 1 && FUNC_2 (VAR_9)) {
      FUNC_7 (&VAR_4->Out, "DELETED\r\n", 9);
    } else {
      FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    }

    FUNC_0(VAR_1, 0);
  }

  if (VAR_8 >= 6 && !FUNC_6 (VAR_7, "letter", 6)) {
    long long VAR_10;

    if (FUNC_5 (VAR_7 + 6, "%lld", &VAR_10) == 1 && FUNC_1 (VAR_10)) {
      FUNC_7 (&VAR_4->Out, "DELETED\r\n", 9);
    } else {
      FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    }

    FUNC_0(VAR_1, 0);
  }

  FUNC_7 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
  FUNC_0(VAR_1, 0);
}
