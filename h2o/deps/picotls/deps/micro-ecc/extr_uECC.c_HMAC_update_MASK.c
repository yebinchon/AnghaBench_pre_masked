
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int (* update_hash ) (TYPE_1__ const*,int const*,unsigned int) ;} ;
typedef TYPE_1__ uECC_HashContext ;


 int FUNC_0 (TYPE_1__ const*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_1(const uECC_HashContext *VAR_0,
                        const uint8_t *VAR_1,
                        unsigned VAR_2) {
    VAR_0->update_hash(VAR_0, VAR_1, VAR_2);
}
