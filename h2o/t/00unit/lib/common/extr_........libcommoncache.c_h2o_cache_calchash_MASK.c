
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int h2o_cache_hashcode_t ;



h2o_cache_hashcode_t FUNC_0(const char *VAR_0, size_t VAR_1)
{
    h2o_cache_hashcode_t VAR_2 = 0;
    for (; VAR_1 != 0; --VAR_1)
        VAR_2 = (VAR_2 << 5) - VAR_2 + ((unsigned char *)VAR_0)[VAR_1 - 1];
    return VAR_2;
}
