
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*,size_t,char*) ;

__attribute__((used)) static const char *
FUNC_1(unsigned int VAR_0, char *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;

 switch (VAR_0) {
 case 0:
  return "";
 case 129:
  return "4K";
 case 128:
  return "64K";
 case 130:
  return "2M";
 default:
  if (!VAR_1)
   return "M";

  if (VAR_0 & 130)
   VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, "2M, ");
  if (VAR_0 & 128)
   VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, "64K, ");
  if (VAR_0 & 129)
   VAR_3 += FUNC_0(VAR_1 + VAR_3, VAR_2 - VAR_3, "4K, ");
  VAR_1[VAR_3-2] = '\0';

  return VAR_1;
 }
}
