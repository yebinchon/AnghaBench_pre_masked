
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tm* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2 (int VAR_3) {
  if (!VAR_1) {
    long VAR_4 = VAR_3;
    if (VAR_0) {
      VAR_4 += FUNC_1 (VAR_2);
    }

    struct tm *VAR_5 = FUNC_0 ((time_t *)&VAR_4);
    return VAR_5->tm_year + 1900;
  } else {
    return VAR_3 / 10000;
  }
}
