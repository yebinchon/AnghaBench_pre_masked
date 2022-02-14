
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint64_t ;
typedef size_t uint32_t ;



uint64_t FUNC_0(uint32_t VAR_0, size_t VAR_1, uint64_t VAR_2)
{
    uint64_t VAR_3 = (uint64_t)1 << VAR_1, VAR_4 = (VAR_2 & ~(VAR_3 - 1)) | VAR_0;

    if (VAR_4 + VAR_3 / 2 <= VAR_2)
        return VAR_4 + VAR_3;
    if (VAR_4 > VAR_2 + VAR_3 / 2 && VAR_4 > VAR_3)
        return VAR_4 - VAR_3;
    return VAR_4;
}
