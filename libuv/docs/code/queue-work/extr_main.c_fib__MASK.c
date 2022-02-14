
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
long FUNC_0(long VAR_0) {
    if (VAR_0 == 0 || VAR_0 == 1)
        return 1;
    else
        return FUNC_0(VAR_0-1) + FUNC_0(VAR_0-2);
}
