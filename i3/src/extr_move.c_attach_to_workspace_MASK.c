
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ direction_t ;
struct TYPE_9__ {double percent; int focus_head; int nodes_head; struct TYPE_9__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(Con *VAR_5, Con *VAR_6, direction_t VAR_7) {
    FUNC_3(VAR_5);
    Con *VAR_8 = VAR_5->parent;
    VAR_5->parent = VAR_6;

    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
        FUNC_1(&(VAR_6->nodes_head), VAR_5, VAR_3);
    } else {
        FUNC_2(&(VAR_6->nodes_head), VAR_5, VAR_3);
    }
    FUNC_2(&(VAR_6->focus_head), VAR_5, VAR_2);




    VAR_5->percent = 0.0;
    FUNC_4(VAR_6);

    FUNC_4(VAR_8);
    FUNC_0(VAR_8, VAR_4);
}
