
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char const*) ;

uint32_t FUNC_1(const char *VAR_0)
{
 uint32_t VAR_1 = 5381;
 int VAR_2;
 FUNC_0(VAR_0);
 while ((VAR_2 = (int)*VAR_0++) != 0)
  VAR_1 = ((VAR_1 << 5) + VAR_1) + VAR_2;
 return VAR_1;
}
