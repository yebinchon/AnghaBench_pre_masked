
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ id; } ;
struct TYPE_6__ {TYPE_1__ bar; } ;
typedef TYPE_2__ i3_output ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(i3_output *VAR_2) {
    if (VAR_2 == ((void*)0)) {
        return;
    }
    if (VAR_2->bar.id == VAR_0) {
        return;
    }

    FUNC_0(VAR_2);
    FUNC_1(VAR_1, VAR_2->bar.id);
    VAR_2->bar.id = VAR_0;
}
