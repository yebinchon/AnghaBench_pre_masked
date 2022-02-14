
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws_t ;
typedef int ws_status ;


 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (int ,int,int,char const*) ;
 int FUNC_2 (int ,int,char const*,char*) ;
 int FUNC_3 (int ,int,char const*,int*) ;
 int FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char*,int) ;

ws_status FUNC_7(ws_t VAR_0,
    const char *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4, const char *VAR_5, size_t VAR_6,
    bool VAR_7, bool *VAR_8) {
  bool VAR_9 = !FUNC_4(VAR_1, "GET");
  bool VAR_10 = !VAR_9 && !FUNC_4(VAR_1, "HEAD");
  if (VAR_7) {
    if (VAR_9 && !FUNC_6(VAR_2, "/devtools/page/", 15)) {
      return FUNC_0(VAR_0, VAR_2);
    }
  } else {
    if (!VAR_9 && !VAR_10) {
      return FUNC_2(VAR_0, VAR_10, VAR_2, "Method Not Allowed");
    }

    if (!FUNC_5(VAR_2) || !FUNC_4(VAR_2, "/")) {
      return FUNC_1(VAR_0, VAR_10, 0, VAR_4);
    } else if (!FUNC_4(VAR_2, "/json") || !FUNC_4(VAR_2, "/json/list")) {
      return FUNC_1(VAR_0, VAR_10, 1, VAR_4);
    } else if (!FUNC_6(VAR_2, "/devtools/", 10)) {
      return FUNC_3(VAR_0, VAR_10, VAR_2,
          VAR_8);
    }





  }
  return FUNC_2(VAR_0, VAR_10, VAR_2, ((void*)0));
}
