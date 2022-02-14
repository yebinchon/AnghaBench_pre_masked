
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* hl; int rsize; char* render; } ;
typedef TYPE_1__ erow ;


 scalar_t__ VAR_0 ;

int FUNC_0(erow *VAR_1) {
    if (VAR_1->hl && VAR_1->rsize && VAR_1->hl[VAR_1->rsize-1] == VAR_0 &&
        (VAR_1->rsize < 2 || (VAR_1->render[VAR_1->rsize-2] != '*' ||
                            VAR_1->render[VAR_1->rsize-1] != '/'))) return 1;
    return 0;
}
