
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char const) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char const*,int *) ;
 int FUNC_7 (char*,char*,int) ;

const char* FUNC_8(const char *VAR_1)
{
 static char VAR_2[4096];

 const char *VAR_3;
 git_buf VAR_4 = VAR_0;
 git_buf VAR_5 = VAR_0;

 FUNC_1(FUNC_6(&VAR_4, VAR_1, ((void*)0)));
 FUNC_1(FUNC_5(&VAR_5, "file://"));
 VAR_3 = FUNC_2(&VAR_4);




 while (*VAR_3) {
  if (*VAR_3 == ' ')
   FUNC_1(FUNC_5(&VAR_5, "%20"));
  else
   FUNC_1(FUNC_4(&VAR_5, *VAR_3));

  VAR_3++;
 }

 FUNC_0(VAR_5.size < 4096);

 FUNC_7(VAR_2, FUNC_2(&VAR_5), 4096);
 FUNC_3(&VAR_5);
 FUNC_3(&VAR_4);
 return VAR_2;
}
