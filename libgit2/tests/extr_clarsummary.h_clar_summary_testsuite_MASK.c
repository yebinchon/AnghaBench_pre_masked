
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int dummy; } ;
struct clar_summary {int fp; } ;
typedef int iso_dt ;


 int FUNC_0 (int ,char*,int,char const*,char const*,char*,double,int,int,int) ;
 struct tm* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,char*,struct tm*) ;

int FUNC_3(struct clar_summary *VAR_0,
    int VAR_1, const char *VAR_2, const char *VAR_3, time_t VAR_4,
    double VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct tm *VAR_9 = FUNC_1(&VAR_4);
 char VAR_10[20];

 if (FUNC_2(VAR_10, sizeof(VAR_10), "%Y-%m-%dT%H:%M:%S", VAR_9) == 0)
  return -1;

 return FUNC_0(VAR_0->fp, "\t<testsuite "
         " id=\"%d\""
         " name=\"%s\""
         " package=\"%s\""
         " hostname=\"localhost\""
         " timestamp=\"%s\""
         " time=\"%.2f\""
         " tests=\"%d\""
         " failures=\"%d\""
         " errors=\"%d\">\n",
         VAR_1, VAR_2, VAR_3, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8);
}
