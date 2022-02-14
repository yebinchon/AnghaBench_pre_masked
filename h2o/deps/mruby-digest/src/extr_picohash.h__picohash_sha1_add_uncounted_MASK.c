
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {size_t bufferOffset; scalar_t__ buffer; } ;
typedef TYPE_1__ _picohash_sha1_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(_picohash_sha1_ctx_t *VAR_1, uint8_t VAR_2)
{
    uint8_t *const VAR_3 = (uint8_t *)VAR_1->buffer;



    VAR_3[VAR_1->bufferOffset ^ 3] = VAR_2;

    VAR_1->bufferOffset++;
    if (VAR_1->bufferOffset == VAR_0) {
        FUNC_0(VAR_1);
        VAR_1->bufferOffset = 0;
    }
}
