
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long num; } ;
struct TYPE_4__ {TYPE_1__ val; int * identifier; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int *) ;

__attribute__((used)) static long FUNC_1(const char *VAR_1) {
    for (int VAR_2 = 0; VAR_2 < 10; VAR_2++) {
        if (VAR_0[VAR_2].identifier == ((void*)0))
            break;
        if (FUNC_0(VAR_1, VAR_0[VAR_2].identifier) == 0)
            return VAR_0[VAR_2].val.num;
    }
    return 0;
}
