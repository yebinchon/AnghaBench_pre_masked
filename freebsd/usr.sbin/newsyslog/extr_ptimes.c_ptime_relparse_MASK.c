
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct tm {int tm_hour; int tm_min; int tm_sec; int tm_mon; int tm_year; int tm_mday; } ;
struct ptime_data {int parseopts; scalar_t__ tsecs; int tmspec; struct tm tm; struct tm basetm; scalar_t__ basesecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int,int,int,int,int,...) ;
 struct tm* FUNC_2 (scalar_t__*) ;
 void* FUNC_3 (struct tm*) ;
 int FUNC_4 (struct ptime_data*,char const*) ;
 int FUNC_5 (struct ptime_data*,char const*) ;
 int FUNC_6 (struct ptime_data*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_7(struct ptime_data *VAR_6, int VAR_7, time_t VAR_8,
    const char *VAR_9)
{
 int VAR_10, VAR_11;
 struct tm VAR_12;

 VAR_6->parseopts = VAR_7;
 VAR_6->basesecs = VAR_8;
 VAR_6->basetm = *(FUNC_2(&VAR_6->basesecs));
 VAR_6->tm = VAR_6->basetm;
 VAR_6->tm.tm_hour = VAR_6->tm.tm_min = VAR_6->tm.tm_sec = 0;






 if (VAR_7 & VAR_0)
  VAR_11 = FUNC_5(VAR_6, VAR_9);
 else
  VAR_11 = FUNC_4(VAR_6, VAR_9);
 if (VAR_11 < 0) {
  VAR_6->tsecs = (time_t)VAR_11;
  return (VAR_11);
 }
 VAR_10 = FUNC_0(VAR_6->tm.tm_mon, VAR_6->tm.tm_year);
 if ((VAR_7 & VAR_1) &&
     (VAR_6->tmspec & VAR_2) &&
     (VAR_6->tm.tm_mday> VAR_10)) {





  if (VAR_5 && VAR_3 > 1)
   FUNC_1(VAR_4,
       "\t-- dom fixed: %4d/%02d/%02d %02d:%02d (%02d)",
       VAR_6->tm.tm_year, VAR_6->tm.tm_mon,
       VAR_6->tm.tm_mday, VAR_6->tm.tm_hour,
       VAR_6->tm.tm_min, VAR_10);
  VAR_12 = VAR_6->tm;
  VAR_6->tsecs = FUNC_3(&VAR_12);
  if (VAR_6->tsecs > (time_t)-1)
   FUNC_6(VAR_6);
  if (VAR_5 && VAR_3 > 1)
   FUNC_1(VAR_4,
       " to: %4d/%02d/%02d %02d:%02d\n",
       VAR_6->tm.tm_year, VAR_6->tm.tm_mon,
       VAR_6->tm.tm_mday, VAR_6->tm.tm_hour,
       VAR_6->tm.tm_min);
 }






 VAR_6->tsecs = FUNC_3(&VAR_6->tm);
 if (VAR_6->tsecs == (time_t)-1) {
  VAR_6->tsecs = (time_t)-2;
  return (-2);
 }

 return (0);
}
