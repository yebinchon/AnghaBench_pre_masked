
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static uint32_t FUNC_0(const char *VAR_0) {
    uint32_t VAR_1 = 5381;
    for (int VAR_2 = 0; VAR_0[VAR_2] != '\0'; VAR_2++) {
        VAR_1 = 33 * VAR_1 ^ VAR_0[VAR_2];
    }
    return VAR_1;
}
