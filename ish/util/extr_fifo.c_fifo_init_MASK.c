
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {size_t capacity; scalar_t__ start; scalar_t__ size; int buf; } ;


 int FUNC_0 (size_t) ;

void FUNC_1(struct fifo *VAR_0, size_t VAR_1) {
    VAR_0->buf = FUNC_0(VAR_1);
    VAR_0->capacity = VAR_1;
    VAR_0->size = VAR_0->start = 0;
}
