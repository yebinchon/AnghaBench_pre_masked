
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_open_data {int dummy; } ;
typedef int lbuf ;


 scalar_t__ FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct sa_open_data*) ;
 int FUNC_2 (struct sa_open_data*) ;
 int FUNC_3 (struct sa_open_data*,char*,int ) ;
 struct sa_open_data* FUNC_4 () ;
 int VAR_0 ;
 size_t FUNC_5 (char*) ;

int FUNC_6(int VAR_1, char *VAR_2[])
{
 struct sa_open_data *VAR_3;
 char VAR_4[128];

 VAR_3 = FUNC_4();

 while (FUNC_0(VAR_4, sizeof(VAR_4), VAR_0)) {
  size_t VAR_5 = FUNC_5(VAR_4);
  if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\n')
   VAR_4[--VAR_5] = '\0';
  if (VAR_5 > 0 && VAR_4[VAR_5 - 1] == '\r')
   VAR_4[--VAR_5] = '\0';
  if (VAR_5 == 0)
   continue;
  FUNC_3(VAR_3, VAR_4, 0);
 }

 FUNC_2(VAR_3);

 FUNC_1(VAR_3);

 return 0;
}
