
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 char **VAR_5;
 int VAR_6;

 VAR_3 = FUNC_2(VAR_0);
 VAR_2 = VAR_3;
 VAR_4 = VAR_3;
 VAR_5 = &VAR_2;

 VAR_6 = 0;

 while ((*VAR_5 = FUNC_3(&VAR_4, ",")) != ((void*)0)) {
  if (FUNC_1(VAR_2, VAR_1) == 0) {
   VAR_6 = 1;
   break;
  }
 }

 FUNC_0(VAR_3);

 return VAR_6;
}
