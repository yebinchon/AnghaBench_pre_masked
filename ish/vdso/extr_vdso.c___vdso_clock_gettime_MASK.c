
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clockid_t ;



int FUNC_0(clockid_t VAR_0, void *VAR_1) {
    int VAR_2;
    __asm__("int $0x80" : "=a" (VAR_2) :
            "0" (265 ), "b" (VAR_0), "c" (VAR_1));
    return VAR_2;
}
