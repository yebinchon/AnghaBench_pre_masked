
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* base; } ;
struct TYPE_9__ {TYPE_1__ pubkey; } ;
struct TYPE_10__ {int len; TYPE_4__* base; } ;
struct TYPE_11__ {TYPE_2__ client; TYPE_3__ secret; } ;
typedef TYPE_4__ ptls_esni_secret_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_3(ptls_esni_secret_t **VAR_0, int VAR_1)
{
    FUNC_0(*VAR_0 != ((void*)0));
    if ((*VAR_0)->secret.base != ((void*)0)) {
        FUNC_2((*VAR_0)->secret.base, (*VAR_0)->secret.len);
        FUNC_1((*VAR_0)->secret.base);
    }
    if (!VAR_1)
        FUNC_1((*VAR_0)->client.pubkey.base);
    FUNC_2((*VAR_0), sizeof(**VAR_0));
    FUNC_1(*VAR_0);
    *VAR_0 = ((void*)0);
}
