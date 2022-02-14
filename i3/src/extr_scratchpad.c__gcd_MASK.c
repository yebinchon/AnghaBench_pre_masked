
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(const int VAR_0, const int VAR_1) {
    if (VAR_1 == 0)
        return VAR_0;
    return FUNC_0(VAR_1, (VAR_0 % VAR_1));
}
