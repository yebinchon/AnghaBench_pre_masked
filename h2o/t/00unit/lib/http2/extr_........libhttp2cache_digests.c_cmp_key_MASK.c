
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    uint64_t VAR_2 = *(uint64_t *)VAR_0, VAR_3 = *(uint64_t *)VAR_1;

    if (VAR_2 < VAR_3) {
        return -1;
    } else if (VAR_2 > VAR_3) {
        return 1;
    } else {
        return 0;
    }
}
