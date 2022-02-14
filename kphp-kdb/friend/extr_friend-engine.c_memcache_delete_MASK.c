
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;
typedef int privacy_key_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (char const*,int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (char const*,char*,int*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *,char*,int) ;

int FUNC_10 (struct connection *VAR_4, const char *VAR_5, int VAR_6) {
  int VAR_7, VAR_8 = 0;
  privacy_key_t VAR_9;

  if (VAR_3 > 0) {
    FUNC_6 (VAR_2, "delete \"%s\"\n", VAR_5);
  }

  int VAR_10 = -1;

  if (VAR_0 == 2 || VAR_1) {
    FUNC_9 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
    return 0;
  }

  switch (*VAR_5) {
  case 'u':
    if (FUNC_8 (VAR_5, "user%d ", &VAR_7) == 1) {
      VAR_10 = FUNC_5 (VAR_7);
    }
    break;
  case 'f':
    if (FUNC_8 (VAR_5, "friend_cat%d_%d ", &VAR_7, &VAR_8) == 2) {
      VAR_10 = FUNC_2 (VAR_7, VAR_8);
    }
    if (FUNC_8 (VAR_5, "friendreq%d_%d ", &VAR_7, &VAR_8) == 2) {
      VAR_10 = FUNC_3 (VAR_7, VAR_8);
    }
    if (FUNC_8 (VAR_5, "friend%d_%d ", &VAR_7, &VAR_8) == 2) {
      VAR_10 = FUNC_1 (VAR_7, VAR_8);
    }
    break;
  case 'p':
    if (FUNC_8 (VAR_5, "privacy%d_%n", &VAR_7, &VAR_8) >= 1 && FUNC_7 (VAR_5+VAR_8, &VAR_9, 1) > 0) {
      VAR_10 = FUNC_4 (VAR_7, VAR_9);
    }
    break;
  case 'r':
    if (FUNC_8 (VAR_5, "requests%d ", &VAR_7) == 1) {
      VAR_10 = FUNC_0 (VAR_7);
    }
    break;
  }

  if (VAR_10 > 0) {
    FUNC_9 (&VAR_4->Out, "DELETED\r\n", 9);
  } else {
    FUNC_9 (&VAR_4->Out, "NOT_FOUND\r\n", 11);
  }

  return 0;
}
