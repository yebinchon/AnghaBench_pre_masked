
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int orientation_t ;
struct TYPE_3__ {int layout; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;







 int VAR_1 ;
 int FUNC_1 (int) ;

orientation_t FUNC_2(Con *VAR_2) {
    switch (VAR_2->layout) {
        case 130:

        case 129:
            return VAR_1;

        case 131:

        case 128:
            return VAR_0;

        case 134:
            FUNC_0("Someone called con_orientation() on a con with L_DEFAULT, this is a bug in the code.\n");
            FUNC_1(0);

        case 133:
        case 132:
            FUNC_0("con_orientation() called on dockarea/output (%d) container %p\n", VAR_2->layout, VAR_2);
            FUNC_1(0);
    }

    FUNC_1(0);
}
