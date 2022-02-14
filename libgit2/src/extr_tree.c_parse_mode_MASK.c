
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (scalar_t__*,char const*,size_t,char const**,int) ;

__attribute__((used)) static int FUNC_2(uint16_t *VAR_1, const char *VAR_2, size_t VAR_3, const char **VAR_4)
{
 int32_t VAR_5;
 int VAR_6;

 if (!VAR_3 || FUNC_0(*VAR_2))
  return -1;

 if ((VAR_6 = FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4, 8)) < 0)
  return VAR_6;

 if (VAR_5 < 0 || VAR_5 > VAR_0)
  return -1;

 *VAR_1 = VAR_5;

 return 0;
}
