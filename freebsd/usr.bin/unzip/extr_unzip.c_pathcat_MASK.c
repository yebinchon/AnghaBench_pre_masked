
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_2, const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_5 = VAR_2 ? FUNC_3(VAR_2) + 1 : 0;
 VAR_6 = FUNC_3(VAR_3) + 1;
 if ((VAR_4 = FUNC_1(VAR_5 + VAR_6)) == ((void*)0)) {
  VAR_1 = VAR_0;
  FUNC_0("malloc()");
 }
 if (VAR_2) {
  FUNC_2(VAR_4, VAR_2, VAR_5);
  VAR_4[VAR_5 - 1] = '/';
 }
 FUNC_2(VAR_4 + VAR_5, VAR_3, VAR_6);

 return (VAR_4);
}
