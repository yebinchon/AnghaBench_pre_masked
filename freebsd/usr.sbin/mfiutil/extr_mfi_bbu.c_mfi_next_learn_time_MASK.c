
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int tm ;
typedef scalar_t__ time_t ;
struct tm {int tm_year; } ;


 char* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct tm*,int ,int) ;
 size_t FUNC_2 (char*,size_t,char*,char*) ;
 scalar_t__ FUNC_3 (struct tm*) ;

void
FUNC_4(uint32_t VAR_0, char *VAR_1, size_t VAR_2)
{
 time_t VAR_3;
 struct tm VAR_4;
 size_t VAR_5;

 FUNC_1(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.tm_year = 100;
 VAR_3 = FUNC_3(&VAR_4);
 VAR_3 += (time_t)VAR_0;
 VAR_5 = FUNC_2(VAR_1, VAR_2, "%s", FUNC_0(&VAR_3));
 if (VAR_5 > 0)

  VAR_1[VAR_5 - 1] = '\0';
}
