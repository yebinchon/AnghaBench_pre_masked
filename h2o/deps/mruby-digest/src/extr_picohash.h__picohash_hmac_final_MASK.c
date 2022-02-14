
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int (* hash_final ) (TYPE_2__*,void*) ;int (* hash_reset ) (TYPE_2__*) ;} ;
struct TYPE_10__ {TYPE_1__ _hmac; int digest_length; } ;
typedef TYPE_2__ picohash_ctx_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int ) ;
 int FUNC_3 (TYPE_2__*,unsigned char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,void*) ;

__attribute__((used)) static void FUNC_6(picohash_ctx_t *VAR_1, void *VAR_2)
{
    unsigned char VAR_3[VAR_0];

    VAR_1->_hmac.hash_final(VAR_1, VAR_3);

    VAR_1->_hmac.hash_reset(VAR_1);
    FUNC_0(VAR_1, 0x5c);
    FUNC_2(VAR_1, VAR_3, VAR_1->digest_length);
    FUNC_1(VAR_3, 0, VAR_1->digest_length);

    VAR_1->_hmac.hash_final(VAR_1, VAR_2);
}
