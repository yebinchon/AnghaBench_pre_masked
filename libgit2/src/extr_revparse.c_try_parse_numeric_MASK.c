
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__*,char const*,int ,char const**,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(int *VAR_0, const char *VAR_1)
{
 int32_t VAR_2;
 const char *VAR_3;

 if (FUNC_0(&VAR_2, VAR_1, FUNC_1(VAR_1),
      &VAR_3, 10) < 0)
  return -1;

 if (*VAR_3 != '\0')
  return -1;

 *VAR_0 = (int)VAR_2;
 return 0;
}
