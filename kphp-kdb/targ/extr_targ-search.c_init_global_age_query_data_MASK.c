
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; int tm_mday; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct tm* FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static void FUNC_1 (void) {
  struct tm *VAR_9;
  time_t VAR_10 = VAR_8 + VAR_1 * 60;
  VAR_9 = FUNC_0 (&VAR_10);
  VAR_2 = VAR_9->tm_mday;
  VAR_3 = VAR_9->tm_mon + 1;
  VAR_4 = VAR_9->tm_year + 1900;

  VAR_10 += VAR_0;
  VAR_9 = FUNC_0 (&VAR_10);
  VAR_5 = VAR_9->tm_mday;
  VAR_6 = VAR_9->tm_mon + 1;
  VAR_7 = VAR_9->tm_year + 1900;
}
