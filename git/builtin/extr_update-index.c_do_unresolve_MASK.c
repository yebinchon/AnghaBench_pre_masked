
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int,char const*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(int VAR_0, const char **VAR_1,
   const char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;




 FUNC_2();

 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  const char *VAR_6 = VAR_1[VAR_4];
  char *VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6);
  VAR_5 |= FUNC_3(VAR_7);
  FUNC_0(VAR_7);
 }
 return VAR_5;
}
