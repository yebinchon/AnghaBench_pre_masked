
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmd_tomorrow ;
typedef int tmd_today ;
typedef int time_t ;
struct tm {int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_yday; scalar_t__ tm_mon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct tm*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct tm*,int ,int) ;
 int FUNC_3 (struct tm*) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double,int) ;

void
FUNC_6(int VAR_6, double VAR_7, double *VAR_8, double *VAR_9)
{
 time_t VAR_10;
 struct tm VAR_11, VAR_12, VAR_13;
 double VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;
 double *VAR_23, *VAR_24, VAR_25;

 VAR_23 = VAR_9;
 VAR_24 = VAR_8;





 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.tm_year = VAR_6 - 1900;
 VAR_12.tm_mon = 0;
 VAR_12.tm_mday = -1;
 VAR_12.tm_hour = 23;
 VAR_12.tm_min = 59;
 VAR_12.tm_sec = 59;
 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.tm_year = VAR_6 - 1900;
 VAR_13.tm_mon = 0;
 VAR_13.tm_mday = 0;
 VAR_13.tm_hour = 0;
 VAR_13.tm_min = 0;
 VAR_13.tm_sec = 1;

 VAR_10 = FUNC_3(&VAR_12);
 FUNC_0(&VAR_10, &VAR_11);
 VAR_20 = 0;
 for (VAR_18 = VAR_2; VAR_18 < VAR_11.tm_year; ++VAR_18)
  VAR_20 += FUNC_1(1900 + VAR_18) ? VAR_0 : VAR_1;
 VAR_14 = (VAR_11.tm_yday + 1) + ((VAR_11.tm_hour +
     (VAR_11.tm_min / VAR_5) + (VAR_11.tm_sec / VAR_4)) /
     VAR_3);
 VAR_14 += VAR_20;

 VAR_10 = FUNC_3(&VAR_13);
 FUNC_0(&VAR_10, &VAR_11);
 VAR_20 = 0;
 for (VAR_18 = VAR_2; VAR_18 < VAR_11.tm_year; ++VAR_18)
  VAR_20 += FUNC_1(1900 + VAR_18) ? VAR_0 : VAR_1;
 VAR_15 = (VAR_11.tm_yday + 1) + ((VAR_11.tm_hour +
     (VAR_11.tm_min / VAR_5) + (VAR_11.tm_sec / VAR_4)) /
     VAR_3);
 VAR_15 += VAR_20;

 VAR_16 = FUNC_4(VAR_14);
 VAR_17 = FUNC_4(VAR_15);
 VAR_21 = VAR_16 > VAR_17 ? -1 : +1;

 VAR_20 = 1 + (FUNC_1(VAR_6) ? VAR_0 : VAR_1);
 for (VAR_19 = 0; VAR_19 <= VAR_20; VAR_19++) {
  VAR_16 = FUNC_4(VAR_14);
  VAR_17 = FUNC_4(VAR_15);
  VAR_22 = VAR_16 > VAR_17 ? -1 : +1;
  if (VAR_21 != VAR_22) {
   VAR_25 = FUNC_5(VAR_14 - 1, VAR_21) +
        VAR_7 / VAR_3;
   if (VAR_21 == -1 && VAR_22 == +1) {
    *VAR_23 = VAR_19 - 1 + VAR_25;
    VAR_23++;
   } else if (VAR_21 == +1 && VAR_22 == -1) {
    *VAR_24 = VAR_19 - 1 + VAR_25;
    VAR_24++;
   }
  }
  VAR_21 = VAR_22;
  VAR_14++;
  VAR_15++;
 }
 *VAR_24 = -1;
 *VAR_23 = -1;
}
