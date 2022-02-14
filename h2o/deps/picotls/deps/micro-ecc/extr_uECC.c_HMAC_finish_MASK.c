
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int* tmp; int result_size; unsigned int block_size; int (* finish_hash ) (TYPE_1__ const*,int*) ;int (* update_hash ) (TYPE_1__ const*,int*,unsigned int) ;int (* init_hash ) (TYPE_1__ const*) ;} ;
typedef TYPE_1__ uECC_HashContext ;


 int FUNC_0 (TYPE_1__ const*,int*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,int*,unsigned int) ;
 int FUNC_3 (TYPE_1__ const*,int*,unsigned int) ;
 int FUNC_4 (TYPE_1__ const*,int*) ;

__attribute__((used)) static void FUNC_5(const uECC_HashContext *VAR_0,
                        const uint8_t *VAR_1,
                        uint8_t *VAR_2) {
    uint8_t *VAR_3 = VAR_0->tmp + 2 * VAR_0->result_size;
    unsigned VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_0->result_size; ++VAR_4)
        VAR_3[VAR_4] = VAR_1[VAR_4] ^ 0x5c;
    for (; VAR_4 < VAR_0->block_size; ++VAR_4)
        VAR_3[VAR_4] = 0x5c;

    VAR_0->finish_hash(VAR_0, VAR_2);

    VAR_0->init_hash(VAR_0);
    VAR_0->update_hash(VAR_0, VAR_3, VAR_0->block_size);
    VAR_0->update_hash(VAR_0, VAR_2, VAR_0->result_size);
    VAR_0->finish_hash(VAR_0, VAR_2);
}
