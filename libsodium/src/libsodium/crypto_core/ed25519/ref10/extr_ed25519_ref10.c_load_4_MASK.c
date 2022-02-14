
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0(const unsigned char *VAR_0)
{
    uint64_t VAR_1;

    VAR_1 = (uint64_t) VAR_0[0];
    VAR_1 |= ((uint64_t) VAR_0[1]) << 8;
    VAR_1 |= ((uint64_t) VAR_0[2]) << 16;
    VAR_1 |= ((uint64_t) VAR_0[3]) << 24;

    return VAR_1;
}
