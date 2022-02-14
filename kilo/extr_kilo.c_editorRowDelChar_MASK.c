
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ chars; } ;
typedef TYPE_1__ erow ;
struct TYPE_6__ {int dirty; } ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

void FUNC_2(erow *VAR_1, int VAR_2) {
    if (VAR_1->size <= VAR_2) return;
    FUNC_1(VAR_1->chars+VAR_2,VAR_1->chars+VAR_2+1,VAR_1->size-VAR_2);
    FUNC_0(VAR_1);
    VAR_1->size--;
    VAR_0.dirty++;
}
