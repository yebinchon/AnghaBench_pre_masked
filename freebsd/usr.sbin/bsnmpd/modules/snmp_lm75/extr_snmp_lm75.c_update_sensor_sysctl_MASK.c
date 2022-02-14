
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int,char const*) ;
 int FUNC_1 (int*,size_t,void*,size_t*,int *,int ) ;
 int FUNC_2 (char*,int*,size_t*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_1, size_t *VAR_2, int VAR_3, const char *VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6[5];
 size_t VAR_7;


 FUNC_0(VAR_5, sizeof(VAR_5) - 1, "dev.lm75.%d.%s", VAR_3, VAR_4);
 VAR_7 = sizeof(VAR_6) / sizeof(int);
 if (FUNC_2(VAR_5, VAR_6, &VAR_7) == -1)
  return (-1);

 if (VAR_7 != 4)
  return (-1);


 if (FUNC_1(VAR_6, VAR_7, VAR_1, VAR_2, ((void*)0), 0) == -1)
  return (-1);

 return (0);
}
