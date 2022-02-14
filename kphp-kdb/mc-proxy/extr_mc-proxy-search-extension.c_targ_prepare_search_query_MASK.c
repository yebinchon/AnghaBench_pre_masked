
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int*) ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2 (const char *VAR_3, int VAR_4) {
  int VAR_5 = -1, VAR_6 = -1;
  VAR_2 = 1;
  if (!FUNC_1 (VAR_3, "search(", 7)) {
    VAR_1 = 1;
    VAR_5 = 7;
  } else if (FUNC_0(VAR_3, "target%*u_%*d%n(", &VAR_5) >= 0 && VAR_5 >= 7 && VAR_3[VAR_5] == '(') {
    VAR_5++;
  } else if (FUNC_0(VAR_3, "prices%*u%n(", &VAR_5) >= 0 && VAR_5 >= 7 && VAR_3[VAR_5] == '(') {
    VAR_5++;
  } else if (!FUNC_1 (VAR_3, "ad_", 3)) {
    switch (VAR_3[3]) {
    case 'c':
      if (VAR_3[4] == 'l') {
        FUNC_0 (VAR_3, "ad_clicks%*u%n", &VAR_6);
      } else if (VAR_4 >= 7 && VAR_3[6] == 's') {
        FUNC_0 (VAR_3, "ad_ctrsump%*u%n", &VAR_6);
        VAR_0 = 13;
      } else {
        FUNC_0 (VAR_3, "ad_ctr%*u%n", &VAR_6);
        VAR_0 = 4;
      }
      break;
    case 'd':
      FUNC_0 (VAR_3, "ad_disable%*u%n", &VAR_6);
      break;
    case 'e':
      FUNC_0 (VAR_3, "ad_enable%*u%n", &VAR_6);
      if (VAR_6 > 0 && VAR_3[VAR_6] == '_') {
        VAR_6 = -1;
        FUNC_0 (VAR_3, "ad_enable%*u_%*d%n", &VAR_6);
      }
      break;
    case 'l':
      FUNC_0 (VAR_3, "ad_limited_views%*u,%*u%n", &VAR_6);
      break;
    case 'm':
      FUNC_0 (VAR_3, "ad_money%*u%n", &VAR_6);
      break;
    case 's':
      if (!FUNC_1 (VAR_3, "ad_sump", 7)) {
        FUNC_0 (VAR_3, "ad_sump%*u%n", &VAR_6);
        VAR_0 = 9;
      } else if (!FUNC_1 (VAR_3, "ad_setctrsump", 13)) {
        FUNC_0 (VAR_3, "ad_setctrsump%*u:%*d,%*d,%*d,%*d,%*d%n", &VAR_6);
      } else if (!FUNC_1 (VAR_3, "ad_setsump", 10)) {
        FUNC_0 (VAR_3, "ad_setsump%*u:%*d,%*d,%*d%n", &VAR_6);
      } else if (!FUNC_1 (VAR_3, "ad_setctr", 9)) {
        FUNC_0 (VAR_3, "ad_setctr%*u:%*d,%*d%n", &VAR_6);
      } else if (!FUNC_1 (VAR_3, "ad_setaud", 9)) {
        FUNC_0 (VAR_3, "ad_setaud%*u:%*d%n", &VAR_6);
      } else if (!FUNC_1 (VAR_3, "ad_sites", 8)) {
        FUNC_0 (VAR_3, "ad_sites%*u,%*u%n", &VAR_6);
      }
      break;
    case 'v':
      FUNC_0 (VAR_3, "ad_views%*u%n", &VAR_6);
      break;
    }
    if (VAR_6 <= 0 || (VAR_3[VAR_6] && VAR_3[VAR_6] != '#')) {
      return -1;
    }
    VAR_5 = 3;
  } else if (!FUNC_1 (VAR_3, "deletegroup", 11)) {
    FUNC_0 (VAR_3, "deletegroup%*u%n", &VAR_6);
    VAR_5 = 3;
  } else {
    return -1;
  }

  if (VAR_6 <= 0) {
    VAR_5 = VAR_4 - 2;
    while (VAR_5 > 7 && ((VAR_3[VAR_5] >= '0' && VAR_3[VAR_5] <= '9') || VAR_3[VAR_5] == '%' || VAR_3[VAR_5] == 'i' || VAR_3[VAR_5] == 'I' || VAR_3[VAR_5] == 'r' || VAR_3[VAR_5] == 'R')) {
      VAR_5--;
    }
    if (VAR_3[VAR_5] != '#') {
      VAR_5 = VAR_4 - 1;
    }
  } else {
    VAR_5 = VAR_6;
  }
  VAR_2 = (VAR_6 <= 0);
  return VAR_5;
}
