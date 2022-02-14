
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ difference; } ;
typedef TYPE_1__ doublesorthelper ;



__attribute__((used)) static int FUNC_0(const void * VAR_0, const void * VAR_1) {
        doublesorthelper * VAR_2 = (doublesorthelper * )VAR_0;
        doublesorthelper * VAR_3 = (doublesorthelper * )VAR_1;
        if (VAR_2->difference > VAR_3->difference) {
                return 1;
        } else if (VAR_2->difference == VAR_3->difference) {
                return 0;
        } else {
                return -1;
        }
}
