
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {size_t start; size_t capacity; size_t size; int * buf; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct fifo*) ;
 int FUNC_1 (int *,char*,size_t) ;

int FUNC_2(struct fifo *VAR_1, const void *VAR_2, size_t VAR_3, int VAR_4) {
    if (VAR_3 > FUNC_0(VAR_1)) {
        if (!(VAR_4 & VAR_0))
            return 1;
        size_t VAR_5 = VAR_3 - FUNC_0(VAR_1);
        VAR_1->start = (VAR_1->start + VAR_5) % VAR_1->capacity;
        VAR_1->size -= VAR_5;
    }

    size_t VAR_6 = (VAR_1->start + VAR_1->size) % VAR_1->capacity;;
    size_t VAR_7 = VAR_1->capacity - VAR_6;
    if (VAR_7 > VAR_3)
        VAR_7 = VAR_3;
    FUNC_1(&VAR_1->buf[VAR_6], VAR_2, VAR_7);
    FUNC_1(&VAR_1->buf[0], (char *) VAR_2 + VAR_7, VAR_3 - VAR_7);
    VAR_1->size += VAR_3;
    return 0;
}
