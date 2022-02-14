
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct crypto_tfm {int dummy; } ;
struct arc4_t {void* K0R; void* K1R; void* K2R; void* K3R; } ;
struct TYPE_2__ {unsigned int key_length; scalar_t__ buf; } ;


 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,void**,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_3, const u8 *VAR_4,
                       unsigned int VAR_5)
{

        volatile struct arc4_t *VAR_6 = (struct arc4_t *) VAR_0;
        u32 *VAR_7 = (u32 *)VAR_4;



        *VAR_1 = ( (1<<31) | ((VAR_5 - 1)<<27) | (1<<26) | (3<<16) );


        VAR_6->K3R = *((u32 *) VAR_7 + 0);
        VAR_6->K2R = *((u32 *) VAR_7 + 1);
        VAR_6->K1R = *((u32 *) VAR_7 + 2);
        VAR_6->K0R = *((u32 *) VAR_7 + 3);







        return 0;
}
