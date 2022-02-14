
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
typedef int result ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (char*,int,char*,int) ;

const char *
FUNC_2(const struct timespec *VAR_1)
{
 static char VAR_2[256];
 int VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7 = 1;
 char *VAR_8 = VAR_2;
 char *VAR_9 = &VAR_2[sizeof(VAR_2)];
 int VAR_10;
 struct timespec VAR_11;
 time_t VAR_12;

 FUNC_0(VAR_0, &VAR_11);
 VAR_12 = VAR_1->tv_sec;
 VAR_12 += VAR_1->tv_nsec / 1000 / 1000000;
 VAR_12 -= VAR_11.tv_sec;
 VAR_12 -= VAR_11.tv_nsec / 1000 / 1000000;

 VAR_3 = VAR_12 / 3600 / 24;
 VAR_4 = (VAR_12 / 3600) % 24;
 VAR_5 = (VAR_12 / 60) % 60;
 VAR_6 = VAR_12 % 60;

 if (VAR_3) {
  VAR_7 = 0;
  VAR_10 = FUNC_1(VAR_8, VAR_9 - VAR_8, "%dd", VAR_3);
  if (VAR_10 < 0 || VAR_10 >= VAR_9 - VAR_8)
   return "?";
  VAR_8 += VAR_10;
 }
 if (!VAR_7 || VAR_4) {
  VAR_7 = 0;
  VAR_10 = FUNC_1(VAR_8, VAR_9 - VAR_8, "%dh", VAR_4);
  if (VAR_10 < 0 || VAR_10 >= VAR_9 - VAR_8)
   return "?";
  VAR_8 += VAR_10;
 }
 if (!VAR_7 || VAR_5) {
  VAR_7 = 0;
  VAR_10 = FUNC_1(VAR_8, VAR_9 - VAR_8, "%dm", VAR_5);
  if (VAR_10 < 0 || VAR_10 >= VAR_9 - VAR_8)
   return "?";
  VAR_8 += VAR_10;
 }
 FUNC_1(VAR_8, VAR_9 - VAR_8, "%ds", VAR_6);

 return (VAR_2);
}
