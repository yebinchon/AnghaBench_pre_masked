
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int const*,size_t) ;

__attribute__((used)) static int
FUNC_5(const u_char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 int VAR_3;

 if ((VAR_2 = FUNC_2(VAR_1 + 4)) == ((void*)0))
  return (-1);
 FUNC_3(VAR_2, "ng_");
 FUNC_4(VAR_2 + 3, VAR_0, VAR_1);
 VAR_2[VAR_1 + 3] = '\0';

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_2);
 return (VAR_3);
}
