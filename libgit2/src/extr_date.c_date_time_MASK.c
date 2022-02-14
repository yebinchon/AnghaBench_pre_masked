
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; scalar_t__ tm_sec; scalar_t__ tm_min; } ;


 int FUNC_0 (struct tm*,struct tm*,int *) ;

__attribute__((used)) static void FUNC_1(struct tm *VAR_0, struct tm *VAR_1, int VAR_2)
{
 if (VAR_0->tm_hour < VAR_2)
  FUNC_0(VAR_0, VAR_1, ((void*)0));
 VAR_0->tm_hour = VAR_2;
 VAR_0->tm_min = 0;
 VAR_0->tm_sec = 0;
}
