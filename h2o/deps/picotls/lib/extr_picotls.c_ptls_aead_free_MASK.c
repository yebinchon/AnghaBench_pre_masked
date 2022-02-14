
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* algo; int static_iv; int (* dispose_crypto ) (TYPE_2__*) ;} ;
typedef TYPE_2__ ptls_aead_context_t ;
struct TYPE_6__ {int iv_size; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(ptls_aead_context_t *VAR_0)
{
    VAR_0->dispose_crypto(VAR_0);
    FUNC_1(VAR_0->static_iv, VAR_0->algo->iv_size);
    FUNC_0(VAR_0);
}
