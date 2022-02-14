
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,int ) ;

__attribute__((used)) static int FUNC_1(const char **VAR_3, const char *VAR_4, bool VAR_5)
{
 const char *VAR_6;

 if (!VAR_4) {
  if (VAR_5)
   return -VAR_0;
  return 0;
 }

 *VAR_3 = VAR_6 = FUNC_0(VAR_4, VAR_2);
 if (!VAR_6)
  return -VAR_1;

 return 0;
}
