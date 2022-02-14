
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_wday; int tm_yday; } ;
typedef int jv ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tm*,int ,int) ;

__attribute__((used)) static int FUNC_3(jv VAR_0, struct tm *VAR_1) {
  FUNC_2(VAR_1, 0, sizeof(*VAR_1));
  FUNC_0(VAR_1->tm_year, VAR_0, 0);
  VAR_1->tm_year -= 1900;
  FUNC_0(VAR_1->tm_mon, VAR_0, 1);
  FUNC_0(VAR_1->tm_mday, VAR_0, 2);
  FUNC_0(VAR_1->tm_hour, VAR_0, 3);
  FUNC_0(VAR_1->tm_min, VAR_0, 4);
  FUNC_0(VAR_1->tm_sec, VAR_0, 5);
  FUNC_0(VAR_1->tm_wday, VAR_0, 6);
  FUNC_0(VAR_1->tm_yday, VAR_0, 7);
  FUNC_1(VAR_0);
  return 1;
}
