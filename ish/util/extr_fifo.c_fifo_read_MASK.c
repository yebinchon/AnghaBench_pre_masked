
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fifo {size_t start; size_t size; size_t capacity; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct fifo*) ;
 int FUNC_1 (char*,int *,size_t) ;

int FUNC_2(struct fifo *VAR_2, void *VAR_3, size_t VAR_4, int VAR_5) {
    if (VAR_4 > FUNC_0(VAR_2))
        return 1;

    size_t VAR_6 = VAR_2->start;
    if (VAR_5 & VAR_0)
        VAR_6 = (VAR_6 + (VAR_2->size - VAR_4)) % VAR_2->capacity;

    size_t VAR_7 = VAR_2->capacity - VAR_2->start;
    if (VAR_7 > VAR_4)
        VAR_7 = VAR_4;
    FUNC_1(VAR_3, &VAR_2->buf[VAR_6], VAR_7);
    FUNC_1((char *) VAR_3 + VAR_7, &VAR_2->buf[0], VAR_4 - VAR_7);

    if (!(VAR_5 & VAR_1)) {
        VAR_2->start = (VAR_6 + VAR_4) % VAR_2->capacity;
        VAR_2->size -= VAR_4;
    }
    return 0;
}
