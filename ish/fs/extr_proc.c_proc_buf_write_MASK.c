
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_data {size_t size; size_t capacity; char* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,void const*,size_t) ;
 char* FUNC_2 (char*,size_t) ;

void FUNC_3(struct proc_data *VAR_0, const void *VAR_1, size_t VAR_2) {
    if (VAR_0->size + VAR_2 > VAR_0->capacity) {
        size_t VAR_3 = VAR_0->capacity;
        while (VAR_0->size + VAR_2 > VAR_3)
            VAR_3 *= 2;
        char *VAR_4 = FUNC_2(VAR_0->data, VAR_3);
        if (VAR_4 == ((void*)0)) {

            return;
        }
        VAR_0->data = VAR_4;
        VAR_0->capacity = VAR_3;
    }
    FUNC_0(VAR_0->size + VAR_2 <= VAR_0->capacity);
    FUNC_1(&VAR_0->data[VAR_0->size], VAR_1, VAR_2);
    VAR_0->size += VAR_2;
}
