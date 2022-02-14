
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int) ;
 char* FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(int **VAR_0, const char *VAR_1,
       unsigned long VAR_2)
{
 const char *VAR_3 = VAR_1 + VAR_2;
 const char *VAR_4;
 int *VAR_5;
 int VAR_6 = 0;

 for (VAR_4 = VAR_1; VAR_4 < VAR_3; VAR_4 = FUNC_1(VAR_4, VAR_3))
  VAR_6++;

 FUNC_0(*VAR_0, VAR_6 + 1);
 VAR_5 = *VAR_0;

 for (VAR_4 = VAR_1; VAR_4 < VAR_3; VAR_4 = FUNC_1(VAR_4, VAR_3))
  *VAR_5++ = VAR_4 - VAR_1;

 *VAR_5 = VAR_2;

 return VAR_6;
}
