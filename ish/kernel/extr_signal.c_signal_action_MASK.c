
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sighand {struct sigaction_* action; } ;
struct sigaction_ {scalar_t__ handler; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct sighand *VAR_6, int VAR_7) {
    if (FUNC_0(VAR_7)) {
        struct sigaction_ *VAR_8 = &VAR_6->action[VAR_7];
        if (VAR_8->handler == VAR_5)
            return VAR_1;
        if (VAR_8->handler != VAR_4)
            return VAR_0;
    }

    switch (VAR_7) {
        case 129: case 135: case 136:
        case 134: case 128:
            return VAR_1;

        case 133: case 132: case 131: case 130:
            return VAR_3;

        default:
            return VAR_2;
    }
}
