
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int dummy; } ;
struct md5_ctx {scalar_t__ started; scalar_t__ byte_count; } ;
struct TYPE_2__ {int SM; int ALGO; int INIT; scalar_t__ ENDI; } ;
struct deu_hash_t {TYPE_1__ controlr; } ;


 scalar_t__ VAR_0 ;
 struct md5_ctx* FUNC_0 (struct shash_desc*) ;

__attribute__((used)) static int FUNC_1(struct shash_desc *VAR_1)
{
    struct md5_ctx *VAR_2 = FUNC_0(VAR_1);
    volatile struct deu_hash_t *VAR_3 = (struct deu_hash_t *) VAR_0;

    VAR_3->controlr.ENDI = 0;
    VAR_3->controlr.SM = 1;
    VAR_3->controlr.ALGO = 1;
    VAR_3->controlr.INIT = 1;

    VAR_2->byte_count = 0;
    VAR_2->started = 0;
    return 0;
}
