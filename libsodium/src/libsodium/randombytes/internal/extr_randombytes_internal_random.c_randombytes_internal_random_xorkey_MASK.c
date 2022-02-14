
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* key; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(const unsigned char * const VAR_1)
{
    unsigned char *VAR_2 = VAR_0.key;
    size_t VAR_3;

    for (VAR_3 = (size_t) 0U; VAR_3 < sizeof VAR_0.key; VAR_3++) {
        VAR_2[VAR_3] ^= VAR_1[VAR_3];
    }
}
