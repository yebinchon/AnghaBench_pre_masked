
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int height; } ;
struct TYPE_5__ {TYPE_1__ deco_rect; int parent; } ;
typedef TYPE_2__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

double FUNC_2(Con *VAR_1) {
    const int VAR_2 = FUNC_1(VAR_1->parent);

    const int VAR_3 = (FUNC_0(VAR_1->parent) == VAR_0 ? 1 : 1 + VAR_1->deco_rect.height);
    return ((double)VAR_3 / (double)VAR_2);
}
