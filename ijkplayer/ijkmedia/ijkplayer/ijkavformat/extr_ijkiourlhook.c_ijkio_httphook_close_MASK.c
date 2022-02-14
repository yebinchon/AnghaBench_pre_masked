
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {struct TYPE_10__* priv_data; TYPE_1__* prot; } ;
struct TYPE_9__ {TYPE_4__* inner; scalar_t__ inner_options; } ;
struct TYPE_8__ {TYPE_3__* priv_data; } ;
struct TYPE_7__ {int (* url_close ) (TYPE_4__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ Context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (TYPE_4__**) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(IjkURLContext *VAR_1)
{
    Context *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 0;
    if (!VAR_2 || !VAR_2->inner || !VAR_2->inner->prot)
        return FUNC_0(VAR_0);

    VAR_3 = VAR_2->inner->prot->url_close(VAR_2->inner);
    if (VAR_2->inner_options) {
        FUNC_1(&VAR_2->inner_options);
    }
    FUNC_2(&VAR_2->inner->priv_data);
    FUNC_2(&VAR_2->inner);

    return VAR_3;
}
