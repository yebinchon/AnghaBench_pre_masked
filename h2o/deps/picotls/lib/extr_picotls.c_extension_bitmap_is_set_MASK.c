
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct st_ptls_extension_bitmap_t {int* bits; } ;



__attribute__((used)) static inline int FUNC_0(struct st_ptls_extension_bitmap_t *VAR_0, uint16_t VAR_1)
{
    if (VAR_1 < sizeof(VAR_0->bits) * 8)
        return (VAR_0->bits[VAR_1 / 8] & (1 << (VAR_1 % 8))) != 0;
    return 0;
}
