
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ws_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int,char const*,int,char const*) ;
 scalar_t__ FUNC_1 (char*,char) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 scalar_t__ FUNC_4 (char const*,char*,size_t) ;
 char* FUNC_5 (char const*,char) ;

ws_status FUNC_6(const char *VAR_2, const char *VAR_3,
    char **VAR_4) {
  if (!VAR_4) {
    return VAR_0;
  }
  *VAR_4 = ((void*)0);


  if (!VAR_2) {
    return VAR_0;
  }
  const char *VAR_5 = FUNC_5(VAR_2, '/');
  VAR_5 = (VAR_5 ? VAR_5 + 1 : ((void*)0));
  size_t VAR_6 = (VAR_5 ? (VAR_5 - VAR_2) : 0);



  if (!VAR_3 || FUNC_3(VAR_3, "/devtools/", 10)) {
    return VAR_0;
  }
  const char *VAR_7 = VAR_3 + 10;
  const char *VAR_8 = VAR_7 - 1;
  while (*++VAR_8 == '/') {
  }
  char VAR_9;
  for (VAR_9 = *VAR_8;
       ((VAR_9 >= 'a' && VAR_9 <= 'z') || (VAR_9 >= 'A' && VAR_9 <= 'Z') ||
        (VAR_9 >= '0' && VAR_9 <= '9') || (VAR_9 && FUNC_1("-./_", VAR_9)));
       VAR_9 = *++VAR_8) {
  }
  size_t VAR_10 = VAR_8 - VAR_7;
  if (FUNC_4(VAR_7, "..", VAR_10)) {
    return VAR_0;
  }
  if (!VAR_10 && VAR_5) {
    VAR_7 = VAR_5;
    VAR_10 = FUNC_2(VAR_5);
  }


  if (FUNC_0(VAR_4, "%.*s%.*s", (int)VAR_6, VAR_2, (int)VAR_10, VAR_7) < 0) {
    return VAR_0;
  }
  return VAR_1;
}
