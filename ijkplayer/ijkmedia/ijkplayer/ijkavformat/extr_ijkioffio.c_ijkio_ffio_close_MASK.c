
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int inner; } ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ IjkURLContext ;
typedef TYPE_2__ IjkIOFFioContext ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(IjkURLContext *VAR_0) {
    if (!VAR_0)
        return -1;

    IjkIOFFioContext *VAR_1= VAR_0->priv_data;

    if (!VAR_1 || !VAR_1->inner)
        return -1;

    return FUNC_0(VAR_1->inner);
}
