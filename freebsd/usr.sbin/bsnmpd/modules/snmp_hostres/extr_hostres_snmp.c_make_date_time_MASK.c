
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int ;
typedef char u_char ;
struct tm {int tm_year; char tm_mon; char tm_mday; char tm_hour; char tm_min; char tm_sec; scalar_t__ tm_gmtoff; } ;


 int FUNC_0 (scalar_t__) ;

int
FUNC_1(u_char *VAR_0, const struct tm *VAR_1, u_int VAR_2)
{

 VAR_0[0] = (u_char)((VAR_1->tm_year + 1900) >> 8);
 VAR_0[1] = (u_char)(VAR_1->tm_year + 1900);
 VAR_0[2] = VAR_1->tm_mon + 1;
 VAR_0[3] = VAR_1->tm_mday;
 VAR_0[4] = VAR_1->tm_hour;
 VAR_0[5] = VAR_1->tm_min;
 VAR_0[6] = VAR_1->tm_sec;
 VAR_0[7] = VAR_2;
 if (VAR_1->tm_gmtoff < 0)
  VAR_0[8] = '-';
 else
  VAR_0[8] = '+';

 VAR_0[9] = (u_char)(FUNC_0(VAR_1->tm_gmtoff) / 3600);
 VAR_0[10] = (u_char)((FUNC_0(VAR_1->tm_gmtoff) % 3600) / 60);

 return (11);
}
