
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0 (const char *VAR_0)
{
    static unsigned long VAR_1[] = {
    0x49848f1bU, 0xe6255dbaU, 0x36da5bdcU, 0x47bf94e9U,
    0x8cbcce22U, 0x559fc06aU, 0xd268f536U, 0xe10af79aU,
    0xc1af4d69U, 0x1d2917b5U, 0xec4c304dU, 0x9ee5016cU,
    0x69232f74U, 0xfead7bb3U, 0xe9089ab6U, 0xf012f6aeU,
    };

    const char *VAR_2 = VAR_0;
    unsigned int VAR_3 = 0;

    while (*VAR_2) {
    VAR_3 ^= VAR_1[(*VAR_2 + VAR_3) & 0xf];
    VAR_3 = (VAR_3 << 1) | (VAR_3 >> 31);
    VAR_3 &= 0xffffffffU;
    VAR_3 ^= VAR_1[((*VAR_2++ >> 4) + VAR_3) & 0xf];
    VAR_3 = (VAR_3 << 2) | (VAR_3 >> 30);
    VAR_3 &= 0xffffffffU;
    }
    return VAR_3;
}
