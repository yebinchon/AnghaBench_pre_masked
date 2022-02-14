
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct tm {scalar_t__ tm_year; size_t tm_mon; scalar_t__ tm_mday; size_t tm_wday; unsigned int tm_sec; int tm_min; int tm_hour; } ;
struct strbuf {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (unsigned int,struct strbuf*) ;
 int FUNC_1 (struct strbuf*,char*,unsigned int,...) ;
 int FUNC_2 (struct strbuf*) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_2, timestamp_t VAR_3, struct tm *VAR_4, int VAR_5, struct tm *VAR_6, int VAR_7, int VAR_8)
{
 struct {
  unsigned int year:1,
    date:1,
    wday:1,
    time:1,
    seconds:1,
    tz:1;
 } VAR_9 = { 0 };

 VAR_9.tz = VAR_8 || VAR_5 == VAR_7;
 VAR_9.year = VAR_4->tm_year == VAR_6->tm_year;
 if (VAR_9.year) {
  if (VAR_4->tm_mon == VAR_6->tm_mon) {
   if (VAR_4->tm_mday > VAR_6->tm_mday) {

   } else if (VAR_4->tm_mday == VAR_6->tm_mday) {
    VAR_9.date = VAR_9.wday = 1;
   } else if (VAR_4->tm_mday + 5 > VAR_6->tm_mday) {

    VAR_9.date = 1;
   }
  }
 }


 if (VAR_9.wday) {
  FUNC_0(VAR_3, VAR_2);
  return;
 }
 if (VAR_6->tm_year) {
  VAR_9.seconds = 1;
  VAR_9.tz |= !VAR_9.date;
  VAR_9.wday = VAR_9.time = !VAR_9.year;
 }

 if (!VAR_9.wday)
  FUNC_1(VAR_2, "%.3s ", VAR_1[VAR_4->tm_wday]);
 if (!VAR_9.date)
  FUNC_1(VAR_2, "%.3s %d ", VAR_0[VAR_4->tm_mon], VAR_4->tm_mday);


 if (!VAR_9.time) {
  FUNC_1(VAR_2, "%02d:%02d", VAR_4->tm_hour, VAR_4->tm_min);
  if (!VAR_9.seconds)
   FUNC_1(VAR_2, ":%02d", VAR_4->tm_sec);
 } else
  FUNC_2(VAR_2);

 if (!VAR_9.year)
  FUNC_1(VAR_2, " %d", VAR_4->tm_year + 1900);

 if (!VAR_9.tz)
  FUNC_1(VAR_2, " %+05d", VAR_5);
}
