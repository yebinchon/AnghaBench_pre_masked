
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * base; } ;
struct TYPE_3__ {TYPE_2__ pubkey; } ;
struct st_x9_62_keyex_context_t {int bn_ctx; TYPE_1__ super; int privkey; } ;
typedef int EC_POINT ;
typedef int EC_GROUP ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_2__ FUNC_2 (int const*,int const*,int ) ;

__attribute__((used)) static int FUNC_3(struct st_x9_62_keyex_context_t *VAR_1)
{
    const EC_GROUP *VAR_2 = FUNC_0(VAR_1->privkey);
    const EC_POINT *VAR_3 = FUNC_1(VAR_1->privkey);
    if ((VAR_1->super.pubkey = FUNC_2(VAR_2, VAR_3, VAR_1->bn_ctx)).base == ((void*)0))
        return VAR_0;
    return 0;
}
