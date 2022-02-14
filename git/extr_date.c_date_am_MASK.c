
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; scalar_t__ tm_sec; scalar_t__ tm_min; } ;



__attribute__((used)) static void FUNC_0(struct tm *VAR_0, struct tm *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = *VAR_2;
 *VAR_2 = 0;

 VAR_3 = VAR_0->tm_hour;
 if (VAR_4) {
  VAR_3 = VAR_4;
  VAR_0->tm_min = 0;
  VAR_0->tm_sec = 0;
 }
 VAR_0->tm_hour = (VAR_3 % 12);
}
