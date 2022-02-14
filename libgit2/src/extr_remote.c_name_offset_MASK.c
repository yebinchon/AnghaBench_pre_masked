
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char*) ;

__attribute__((used)) static const char *FUNC_3(size_t *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 const char *VAR_3;

 VAR_2 = FUNC_2("remote.");
 VAR_3 = FUNC_1(VAR_1 + VAR_2, '.');

 FUNC_0(VAR_3);

 *VAR_0 = VAR_3 - VAR_1 - VAR_2;
 return VAR_1 + VAR_2;
}
