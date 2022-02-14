
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ijk_ctx_map; } ;
struct TYPE_8__ {int state; TYPE_1__* prot; } ;
struct TYPE_7__ {int (* url_pause ) (TYPE_2__*) ;} ;
typedef TYPE_2__ IjkURLContext ;
typedef TYPE_3__ IjkIOManagerContext ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(IjkIOManagerContext *VAR_1) {
    IjkURLContext *VAR_2;
    int VAR_3 = FUNC_1(VAR_1->ijk_ctx_map);

    for(int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_2 = FUNC_0(VAR_1->ijk_ctx_map, VAR_4);
        if (VAR_2 == ((void*)0) || VAR_2->prot == ((void*)0))
            break;

        if (VAR_2->prot->url_pause)
            VAR_2->prot->url_pause(VAR_2);
        VAR_2->state = VAR_0;
    }
}
