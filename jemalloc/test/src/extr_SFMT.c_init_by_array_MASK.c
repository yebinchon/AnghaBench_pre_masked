
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int w128_t ;
typedef int uint32_t ;
struct TYPE_5__ {int idx; int initialized; TYPE_3__* sfmt; } ;
typedef TYPE_1__ sfmt_t ;
struct TYPE_6__ {int* u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (void**,int,int) ;

sfmt_t *FUNC_6(uint32_t *VAR_2, int VAR_3) {
    void *VAR_4;
    sfmt_t *VAR_5;
    int VAR_6, VAR_7, VAR_8;
    uint32_t VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12 = VAR_0 * 4;
    uint32_t *VAR_13;

    if (FUNC_5(&VAR_4, sizeof(w128_t), sizeof(sfmt_t)) != 0) {
 return ((void*)0);
    }
    VAR_5 = (sfmt_t *)VAR_4;
    VAR_13 = &VAR_5->sfmt[0].u[0];

    if (VAR_12 >= 623) {
 VAR_10 = 11;
    } else if (VAR_12 >= 68) {
 VAR_10 = 7;
    } else if (VAR_12 >= 39) {
 VAR_10 = 5;
    } else {
 VAR_10 = 3;
    }
    VAR_11 = (VAR_12 - VAR_10) / 2;

    FUNC_3(VAR_5->sfmt, 0x8b, sizeof(VAR_5->sfmt));
    if (VAR_3 + 1 > VAR_1) {
 VAR_8 = VAR_3 + 1;
    } else {
 VAR_8 = VAR_1;
    }
    VAR_9 = FUNC_0(VAR_13[FUNC_2(0)] ^ VAR_13[FUNC_2(VAR_11)]
       ^ VAR_13[FUNC_2(VAR_1 - 1)]);
    VAR_13[FUNC_2(VAR_11)] += VAR_9;
    VAR_9 += VAR_3;
    VAR_13[FUNC_2(VAR_11 + VAR_10)] += VAR_9;
    VAR_13[FUNC_2(0)] = VAR_9;

    VAR_8--;
    for (VAR_6 = 1, VAR_7 = 0; (VAR_7 < VAR_8) && (VAR_7 < VAR_3); VAR_7++) {
 VAR_9 = FUNC_0(VAR_13[FUNC_2(VAR_6)] ^ VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)]
    ^ VAR_13[FUNC_2((VAR_6 + VAR_1 - 1) % VAR_1)]);
 VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)] += VAR_9;
 VAR_9 += VAR_2[VAR_7] + VAR_6;
 VAR_13[FUNC_2((VAR_6 + VAR_11 + VAR_10) % VAR_1)] += VAR_9;
 VAR_13[FUNC_2(VAR_6)] = VAR_9;
 VAR_6 = (VAR_6 + 1) % VAR_1;
    }
    for (; VAR_7 < VAR_8; VAR_7++) {
 VAR_9 = FUNC_0(VAR_13[FUNC_2(VAR_6)] ^ VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)]
    ^ VAR_13[FUNC_2((VAR_6 + VAR_1 - 1) % VAR_1)]);
 VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)] += VAR_9;
 VAR_9 += VAR_6;
 VAR_13[FUNC_2((VAR_6 + VAR_11 + VAR_10) % VAR_1)] += VAR_9;
 VAR_13[FUNC_2(VAR_6)] = VAR_9;
 VAR_6 = (VAR_6 + 1) % VAR_1;
    }
    for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
 VAR_9 = FUNC_1(VAR_13[FUNC_2(VAR_6)] + VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)]
    + VAR_13[FUNC_2((VAR_6 + VAR_1 - 1) % VAR_1)]);
 VAR_13[FUNC_2((VAR_6 + VAR_11) % VAR_1)] ^= VAR_9;
 VAR_9 -= VAR_6;
 VAR_13[FUNC_2((VAR_6 + VAR_11 + VAR_10) % VAR_1)] ^= VAR_9;
 VAR_13[FUNC_2(VAR_6)] = VAR_9;
 VAR_6 = (VAR_6 + 1) % VAR_1;
    }

    VAR_5->idx = VAR_1;
    FUNC_4(VAR_5);
    VAR_5->initialized = 1;

    return VAR_5;
}
