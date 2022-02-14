
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ floating; struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;

Con *FUNC_1(Con *VAR_4) {
    FUNC_0(VAR_4 != ((void*)0));
    if (VAR_4->type == VAR_0)
        return VAR_4;

    if (VAR_4->floating >= VAR_3)
        return VAR_4->parent;

    if (VAR_4->type == VAR_2 || VAR_4->type == VAR_1)
        return ((void*)0);

    return FUNC_1(VAR_4->parent);
}
