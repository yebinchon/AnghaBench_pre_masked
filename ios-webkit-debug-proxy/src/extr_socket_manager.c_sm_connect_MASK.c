
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 char* FUNC_4 (char const*,size_t) ;
 char* FUNC_5 (char const*,char) ;
 int FUNC_6 (char const*,int *,int ) ;

int FUNC_7(const char *VAR_0) {
  if (FUNC_3(VAR_0, "unix:", 5) == 0) {



    return FUNC_2(VAR_0 + 5);

  } else {
    const char *VAR_1 = FUNC_5(VAR_0, ':');
    int VAR_2 = 0;

    if (VAR_1) {
      VAR_2 = FUNC_6(VAR_1 + 1, ((void*)0), 0);
    }

    if (VAR_2 <= 0) {
      return -1;
    }

    size_t VAR_3 = VAR_1 - VAR_0;
    char *VAR_4 = FUNC_4(VAR_0, VAR_3);

    int VAR_5 = FUNC_1(VAR_4, VAR_2);
    FUNC_0(VAR_4);
    return VAR_5;
  }
}
