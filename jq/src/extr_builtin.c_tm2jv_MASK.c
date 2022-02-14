
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_yday; scalar_t__ tm_wday; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef int jv ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static jv FUNC_2(struct tm *VAR_0) {
  return FUNC_0(FUNC_1(VAR_0->tm_year + 1900),
                  FUNC_1(VAR_0->tm_mon),
                  FUNC_1(VAR_0->tm_mday),
                  FUNC_1(VAR_0->tm_hour),
                  FUNC_1(VAR_0->tm_min),
                  FUNC_1(VAR_0->tm_sec),
                  FUNC_1(VAR_0->tm_wday),
                  FUNC_1(VAR_0->tm_yday));
}
