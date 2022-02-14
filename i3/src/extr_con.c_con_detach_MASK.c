
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; TYPE_1__* parent; } ;
struct TYPE_6__ {int focus_head; int nodes_head; int floating_head; } ;
typedef TYPE_2__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_2(Con *VAR_4) {
    FUNC_1(VAR_4);
    if (VAR_4->type == VAR_0) {
        FUNC_0(&(VAR_4->parent->floating_head), VAR_4, VAR_1);
        FUNC_0(&(VAR_4->parent->focus_head), VAR_4, VAR_2);
    } else {
        FUNC_0(&(VAR_4->parent->nodes_head), VAR_4, VAR_3);
        FUNC_0(&(VAR_4->parent->focus_head), VAR_4, VAR_2);
    }
}
