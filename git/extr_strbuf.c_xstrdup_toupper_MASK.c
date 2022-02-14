
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 char FUNC_1 (char const) ;
 char* FUNC_2 (size_t) ;

char *FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 size_t VAR_2, VAR_3;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_2(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_1[VAR_3] = FUNC_1(VAR_0[VAR_3]);
 return VAR_1;
}
