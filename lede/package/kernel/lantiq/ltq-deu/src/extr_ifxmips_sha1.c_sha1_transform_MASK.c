
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct sha1_ctx {int started; scalar_t__ hash; } ;
struct TYPE_2__ {scalar_t__ BSY; } ;
struct deu_hash_t {void* MR; void* D5R; void* D4R; void* D3R; void* D2R; void* D1R; TYPE_1__ controlr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0 (struct sha1_ctx *VAR_3, u32 *VAR_4, const u32 *VAR_5)
{
    int VAR_6 = 0;
    volatile struct deu_hash_t *VAR_7 = (struct deu_hash_t *) VAR_2;
    unsigned long VAR_8;

    VAR_1;




    if (VAR_3->started) {
        VAR_7->D1R = *((u32 *) VAR_3->hash + 0);
        VAR_7->D2R = *((u32 *) VAR_3->hash + 1);
        VAR_7->D3R = *((u32 *) VAR_3->hash + 2);
        VAR_7->D4R = *((u32 *) VAR_3->hash + 3);
        VAR_7->D5R = *((u32 *) VAR_3->hash + 4);
    }

    for (VAR_6 = 0; VAR_6 < 16; VAR_6++) {
        VAR_7->MR = VAR_5[VAR_6];
    };


    while (VAR_7->controlr.BSY) {

    }




    *((u32 *) VAR_3->hash + 0) = VAR_7->D1R;
    *((u32 *) VAR_3->hash + 1) = VAR_7->D2R;
    *((u32 *) VAR_3->hash + 2) = VAR_7->D3R;
    *((u32 *) VAR_3->hash + 3) = VAR_7->D4R;
    *((u32 *) VAR_3->hash + 4) = VAR_7->D5R;

    VAR_3->started = 1;

    VAR_0;
}
