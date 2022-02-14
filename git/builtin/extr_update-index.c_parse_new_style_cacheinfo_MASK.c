
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct object_id*,char const**) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1,
         unsigned int *VAR_2,
         struct object_id *VAR_3,
         const char **VAR_4)
{
 unsigned long VAR_5;
 char *VAR_6;
 const char *VAR_7;

 if (!VAR_1)
  return -1;

 VAR_0 = 0;
 VAR_5 = FUNC_1(VAR_1, &VAR_6, 8);
 if (VAR_0 || VAR_6 == VAR_1 || *VAR_6 != ',' || (unsigned int) VAR_5 != VAR_5)
  return -1;
 *VAR_2 = VAR_5;
 VAR_6++;
 if (FUNC_0(VAR_6, VAR_3, &VAR_7) || *VAR_7 != ',')
  return -1;
 *VAR_4 = VAR_7 + 1;
 return 0;
}
