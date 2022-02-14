
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_sec; int tm_min; int tm_hour; int tm_mday; } ;


 int FUNC_0 (char const*,char*,int*,int *,int *,int *,int *,int *,int*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_0, const char *VAR_1, struct tm *VAR_2) {
  if (FUNC_1(VAR_1, "%Y-%m-%dT%H:%M:%SZ"))
    return ((void*)0);

  int VAR_3, VAR_4;
  VAR_3 = FUNC_0(VAR_0, "%d-%d-%dT%d:%d:%d%n",
                    &VAR_2->tm_year, &VAR_2->tm_mon, &VAR_2->tm_mday,
                    &VAR_2->tm_hour, &VAR_2->tm_min, &VAR_2->tm_sec,
                    &VAR_4 );
  if (VAR_3 == 6 && VAR_0[VAR_4] == 'Z') {
    VAR_2->tm_year -= 1900;
    VAR_2->tm_mon--;
    return (char*)VAR_0 + VAR_4 + 1;
  }
  return ((void*)0);
}
