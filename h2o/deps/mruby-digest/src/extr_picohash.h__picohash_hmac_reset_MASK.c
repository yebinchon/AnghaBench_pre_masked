
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* hash_reset ) (TYPE_2__*) ;} ;
struct TYPE_7__ {TYPE_1__ _hmac; } ;
typedef TYPE_2__ picohash_ctx_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_2(picohash_ctx_t *VAR_0)
{
    VAR_0->_hmac.hash_reset(VAR_0);
    FUNC_0(VAR_0, 0x36);
}
