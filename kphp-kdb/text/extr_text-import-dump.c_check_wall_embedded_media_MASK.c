
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int*) ;

int FUNC_2 (char *VAR_0, int VAR_1) {
  int VAR_2 = -1;

  switch (VAR_0[2]) {
  case 'a':
    if (VAR_1 >= 10 && !FUNC_0 (VAR_0 + 2, "audio", 5)) {
      if (FUNC_1 (VAR_0, "[[audio%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
      if (FUNC_1 (VAR_0, "[[audio%*d_%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
      break;
    }
    if (VAR_1 >= 13 && !FUNC_0 (VAR_0 + 2, "app_post", 8)) {
      int VAR_3 = -1;
      if (FUNC_1 (VAR_0, "[[app_post%*u|%n", &VAR_2) < 0 || VAR_2 < 0) {
        return 0;
      }
      switch (VAR_0[VAR_2]) {
      case 'a':
        FUNC_1 (VAR_0 + VAR_2, "a_%*u_%*u_%*u|%n", &VAR_3);
        break;
      case 'p':
        FUNC_1 (VAR_0 + VAR_2, "p_%*u_%*u_%*u_%*[0-9a-z]|%n", &VAR_3);
        break;
      }
      if (VAR_3 < 0) {
        return 0;
      }
      VAR_2 += VAR_3;
      if (VAR_0[VAR_2] == ']' && VAR_0[VAR_2+1] == ']') {
        return 5;
      }
      VAR_3 = -1;
      if (FUNC_1 (VAR_0 + VAR_2, "%*[0-9a-z]]]%n", &VAR_3) >= 0 && VAR_3 >= 0) {
        return 5;
      }
    }
    break;
  case 'g':
    if (VAR_1 >= 13 && !FUNC_0 (VAR_0 + 2, "graffiti", 8)) {
      if (FUNC_1 (VAR_0, "[[graffiti%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
    }
    break;
  case 'p':
    if (VAR_1 >= 10 && !FUNC_0 (VAR_0 + 2, "photo", 5)) {
      if (FUNC_1 (VAR_0, "[[photo%*d_%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
      break;
    }
    if (VAR_1 >= 23 && !FUNC_0 (VAR_0 + 2, "posted_photo", 12)) {
      if (FUNC_1 (VAR_0, "[[posted_photo%*u_%*u_%*[0-9a-z]_%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
    }
    break;
  case 'v':
    if (VAR_1 >= 10 && !FUNC_0 (VAR_0 + 2, "video", 5)) {
      if (FUNC_1 (VAR_0, "[[video%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
      if (FUNC_1 (VAR_0, "[[video%*d_%*u]]%n", &VAR_2) >= 0 && VAR_2 >= 0) {
        return 1;
      }
    }
    break;
  }
  return 0;
}
