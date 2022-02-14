
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int byteCount; } ;
typedef TYPE_1__ _picohash_sha1_ctx_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

inline void FUNC_1(_picohash_sha1_ctx_t *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const uint8_t *VAR_3 = VAR_1;
    for (; VAR_2 != 0; --VAR_2) {
        ++VAR_0->byteCount;
        FUNC_0(VAR_0, *VAR_3++);
    }
}
