
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int,char const*,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2 = "\nencoding ";
 char *VAR_3, *VAR_4;

 VAR_3 = FUNC_0(VAR_0, VAR_1 ? VAR_1 - VAR_0 : FUNC_2(VAR_0),
       VAR_2, FUNC_2(VAR_2));
 if (!VAR_3)
  return ((void*)0);
 VAR_3 += FUNC_2(VAR_2);
 VAR_4 = FUNC_1(VAR_3, '\n');
 *VAR_4 = '\0';
 return VAR_3;
}
