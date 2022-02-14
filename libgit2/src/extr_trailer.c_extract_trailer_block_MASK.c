
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 size_t FUNC_1 (char const*,size_t) ;
 size_t FUNC_2 (char const*,size_t) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;

__attribute__((used)) static char *FUNC_5(const char *VAR_0, size_t* VAR_1)
{
 size_t VAR_2 = FUNC_0(VAR_0);
 size_t VAR_3 = FUNC_1(VAR_0, VAR_2);
 size_t VAR_4 = FUNC_2(VAR_0, VAR_3);

 size_t VAR_5 = VAR_3 - VAR_4;

 char *VAR_6 = FUNC_3(VAR_5 + 1);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_4(VAR_6, VAR_0 + VAR_4, VAR_5);
 VAR_6[VAR_5] = 0;

 *VAR_1 = VAR_5;

 return VAR_6;
}
