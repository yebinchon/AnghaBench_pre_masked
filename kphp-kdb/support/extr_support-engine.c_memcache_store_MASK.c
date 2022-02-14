
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int In; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct connection*) ;
 int FUNC_1 (int ,int) ;
 char* VAR_2 ;
 int FUNC_2 (int,int,int,int,char*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char const*,int,char**,int*) ;
 int FUNC_5 (char*,char const*,int,int) ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int) ;
 int FUNC_8 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_9 (char*,char*,int*,...) ;
 int FUNC_10 (char*,char*,int) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12 (struct connection *VAR_4, int VAR_5, const char *VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10) {
  VAR_0;

  FUNC_5 ("memcache_store: key='%s', key_len=%d, value_len=%d\n", VAR_6, VAR_7, VAR_10);

  if (FUNC_11 (VAR_10 >= VAR_1)) {
    FUNC_1 (VAR_3, -2);
  }

  char *VAR_11;
  int VAR_12;
  FUNC_4 (VAR_6, VAR_7, &VAR_11, &VAR_12);


  if (VAR_12 >= 8 && !FUNC_10 (VAR_11, "question", 8)) {
    int VAR_13;
    if (FUNC_9 (VAR_11 + 8, "%d", &VAR_13) != 1) {
      FUNC_1 (VAR_3, -2);
    }

    if (FUNC_7 (FUNC_0 (VAR_4), VAR_10, VAR_13) < 0) {
      FUNC_1 (VAR_3, -2);
    }
    FUNC_8 (&VAR_4->In, FUNC_6 (FUNC_0 (VAR_4)), VAR_10);

    FUNC_1 (VAR_3, 1);
  }

  if (VAR_12 >= 6 && !FUNC_10 (VAR_11, "answer", 6)) {
    int VAR_14, VAR_15, VAR_16, VAR_17;
    FUNC_8 (&VAR_4->In, VAR_2, VAR_10);

    if (FUNC_9 (VAR_11 + 6, "%d,%d,%d%n", &VAR_14, &VAR_15, &VAR_16, &VAR_17) < 3 || VAR_11[6 + VAR_17]) {
      FUNC_1 (VAR_3, 0);
    }

    int VAR_18 = FUNC_2 (VAR_14, VAR_15, VAR_16, VAR_10, VAR_2);
    FUNC_1 (VAR_3, VAR_18);
  }


  if (VAR_12 >= 4 && !FUNC_10 (VAR_11, "mark", 4)) {
    int VAR_19, VAR_20, VAR_21;
    FUNC_8 (&VAR_4->In, VAR_2, VAR_10);

    if (FUNC_9 (VAR_11 + 4, "%d%n", &VAR_19, &VAR_21) < 1 || VAR_11[4 + VAR_21] || FUNC_9 (VAR_2, "%d%n", &VAR_20, &VAR_21) < 1 || VAR_2[VAR_21]) {
      FUNC_1 (VAR_3, 0);
    }

    int VAR_22 = FUNC_3 (VAR_19, VAR_20);
    FUNC_1 (VAR_3, VAR_22);
  }

  FUNC_1 (VAR_3, -2);
}
