
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct clocktime {int year; int mon; int day; int hour; int min; int sec; int nsec; } ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clocktime*,struct timespec*) ;
 int FUNC_1 (int,int ,int,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct timespec *VAR_3) {
 struct clocktime VAR_4;
 cell_t VAR_5[8];
 cell_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2("get-time-of-day");
 if (VAR_6 == -1)
  return (VAR_1);
 VAR_7 = FUNC_1(VAR_6, 0, 8, &VAR_5[0], &VAR_5[1], &VAR_5[2],
     &VAR_5[3], &VAR_5[4], &VAR_5[5], &VAR_5[6], &VAR_5[7]);
 if (VAR_7 < 0)
  return (VAR_1);
 if (VAR_5[0] != 0)
  return ((VAR_5[0] == -1) ? VAR_1 : VAR_0);

 VAR_4.year = VAR_5[1];
 VAR_4.mon = VAR_5[2];
 VAR_4.day = VAR_5[3];
 VAR_4.hour = VAR_5[4];
 VAR_4.min = VAR_5[5];
 VAR_4.sec = VAR_5[6];
 VAR_4.nsec = VAR_5[7];

 return (FUNC_0(&VAR_4, VAR_3));
}
