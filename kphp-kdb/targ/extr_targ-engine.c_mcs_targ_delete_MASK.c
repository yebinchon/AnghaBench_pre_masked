
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct connection*) ;
 int FUNC_15 (char const*,char*,int*,...) ;
 int FUNC_16 (int,char*,char const*) ;
 int FUNC_17 (int *,char*,int) ;

int FUNC_18 (struct connection *VAR_0, const char *VAR_1, int VAR_2) {
  int VAR_3 = -1, VAR_4 = 0, VAR_5 = -1, VAR_6 = 0, VAR_7 = 0;

  FUNC_16 (2, "delete \"%s\"\n", VAR_1);
  FUNC_14 (VAR_0);

  switch (*VAR_1) {
  case 'a':
    if (FUNC_15 (VAR_1, "address%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_0 (VAR_3);
    }
    break;
  case 'c':
    if (FUNC_15 (VAR_1, "company%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_13 (VAR_3);
    }
    break;
  case 'e':
    if (FUNC_15 (VAR_1, "education%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_1 (VAR_3);
    }
    break;
  case 'i':
    if (FUNC_15 (VAR_1, "interests%d#%d ", &VAR_3, &VAR_6) >= 1) {
      VAR_7 = FUNC_3 (VAR_3, VAR_6);
    }
    break;
  case 'm':
    if (FUNC_15 (VAR_1, "military%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_5 (VAR_3);
    }
    break;
  case 'p':
    if (FUNC_15 (VAR_1, "proposal%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_8 (VAR_3);
    }
    break;
  case 's':
    if (FUNC_15 (VAR_1, "school%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_9 (VAR_3);
    }
    break;
  case 'u':
    if (FUNC_15 (VAR_1, "user_group%d_%d ", &VAR_3, &VAR_4) == 2) {
      VAR_7 = FUNC_11 (VAR_3, VAR_4);
    } else if (FUNC_15 (VAR_1, "user_langs%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_4 (VAR_3);
    } else if (FUNC_15 (VAR_1, "user_lang%d_%d ", &VAR_3, &VAR_5) == 2) {
      VAR_7 = FUNC_12 (VAR_3, VAR_5);
    } else if (FUNC_15 (VAR_1, "user_groups%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_2 (VAR_3);
    } else if (FUNC_15 (VAR_1, "user_groups_positive%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_7 (VAR_3);
    } else if (FUNC_15 (VAR_1, "user_groups_negative%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_6 (VAR_3);
    } else if (FUNC_15 (VAR_1, "user%d ", &VAR_3) == 1) {
      VAR_7 = FUNC_10 (VAR_3);
    }
    break;
  }

  if (!VAR_7) {
    FUNC_17 (&VAR_0->Out, "NOT_FOUND\r\n", 11);
  } else {
    FUNC_17 (&VAR_0->Out, "DELETED\r\n", 9);
  }
  return 0;
}
