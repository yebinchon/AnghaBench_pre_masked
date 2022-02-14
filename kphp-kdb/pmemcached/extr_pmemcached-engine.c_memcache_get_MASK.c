
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct data {int data_len; char* data; int flags; } ;
struct connection {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct data FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct connection*,char const*,int) ;
 int FUNC_5 (struct connection*) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 int FUNC_7 (struct connection*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct connection*,char const*,int ,int) ;
 int FUNC_9 (struct connection*,char const*,char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_10 (struct connection *VAR_9, const char *VAR_10, int VAR_11) {
  if (VAR_8 >= 3) {
    FUNC_3 (VAR_7, "memcache_get: key='%s'\n", VAR_10);
  }
  if (FUNC_6 (VAR_10, VAR_11)) {
    int VAR_12 = FUNC_7 (VAR_9);
    FUNC_8 (VAR_9, VAR_10, VAR_6, VAR_12);
    return 0;
  }
  if (VAR_4) { return 0; }

  VAR_0++;
  if (!VAR_1 && (VAR_10[VAR_11 - 1] == '*' || VAR_10[VAR_11 - 1] == '#')) {
    return FUNC_4 (VAR_9, VAR_10, VAR_11);
  }

  if (FUNC_2 (VAR_10, VAR_11, 1) == -2) {
    FUNC_5 (VAR_9);
    return 0;
  }

  struct data VAR_13 = FUNC_1 (VAR_10, VAR_11);

  if (VAR_13.data_len >= 0) {
    VAR_2++;
    FUNC_9 (VAR_9, VAR_10, VAR_13.data, VAR_13.data_len, VAR_13.flags);
  } else {
    if (VAR_13.data_len == -1 || VAR_13.data_len == -2) {
      if (VAR_5) {
        FUNC_9 (VAR_9, VAR_10, "b:0;", 4, 1);
      }
      VAR_3++;
    } else {
      FUNC_0 (0);
    }
  }

  return 0;
}
