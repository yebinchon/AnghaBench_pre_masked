
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
typedef scalar_t__ git_time_t ;


 scalar_t__ FUNC_0 (struct tm*) ;
 int FUNC_1 (scalar_t__*,struct tm*) ;

__attribute__((used)) static git_time_t FUNC_2(struct tm *VAR_0, struct tm *VAR_1, unsigned long VAR_2)
{
 time_t VAR_3;

 if (VAR_0->tm_mday < 0)
  VAR_0->tm_mday = VAR_1->tm_mday;
 if (VAR_0->tm_mon < 0)
  VAR_0->tm_mon = VAR_1->tm_mon;
 if (VAR_0->tm_year < 0) {
  VAR_0->tm_year = VAR_1->tm_year;
  if (VAR_0->tm_mon > VAR_1->tm_mon)
   VAR_0->tm_year--;
 }

 VAR_3 = FUNC_0(VAR_0) - VAR_2;
 FUNC_1(&VAR_3, VAR_0);
 return VAR_3;
}
