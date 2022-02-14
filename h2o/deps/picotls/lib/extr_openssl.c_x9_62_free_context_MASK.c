
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct st_x9_62_keyex_context_t* base; } ;
struct TYPE_4__ {TYPE_1__ pubkey; } ;
struct st_x9_62_keyex_context_t {int * bn_ctx; int * privkey; TYPE_2__ super; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct st_x9_62_keyex_context_t*) ;

__attribute__((used)) static void FUNC_3(struct st_x9_62_keyex_context_t *VAR_0)
{
    FUNC_2(VAR_0->super.pubkey.base);
    if (VAR_0->privkey != ((void*)0))
        FUNC_1(VAR_0->privkey);
    if (VAR_0->bn_ctx != ((void*)0))
        FUNC_0(VAR_0->bn_ctx);
    FUNC_2(VAR_0);
}
