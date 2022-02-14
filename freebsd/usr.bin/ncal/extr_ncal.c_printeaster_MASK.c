
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tm ;
struct tm {int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct TYPE_5__ {int d; scalar_t__ m; scalar_t__ y; } ;
typedef TYPE_1__ date ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (struct tm*,int ,int) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int,char*,struct tm*) ;

__attribute__((used)) static void
FUNC_7(int VAR_2, int VAR_3, int VAR_4)
{
 date VAR_5;
 struct tm VAR_6;
 char VAR_7[VAR_1];
 static int VAR_8 = -1;

 if (VAR_8 < 0)
  VAR_8 = (*FUNC_4(VAR_0) == 'd');

 if (VAR_2 < 1583)
  VAR_4 = 1;

 if (VAR_4)
  if (VAR_3)
   FUNC_2(VAR_2, &VAR_5);
  else
   FUNC_1(VAR_2, &VAR_5);
 else
  FUNC_0(VAR_2, &VAR_5);

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.tm_year = VAR_5.y - 1900;
 VAR_6.tm_mon = VAR_5.m - 1;
 VAR_6.tm_mday = VAR_5.d;
 FUNC_6(VAR_7, sizeof(VAR_7), VAR_8 ? "%e %B %Y" : "%B %e %Y", &VAR_6);
 FUNC_5("%s\n", VAR_7);
}
