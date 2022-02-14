
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int time_t ;
struct tm {int dummy; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct snmp_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct timeval*,int *) ;
 int * FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (int *,struct tm*,int) ;
 int FUNC_3 (struct snmp_value*,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct snmp_value *VAR_2)
{
 u_char VAR_3[11];
 struct tm VAR_4;
 time_t VAR_5;
 struct timeval VAR_6;
 int VAR_7;

 if (FUNC_0(&VAR_6, ((void*)0)) < 0) {
  FUNC_4(VAR_0, "gettimeofday failed: %m");
  return (VAR_1);
 }

 VAR_5 = VAR_6.tv_sec;

 if (FUNC_1(&VAR_5, &VAR_4) == ((void*)0)) {
  FUNC_4(VAR_0, "localtime_r() failed: %m ");
  return (VAR_1);
 }

 VAR_7 = FUNC_2(VAR_3, &VAR_4,
     VAR_6.tv_usec / 100000);

 return (FUNC_3(VAR_2, VAR_3, VAR_7));
}
