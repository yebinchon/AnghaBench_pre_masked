
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {size_t size; scalar_t__ bytes; } ;
typedef TYPE_1__ h2o_buffer_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,size_t) ;
 int FUNC_1 (int *,size_t,int ,int,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,size_t) ;

__attribute__((used)) static void FUNC_3(h2o_buffer_t **VAR_3, size_t VAR_4, uint8_t VAR_5, uint32_t VAR_6, size_t VAR_7,
                                int VAR_8)
{

    size_t VAR_9 = (*VAR_3)->size - VAR_4 - VAR_1;
    if (VAR_9 <= VAR_7) {
        FUNC_1((uint8_t *)((*VAR_3)->bytes + VAR_4), VAR_9, VAR_5,
                                      VAR_0 | VAR_8, VAR_6);
        return;
    }


    size_t VAR_10;
    FUNC_1((uint8_t *)((*VAR_3)->bytes + VAR_4), VAR_7, VAR_5, VAR_8, VAR_6);
    VAR_10 = VAR_4 + VAR_1 + VAR_7;
    while (1) {
        size_t VAR_11 = (*VAR_3)->size - VAR_10;
        FUNC_0(VAR_3, VAR_1);
        FUNC_2((*VAR_3)->bytes + VAR_10 + VAR_1, (*VAR_3)->bytes + VAR_10, VAR_11);
        (*VAR_3)->size += VAR_1;
        if (VAR_11 <= VAR_7) {
            FUNC_1((uint8_t *)((*VAR_3)->bytes + VAR_10), VAR_11, VAR_2,
                                          VAR_0, VAR_6);
            break;
        } else {
            FUNC_1((uint8_t *)((*VAR_3)->bytes + VAR_10), VAR_7, VAR_2, 0,
                                          VAR_6);
            VAR_10 += VAR_1 + VAR_7;
        }
    }
}
