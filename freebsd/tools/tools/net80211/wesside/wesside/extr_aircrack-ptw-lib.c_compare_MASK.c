
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ votes; } ;
typedef TYPE_1__ PTW_tableentry ;



__attribute__((used)) static int FUNC_0(const void * VAR_0, const void * VAR_1) {
        PTW_tableentry * VAR_2 = (PTW_tableentry * )VAR_0;
        PTW_tableentry * VAR_3 = (PTW_tableentry * )VAR_1;
        if (VAR_2->votes > VAR_3->votes) {
                return -1;
        } else if (VAR_2->votes == VAR_3->votes) {
                return 0;
        } else {
                return 1;
        }
}
