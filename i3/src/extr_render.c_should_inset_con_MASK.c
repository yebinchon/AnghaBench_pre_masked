
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ layout; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

bool FUNC_1(Con *VAR_4, int VAR_5) {

    if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1)
        return 0;

    if (FUNC_0(VAR_4))
        return 1;

    return (VAR_4->layout == VAR_2 || VAR_4->layout == VAR_3) && VAR_5 > 0;
}
