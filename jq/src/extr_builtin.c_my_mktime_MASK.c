
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {scalar_t__ tm_gmtoff; scalar_t__ __tm_gmtoff; } ;


 scalar_t__ FUNC_0 (struct tm*) ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct tm*) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct tm*) ;

__attribute__((used)) static time_t FUNC_6(struct tm *VAR_0) {
  char *VAR_1;

  VAR_1 = (VAR_1 = FUNC_1("TZ")) != ((void*)0) ? FUNC_4(VAR_1) : ((void*)0);
  if (VAR_1 != ((void*)0))
    FUNC_3("TZ", "", 1);
  time_t VAR_2 = FUNC_2(VAR_0);
  if (VAR_1 != ((void*)0))
    FUNC_3("TZ", VAR_1, 1);
  return VAR_2;

}
