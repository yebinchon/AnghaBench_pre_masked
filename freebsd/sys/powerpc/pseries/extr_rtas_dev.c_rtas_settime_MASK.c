
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct clocktime {int nsec; int sec; int min; int hour; int day; int mon; int year; } ;
typedef int device_t ;
typedef int cell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timespec*,struct clocktime*) ;
 int FUNC_1 (int,int,int,int ,int ,int ,int ,int ,int ,int ,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, struct timespec *VAR_3)
{
 struct clocktime VAR_4;
 cell_t VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2("set-time-of-day");
 if (VAR_5 == -1)
  return (VAR_1);

 FUNC_0(VAR_3, &VAR_4);
 VAR_7 = FUNC_1(VAR_5, 7, 1, VAR_4.year, VAR_4.mon, VAR_4.day, VAR_4.hour,
     VAR_4.min, VAR_4.sec, VAR_4.nsec, &VAR_6);
 if (VAR_7 < 0)
  return (VAR_1);
 if (VAR_6 != 0)
  return (((int)VAR_6 < 0) ? VAR_1 : VAR_0);

 return (0);
}
