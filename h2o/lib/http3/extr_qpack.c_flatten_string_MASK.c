
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* entries; int size; } ;
typedef TYPE_1__ h2o_byte_vector_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*,size_t,unsigned int) ;
 size_t FUNC_1 (int*,void*,size_t) ;
 int* FUNC_2 (int*,size_t,unsigned int) ;
 int FUNC_3 (int*,...) ;
 int FUNC_4 (int*,int*,size_t) ;

__attribute__((used)) static void FUNC_5(h2o_byte_vector_t *VAR_2, const char *VAR_3, size_t VAR_4, unsigned VAR_5, int VAR_6)
{
    size_t VAR_7;

    if (VAR_6 || (VAR_7 = FUNC_1(VAR_2->entries + VAR_2->size + 1, (void *)VAR_3, VAR_4)) == VAR_1) {

        VAR_2->entries[VAR_2->size] &= ~((2 << VAR_5) - 1);
        FUNC_0(VAR_2, VAR_4, VAR_5);
        FUNC_3(VAR_2->entries + VAR_2->size, VAR_3, VAR_4);
        VAR_2->size += VAR_4;
    } else {

        uint8_t VAR_8[VAR_0], *VAR_9 = VAR_8;
        *VAR_9 = VAR_2->entries[VAR_2->size] & ~((1 << VAR_5) - 1);
        *VAR_9 |= (1 << VAR_5);
        VAR_9 = FUNC_2(VAR_9, VAR_7, VAR_5);
        if (VAR_9 - VAR_8 == 1) {
            VAR_2->entries[VAR_2->size] = VAR_8[0];
        } else {
            FUNC_4(VAR_2->entries + VAR_2->size + (VAR_9 - VAR_8), VAR_2->entries + VAR_2->size + 1, VAR_7);
            FUNC_3(VAR_2->entries + VAR_2->size, VAR_8, VAR_9 - VAR_8);
        }
        VAR_2->size += VAR_9 - VAR_8 + VAR_7;
    }
}
