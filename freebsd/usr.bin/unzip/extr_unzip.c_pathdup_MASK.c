
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 size_t FUNC_3 (char const*) ;
 char FUNC_4 (unsigned char) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_3)
{
 char *VAR_4;
 size_t VAR_5, VAR_6;

 VAR_6 = FUNC_3(VAR_3);
 while (VAR_6 && VAR_3[VAR_6 - 1] == '/')
  VAR_6--;
 if ((VAR_4 = FUNC_1(VAR_6 + 1)) == ((void*)0)) {
  VAR_2 = VAR_0;
  FUNC_0("malloc()");
 }
 if (VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
   VAR_4[VAR_5] = FUNC_4((unsigned char)VAR_3[VAR_5]);
 } else {
  FUNC_2(VAR_4, VAR_3, VAR_6);
 }
 VAR_4[VAR_6] = '\0';

 return (VAR_4);
}
