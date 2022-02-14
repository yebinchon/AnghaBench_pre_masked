
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* w128_t ;
struct TYPE_3__ {void** sfmt; } ;
typedef TYPE_1__ sfmt_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void**,void**,void**,void**) ;

__attribute__((used)) static inline void FUNC_1(sfmt_t *VAR_2, w128_t *VAR_3, int VAR_4) {
    int VAR_5, VAR_6;
    w128_t *VAR_7, *VAR_8;

    VAR_7 = &VAR_2->sfmt[VAR_0 - 2];
    VAR_8 = &VAR_2->sfmt[VAR_0 - 1];
    for (VAR_5 = 0; VAR_5 < VAR_0 - VAR_1; VAR_5++) {
 FUNC_0(&VAR_3[VAR_5], &VAR_2->sfmt[VAR_5], &VAR_2->sfmt[VAR_5 + VAR_1], VAR_7, VAR_8);
 VAR_7 = VAR_8;
 VAR_8 = &VAR_3[VAR_5];
    }
    for (; VAR_5 < VAR_0; VAR_5++) {
 FUNC_0(&VAR_3[VAR_5], &VAR_2->sfmt[VAR_5], &VAR_3[VAR_5 + VAR_1 - VAR_0], VAR_7, VAR_8);
 VAR_7 = VAR_8;
 VAR_8 = &VAR_3[VAR_5];
    }
    for (; VAR_5 < VAR_4 - VAR_0; VAR_5++) {
 FUNC_0(&VAR_3[VAR_5], &VAR_3[VAR_5 - VAR_0], &VAR_3[VAR_5 + VAR_1 - VAR_0], VAR_7, VAR_8);
 VAR_7 = VAR_8;
 VAR_8 = &VAR_3[VAR_5];
    }
    for (VAR_6 = 0; VAR_6 < 2 * VAR_0 - VAR_4; VAR_6++) {
 VAR_2->sfmt[VAR_6] = VAR_3[VAR_6 + VAR_4 - VAR_0];
    }
    for (; VAR_5 < VAR_4; VAR_5++, VAR_6++) {
 FUNC_0(&VAR_3[VAR_5], &VAR_3[VAR_5 - VAR_0], &VAR_3[VAR_5 + VAR_1 - VAR_0], VAR_7, VAR_8);
 VAR_7 = VAR_8;
 VAR_8 = &VAR_3[VAR_5];
 VAR_2->sfmt[VAR_6] = VAR_3[VAR_5];
    }
}
