
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int _sha1; void* _final; void* _update; void* _reset; int digest_length; int block_length; } ;
typedef TYPE_1__ picohash_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;

inline void FUNC_1(picohash_ctx_t *VAR_4)
{
    VAR_4->block_length = VAR_0;
    VAR_4->digest_length = VAR_1;
    VAR_4->_reset = (void *)FUNC_0;
    VAR_4->_update = (void *)VAR_3;
    VAR_4->_final = (void *)VAR_2;
    FUNC_0(&VAR_4->_sha1);
}
