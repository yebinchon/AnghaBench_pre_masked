
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_4__ {unsigned int nloss; int ntotal; } ;
struct TYPE_5__ {int bits_avail; int bits; TYPE_1__ ratio; } ;
struct TYPE_6__ {TYPE_2__ rand_; } ;
struct loss_cond_t {TYPE_3__ data; } ;
typedef int ptls_cipher_context_t ;


 int FUNC_0 (int *,int*,char*,int) ;
 int * FUNC_1 (int *,int,int**) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct loss_cond_t *VAR_1)
{
    static ptls_cipher_context_t *VAR_2;

    if (VAR_1->data.rand_.bits_avail == 0) {
        if (VAR_2 == ((void*)0)) {

            static uint64_t VAR_3[2];
            VAR_2 = FUNC_1(&VAR_0, 1, &VAR_3);
            ++VAR_3[0];
        }

        VAR_1->data.rand_.bits = 0;
        unsigned VAR_4;
        for (VAR_4 = 0; VAR_4 != VAR_1->data.rand_.ratio.nloss; ++VAR_4) {

            uint64_t VAR_5;
            do {
                uint32_t VAR_6;
                FUNC_0(VAR_2, &VAR_6, "01234567", 4);
                VAR_5 = (uint64_t)1 << (VAR_6 % VAR_1->data.rand_.ratio.ntotal);
            } while ((VAR_1->data.rand_.bits & VAR_5) != 0);

            VAR_1->data.rand_.bits |= VAR_5;
        }
        VAR_1->data.rand_.bits_avail = VAR_1->data.rand_.ratio.ntotal;
    }



    return ((VAR_1->data.rand_.bits >> --VAR_1->data.rand_.bits_avail) & 1) == 0;
}
