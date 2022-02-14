
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned char* key; } ;
struct TYPE_6__ {size_t block_length; TYPE_1__ _hmac; } ;
typedef TYPE_2__ picohash_ctx_t ;


 int FUNC_0 (TYPE_2__*,unsigned char*,size_t) ;

__attribute__((used)) static inline void FUNC_1(picohash_ctx_t *VAR_0, unsigned char VAR_1)
{
    size_t VAR_2;
    for (VAR_2 = 0; VAR_2 != VAR_0->block_length; ++VAR_2)
        VAR_0->_hmac.key[VAR_2] ^= VAR_1;
    FUNC_0(VAR_0, VAR_0->_hmac.key, VAR_0->block_length);
    for (VAR_2 = 0; VAR_2 != VAR_0->block_length; ++VAR_2)
        VAR_0->_hmac.key[VAR_2] ^= VAR_1;
}
